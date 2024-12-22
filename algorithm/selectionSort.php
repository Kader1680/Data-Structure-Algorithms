<?php
	
function selectionSort($arr) {
    for ($i = 0; $i < sizeof($arr) - 1; $i++) {
        $min = $i;  
        for ($j = $i + 1; $j < sizeof($arr); $j++) {
            if ($arr[$j] < $arr[$min]) {
                $min = $j; 
            }
        }
         
        [$arr[$i], $arr[$min]] = [$arr[$min], $arr[$i]];
    }
    return $arr;
}
$arr = [4, 9, 2, 3];
$sortedArr = selectionSort($arr);

echo implode(", ", $sortedArr);
	
?>