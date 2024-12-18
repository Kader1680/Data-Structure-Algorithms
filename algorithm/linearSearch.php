<?php
	
function learnSearch($arr, $target){
    for ($i = 0; $i < sizeof($arr); $i++){
         if ($target == $arr[$i]){
           return $i;
         } 
    }
    return -1;
}

$arr = [2, 3, 45, 67];
$target = 3;
echo learnSearch($arr, $target);
	
?>


// best case ==> when the target is index 0 so the first element in the array 
// worst case ==> when is not found or in the last elemnt of the array 