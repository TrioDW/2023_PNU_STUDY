<?php
	require_once("includes/travel-config.inc.php");
	require_once("includes/exdb.php");

	$filterCountries = readPopularCountries();
	$filterCities = readFilterCities();

	// showing all images
	// you may remove or move this when GOAL #3 is done.
	$images = readAllImages();

	if( $_SERVER['REQUEST_METHOD'] == 'GET' 
		&& (isset($_GET['country']) || isset($_GET['city']) )){
		//
		// GOAL #3
		// - depending on the chosen filter value,
		//   show the corresponding images
		//   (you'll find useful functions in includes/exdb.php)
   
      $selectedCountry = isset($_GET['country']) ? $_GET['country'] : null;
      $selectedCity = isset($_GET['city']) ? $_GET['city'] : null;

      if ($selectedCountry === "NotSelected" && $selectedCity === "NotSelected") {
         // Show all images if no filter is selected
         $images = readAllImages();
      } elseif ($selectedCountry !== "NotSelected") {
         // Show images based on selected country
         $images = readImageCountries($selectedCountry);
      } elseif ($selectedCity !== "NotSelected") {
         // Show images based on selected city
         $images = readImageCities($selectedCity);
      }
	}
?>

<!DOCTYPE html>
<html lang="en">
<head>
   <title>Travel Template</title>
   <?php include 'includes/travel-head.inc.php'; ?>
</head>
<body>

<?php include 'includes/travel-header.inc.php'; ?>
   
<div class="container">  <!-- start main content container -->
   <div class="row">  <!-- start main content row -->
      <div class="col-md-3">  <!-- start left navigation rail column -->
         <?php include 'includes/travel-left-rail.inc.php'; ?>
      </div>  <!-- end left navigation rail --> 
      
      <div class="col-md-9">  <!-- start main content column -->
         <ol class="breadcrumb">
           <li><a href="#">Home</a></li>
           <li><a href="#">Browse</a></li>
           <li class="active">Images</li>
         </ol>          
    
         <div class="well well-sm">
            <form class="form-inline" role="form" method="get" action="<?php echo $_SERVER['PHP_SELF']; ?>">
              <div class="form-group" >
                <select class="form-control" name="city">
                  <option value="NotSelected">Filter by City</option>
                  <?php
				    //
					 // GOAL #1 Make options for city filter
					 //  - use for/foreach & echo for this task
                  foreach ($filterCities as $city) {
                     echo '<option value="' . $city['AsciiName'] . '">' . $city['AsciiName'] . '</option>';
                  }
                  ?>
                </select>
              </div>
              <div class="form-group">
                <select class="form-control" name="country">
                  <option value="NotSelected">Filter by Country</option>
                  <?php
				     //
					 // GOAL #2 Make options for country filter
					 //  - use for/foreach & echo for this task
                  foreach ($filterCountries as $country) {
                     echo '<option value="' . $country['CountryName'] . '">' . $country['CountryName'] . '</option>';
                  }
                  ?>
                </select>
              </div>  
              <button type="submit" class="btn btn-primary">Filter</button>
            </form>         
         </div>      <!-- end filter well -->
         
         <div class="well">
            <div style="display: flex; justify-content: flex-start;"class="row">
               <table>
                   <?php
                     $path="images/travel/square/";
                     $i=0;
                     echo '<tr>';
                     foreach($images as $img){
                        // echo utf8_encode($img[0]);
                        echo '<td><img style="background-color: #ffffff; padding: 5px 15px; margin: 5px 12px;" src="'.$path.$img[0].'"></td>';
                        $i = $i + 1;
                        if($i % 4 == 0){
                           echo '</tr><tr>';
                        }
                     }
                     echo '</tr>';
                   ?>
                  </table>
            </div>
         </div>   <!-- end images well -->

      </div>  <!-- end main content column -->
   </div>  <!-- end main content row -->
</div>   <!-- end main content container -->
   
<?php include 'includes/travel-footer.inc.php'; ?>   

   
   
 <!-- Bootstrap core JavaScript
 ================================================== -->
 <!-- Placed at the end of the document so the pages load faster -->
 <script src="bootstrap3_travelTheme/assets/js/jquery.js"></script>
 <script src="bootstrap3_travelTheme/dist/js/bootstrap.min.js"></script>
 <script src="bootstrap3_travelTheme/assets/js/holder.js"></script>
</body>
</html>