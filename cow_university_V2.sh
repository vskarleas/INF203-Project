#!/bin/sh

if [ $1 -gt 0 ]
then
    num=$1
    for i in $1
    do
        limnos=2
        karpa=$(( $num % $i ))
        while [ $limnos < $num -a $karpa -ne 0 ]
        do
            limnos=$(( $limnos + 1 ))
            karpa=$(( $1 % $limnos ))
        done
        if [ $limnos -eq $num ]
        then
            lamda=0
        else
            lamda=1
        fi

        if [ $lamda -eq 0 ]
        then
            cowsay $num
        fi
        num=$num-1
    done
else
    echo We need a positive number
    echo Operation terminated
fi