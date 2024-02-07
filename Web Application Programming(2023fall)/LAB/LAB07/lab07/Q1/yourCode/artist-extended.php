<?php

// Copy and paste the Artist class implementation from sampleCode/artist.php
// you can modify this code in whatever ways you wish
// - you can and you will add new sub-classes: PaintingArtist and SculptureArtist
// - you can revise the Artist class if needed

class Artist {
  const EARLIEST_DATE = 'January 1, 1200';
  private static $artistCount = 0;
  private $firstName;
  private $lastName;
  private $birthDate;
  private $deathDate;
  private $birthCity;
  // notice constructor is using setters instead
  // of accessing properties
  function __construct($firstName, $lastName, $birthCity, $birthDate,
                       $deathDate) {
    $this->setFirstName($firstName);
    $this->setLastName($lastName);
    $this->setBirthCity($birthCity);
    $this->setBirthDate($birthDate);
    $this->setDeathDate($deathDate);
    self::$artistCount++;
  }
  // saving book space by putting each getter on single line
  public function getFirstName() { return $this->firstName; }
  public function getLastName() { return $this->lastName; }
  public function getBirthCity() { return $this->birthCity; }
  public function getBirthDate() { return $this->birthDate; }
  public function getDeathDate() { return $this->deathDate; }
  public static function getArtistCount() { return self::$artistCount; }
  public function getEarliestAllowedDate () {
    return date_create(self::EARLIEST_DATE);
  }
  public function setLastName($lastName)
  { $this->lastName = $lastName; }
  public function setFirstName($firstName)
  { $this->firstName = $firstName; }
  public function setBirthCity($birthCity)
  { $this->birthCity = $birthCity; }
  public function setBirthDate($birthdate) {
    // set variable only if passed a valid date string
    $date = date_create($birthdate);
    if ( ! $date ) {
      $this->birthDate = $this->getEarliestAllowedDate();
    }
    else {
      // if very early date then change it to earliest allowed date
      if ( $date < $this->getEarliestAllowedDate() ) {
        $date = $this->getEarliestAllowedDate();
      }
      $this->birthDate = $date;
    }
  }
  public function setDeathDate($deathdate) {
    // set variable only if passed a valid date string
    $date = date_create($deathdate);
    if ( ! $date ) {
      $this->deathDate = $this->getEarliestAllowedDate();
    }
    else {
      // set variable only if later than birth date
      if ($date > $this->getBirthDate()) {
        $this->deathDate = $date;
      }
      else {
        $this->deathDate = $this->getBirthDate();
      }
    }
  }
  public function outputAsTable() {
    $table = "<table>";
    $table .= "<tr><th colspan='2'>";
    $table .= $this->firstName . " " . $this->lastName;
    $table .= "</th></tr>";
    $table .= "<tr><td>Birth:</td>";
    $table .= "<td>" . date_format($this->birthDate,'d M Y');;
    $table .= "(" . $this->birthCity . ")</td></tr>";
    $table .= "<tr><td>Death:</td>";
    $table .= "<td>" . date_format($this->deathDate,'d M Y') . "</td></tr>";
    $table .= "</table>";
    return $table;
  }
}
	// start with the class Artist implementation 
	// from ../sampleCode/artist.php

class PaintingArtist extends Artist {
  private $paintingWorkTitle;
  
  public function __construct($firstName, $lastName, $birthCity, $birthDate, $deathDate, $paintingWorkTitle) {
      parent::__construct($firstName, $lastName, $birthCity, $birthDate, $deathDate);
      $this->paintingWorkTitle = $paintingWorkTitle;
  }
  public function getPaintingWorkTitle() {
      return $this->paintingWorkTitle;
  }
  public function outputAsTable() {
      $table = parent::outputAsTable();
      $table .= "<table><tr><td>Painting Work Title:</td><td>{$this->paintingWorkTitle}</td></tr></table>";
      return $table;
  }
}

class SculptureArtist extends Artist {
  private $sculptureWorkTitle;
  
  public function __construct($firstName, $lastName, $birthCity, $birthDate, $deathDate, $sculptureWorkTitle) {
      parent::__construct($firstName, $lastName, $birthCity, $birthDate, $deathDate);
      $this->sculptureWorkTitle = $sculptureWorkTitle;
  }
  public function getSculptureWorkTitle() {
      return $this->sculptureWorkTitle;
  }
  public function outputAsTable() {
      $table = parent::outputAsTable();
      $table .= "<table><tr><td>Sculpture Work Title:</td><td>{$this->sculptureWorkTitle}</td></tr></table>";
      return $table;
  }
}

?>

