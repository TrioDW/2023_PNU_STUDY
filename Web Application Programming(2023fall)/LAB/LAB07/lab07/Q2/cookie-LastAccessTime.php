<!-- 
Complete the code below!

Some useful info:
  * Printing out the current time: echo date('Y/m/d h:i:s a', time())
  *  The setcookie() function must appear BEFORE the <html> tag
-->
<?php
  date_default_timezone_set('Asia/Seoul');

  $lastAccess = "unknown";
  if(isset($_COOKIE['LastAccess'])) {
      $lastAccess = $_COOKIE['LastAccess'];
  }

  // Set the cookie for the current time
  $currentTime = date('Y/m/d h:i:s a', time());
  setcookie('LastAccess', $currentTime, time() + (86400 * 30), "/"); // Cookie set to expire in 30 days
?>
<html>
<body>
<hr><h3>Checking the last access time using cookie</h3><hr>
<?php
  echo "<p>Current time: " . date('Y/m/d h:i:s a', time()) . "</p>";
  echo "<p>Last access time: " . $lastAccess . "</p>";
?>
</body>
</html>