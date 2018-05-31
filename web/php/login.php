<?php
require "database.php";

$databasse = new Database();

$user = strip_tags(substr($_POST['pseudo'],0,32));
$pw = strip_tags(substr($_POST['password'],0,32));

$cleanpw = crypt(md5($pw),md5($user));

$sqlQuery = "SELECT * FROM user WHERE name='$user' and password_hash='$cleanpw' and est_active=true";

$result = $database->execute($sqlQuery);

if(isset($result[0])){
    session_start();
    $_SESSION=["pseudo"] = $user;
        
    header('Location: menu.php');
}
else{
    header('Location: error.php/baddpassword');
}
?>
