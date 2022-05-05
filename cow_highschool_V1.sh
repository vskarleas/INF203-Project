#!/bin/sh

a=1
clear
while [ $a -le $1 ]
do
   lamda=$(( $a * $a ))
   cowsay $lamda
   sleep 1
   clear
   a=`expr $a + 1`
done