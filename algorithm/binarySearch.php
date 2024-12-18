<?php 

function binarySearch($arr, $target) {
    $low = 0; 
    $hei = sizeof($arr) - 1; 

    while ($low <= $hei) {
        $mid = intdiv($low + $hei, 2); 

        if ($arr[$mid] == $target) {
            return $arr[$mid];
        } else if ($arr[$mid] < $target) {
            // Search on the right side
            $low = $mid + 1;
        } else {
            // Search on the left side
            $hei = $mid - 1;
        }
    }

    return null; // Target not found
}

$arr = [2, 3, 4, 15, 26, 37];
$target = 4;
echo binarySearch($arr, $target);



?>