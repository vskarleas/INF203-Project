
kappa=$(echo $1 | cut -d" " -f 2)
if [ "$kappa" == "+" ]
then
    echo +
    n1=$(echo $1 | cut -d+ -f 1)
    n2=$(echo $1 | cut -d+ -f 2)
    lamda=$(expr $n1 + $n2)
    cowsay -e $lamda $1
elif [ "$kappa" == "-" ]
then
    echo -
    n1=$(echo $1 | cut -d- -f 1)
    n2=$(echo $1 | cut -d- -f 2)
    lamda=$(expr $n1 - $n2)
    cowsay -e $lamda $1
elif [ "$kappa" == "/" ]
then
    echo /
    n1=$(echo $1 | cut -d/ -f 1)
    n2=$(echo $1 | cut -d/ -f 2)
    lamda=$(expr $n1 / $n2)
    cowsay -e $lamda $1
else
    n1=$(echo $1 | cut -d" " -f 1)
    n2=$(echo $1 | cut -d" " -f 3)
    echo $n1
    echo $n2
    lamda=$(expr $a \* $b)
    cowsay -e $lamda $1
fi