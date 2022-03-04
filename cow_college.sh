clear
n1=0
n2=1
if [ $1 -lt 0 ]
then
    cowsay "incorrect input"
    sleep 3
    clear
elif [ $1 -eq 1 -o $1 -eq 2 ]
then
    cowsay $n2
    sleep 1
    clear
elif [ $1 -eq 0 ]
then
    echo Fibonnaci number is 0
    sleep 3
    clear
else
    nht=$(( $n1 + $n2 ))
    cowsay $nht
    sleep 1
    clear
    while [ $nht -lt $1 ]
    do
        n1=$n2
        n2=$nht
        nht=$(( $n1 + $n2 ))
        cowsay $nht
        sleep 1
        clear
    done
fi