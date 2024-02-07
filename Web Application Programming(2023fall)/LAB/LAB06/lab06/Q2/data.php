<hr>
<?php
try {
	$connString = "mysql:host=localhost;port=3307;dbname=bookrepo";
	$user = "testuser";
	$pass = "mypassword";

	$pdo = new PDO($connString, $user, $pass);
	$pdo->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
	
	#
	# TODO 1: fill out the following sql statement such that
	#         you can select all from the Categories table
	#         ordered by CategoryName
	$sql = "SELECT * FROM Categories ORDER BY CategoryName";
	$result = $pdo->query($sql);

	while($row = $result->fetch()) {
		echo $row['ID']."-".$row['CategoryName']."<br/>";
	}
	$pdo = null;
}
catch(PDOException $e) {
	die($e->getMessage());
}
?>
<hr>
<form method="post" action="rename.php">
(old) category name: <input type="text" name="old"/><br/>
(new) category name: <input type="text" name="new"/><br/>
<input type="submit" />
</form>
<hr>