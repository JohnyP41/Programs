<?php
function IsPrime($n)
{
 for($x=2; $x<$n; $x++)
   {
      if($n %$x ==0)
	      {
		   return 0;
		  }
    }
  return 1;
   }
$a = IsPrime(104543);
if ($a==0)
echo 'To nie jest liczba pierwsza'."\n";
else
echo 'To jest liczba pierwsza'."\n";
?>