#!/bin/sh

a=1
clear
while [ $a -le $1 ]
do
   cowsay $a 
   sleep 1
   clear
   a=`expr $a + 1`
done
cowsay -T \U 1