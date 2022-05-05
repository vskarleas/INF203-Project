#!/bin/bash 

a=$1 
b=$2 
mtp=$(expr $a \* $b)
cowsay -e $mtp $a*$b 