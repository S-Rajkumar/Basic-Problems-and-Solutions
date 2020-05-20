<?php
//include required files
require "../classes/Basic_Problems_Solutions.php";

//include headers
header("Access-Control-Allow-Origin: *");
//header("Content-type:application/json: charset:UTF-8");
header("Access-Control-Allow-Methods: POST");

$obj = new Basic_Problems_Solutions();

if($_SERVER['REQUEST_METHOD'] == "POST")
{
//	$data = json_decode(file_get_contents('php://input'));
	$obj->num = $_POST['reverse_int'];
	$res = $obj->reverse_number();
	echo json_encode($res);
}
?>
