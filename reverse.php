<?php
    $s = readline('String:');
    $r = "";

    $i = 0;
    for($i=strlen($s)-1;$i>-1;$i--){
        $r .= $s[$i];
    }

    echo $r;
?>