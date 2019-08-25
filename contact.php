<?php

$user=$_POST['USER'];
$sms=$_POST['SMS'];

$message = "1 " . $user ."," . $sms;
$file = 'users.txt';
$fd = fopen($file, "a");

if ($fd) { 
    fwrite($fd, $message . "\n");   
    fclose($fd); 
}

header('Location: ' . $_SERVER['HTTP_REFERER']);
?>