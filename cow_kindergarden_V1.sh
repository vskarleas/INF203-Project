numbers="1 2 3 4 5 6 7 8 9 10"
var=""
clear
for var in $numbers
do
    cowsay $var
    sleep 1
    clear
done