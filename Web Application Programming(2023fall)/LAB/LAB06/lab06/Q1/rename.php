<?php
	$connString = "mysql:host=localhost;port=3307;dbname=bookrepo";
	$user = "testuser";
	$pass = "mypassword";

	$pdo = new PDO($connString, $user, $pass);
	$pdo->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);

	#
	# TODO 2: fill out the following two lines of code
	#
	$from = $_POST['old'];
	$to = $_POST['new'];

	$sql = "UPDATE Categories SET CategoryName='$to' WHERE CategoryName='$from'";
	$count = $pdo->exec($sql);

	$pdo = null;

	echo "<p>Updated ".$count." rows</p>";
?>
<meta http-equiv="refresh" content="3;url=index.php" />