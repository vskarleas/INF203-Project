isPremier(){
    limnos=2
    if [ $1 -gt 0 ]
    then
        karpa=$(( $1 % $i ))
        while [ $limnos < $1 -a $karpa -ne 0 ]
        do
            limnos=$(( $limnos + 1 ))
            karpa=$(( $1 % $limnos ))
        done
        if [ $limnos -eq $1 ]
        then
            exit 0
        else
            exit 1
        fi
    fi
}

if [ $1 -gt 0 ]
then
    for i in $1
    do
        isPremier $i
        lamda=$?
        if [ lamda -eq 0 ]
        then
            echo $i is premier
            sleep 3
            clear
        fi
    done
else
    echo We need a positive number
    echo Operation terminated
fi