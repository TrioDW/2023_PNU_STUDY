
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

<?php
$cookie_name = "LastAccess";

// Set the cookie's expiration time to the past to delete it
setcookie($cookie_name, "", time() - 3600, "/");

echo "Cookie delete for \$_COOKIE[" . $cookie_name . "] is done";
?>
</body>
</html>
