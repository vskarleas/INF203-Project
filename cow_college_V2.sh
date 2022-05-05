#!/bin/bash 

n=$1
a=0
b=1
for ((i=0; i<n; i++))
do
        fn=$(($a + $b))
        a=$b
        b=$fn
        cowsay $fn
done
 fn=$(($a + $b))
    a=$b
    b=$fn
    cowsay -T \U $fn