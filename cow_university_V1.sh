#!/bin/bash 

n=$1

for ((i=2;i<n; i++))
do 
    mod=$(expr $n%$i)
    if [ $mod -ne 0 ]
    then 
        cowsay $i
    fi
done