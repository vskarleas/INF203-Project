#!/bin/bash 

i=$1
while [ $i -ne 1 ] 
do 
    n=$(($i * $i))
    cowsay $n
    ((i--))
done 
cowsay -T \U 1