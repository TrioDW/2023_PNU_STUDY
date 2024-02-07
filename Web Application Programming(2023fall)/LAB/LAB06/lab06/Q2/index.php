<!-- login.php -->

<?php
if ($_SERVER['REQUEST_METHOD'] === 'POST') {
    // Check login credentials
    $enteredUsername = $_POST['id'];
    $enteredPassword = $_POST['pw'];

    $validUsername = "testuser";
    $validPassword = "mypassword";

    if ($enteredUsername === $validUsername && $enteredPassword === $validPassword) {
        // Redirect to data.php if credentials are valid
        header("Location: data.php");
        exit();
    } else {
        // Redirect to error.php if credentials are invalid
        header("Location: error.php");
        exit();
    }
}
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Login</title>
</head>
<body>

<!-- Login Form -->
<form method="post" action="index.php">
    <label for="id">ID:</label>
    <input type="text" name="id" required/><br/>

    <label for="pw">Password:</label>
    <input type="password" name="pw" required/><br/>

    <input type="submit" value="Login"/>
</form>

</body>
</html>
