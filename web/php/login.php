<?php
require "database.php";

$database = new Database();

$user = strip_tags(substr($_POST['pseudo'],0,32));
$pw = strip_tags(substr($_POST['password'],0,32));

$cleanpw = crypt(md5($pw),md5($user));

$sqlQuery = "SELECT * FROM user WHERE name='$user' and password_hash='$cleanpw' and est_active=true";

$result = $database->execute($sqlQuery);

if(isset($result[0])){
    session_start();
    $_SESSION["pseudo"] = $user;

    echo "OK";
    header('Location: menu.php');
    exit();
}
else{
    echo "KO";
    header('Location: error.php/baddpassword/'.$cleanpw);
    exit();
}

echo "OOKK";
header('Location: error.php/unknowerror/'.$cleanpw);
?>
