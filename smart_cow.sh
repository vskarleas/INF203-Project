if [ "$1" == *"+"* ]
then
echo +
n1=$(echo $1 | cut -d+ -f 1)
n2=$(echo $1 | cut -d+ -f 2)
lamda=$(expr $n1 + $n2)
cowsay $1=$lamda
elif [ "$1" == *"-"* ]
then
echo -
n1=$(echo $1 | cut -d- -f 1)
n2=$(echo $1 | cut -d- -f 2)
lamda=$(expr $n1 - $n2)
cowsay "$n1-$n2=$lamda"
elif [ "$1" == *"/"* ]
then
echo /
n1=$(echo $1 | cut -d/ -f 1)
n2=$(echo $1 | cut -d/ -f 2)
lamda=$(expr $n1 / $n2)
cowsay $1=$lamda
else
echo \*
n1=$(echo $1 | cut -d* -f 1)
n2=$(echo $1 | cut -d* -f 2)
echo $n1
echo $n2
lamda=$(( $n1 * $n2))
cowsay "$n1\*$n2=$lamda"
fi