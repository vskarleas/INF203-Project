#!/bin/bash 

i=$1
while [ $i -ne 1 ] 
do 
    cowsay $i
    ((i--))
    sleep 1
    clear
done 
cowsay -T \U 1