clear
echo Before we start, which is your name ?
read name
clear
echo Welcome to the online feedback portal by Lekitable $name !
sleep 1
cowsay "I am Marlyn, your personal assistant"
sleep 2
clear
echo Welcome to the online feedback portal by Lekitable $name !
cowsay "We will start from our latest website version feedback"
sleep 3
echo Welcome to the online feedback portal by Lekitable $name !
clear
cowsay "Whenever you are ready to start, reply below"
echo "Yes or No ?"
read response
if [ "$response" = "Yes" ]
then
cowsay Let\'s begin $name
count=0
total=34
pstr="[=======================================================================]"

while [ $count -lt $total ]; do
  sleep 0.25 # this is work
  count=$(( $count + 1 ))
  pd=$(( $count * 73 / $total ))
  printf "\r%3d.%1d%% %.${pd}s" $(( $count * 100 / $total )) $(( ($count * 1000 / $total) % 10 )) $pstr
done
clear
cowsay Great!
sleep 2
seconds=4
clear
while [ $seconds -ne 0 ]
do
seconds=$(( $seconds - 1 ))
cowsay "You will get redirected onto the website https://lekitable.fr in $seconds"
sleep 1
clear
count=0
total=20
pstr="[=======================================================================]"
done
while [ $count -lt $total ]; do
  sleep 0.1 # this is work
  count=$(( $count + 1 ))
  pd=$(( $count * 73 / $total ))
  printf "\r%3d.%1d%% %.${pd}s" $(( $count * 100 / $total )) $(( ($count * 1000 / $total) % 10 )) $pstr
done
open https://lekitable.fr
cowsay Expore the website and come back later when you are ready to share your point of view
echo "When you are ready just click \"Enter\""
read kati
count=0
total=15
pstr="[=======================================================================]"
while [ $count -lt $total ]; do
  sleep 0.1 # this is work
  count=$(( $count + 1 ))
  pd=$(( $count * 73 / $total ))
  printf "\r%3d.%1d%% %.${pd}s" $(( $count * 100 / $total )) $(( ($count * 1000 / $total) % 10 )) $pstr
done
echo Success!
sleep 1
clear
cowsay Question no 1
sleep 2

else
echo "I do not understand. Operation terminated"
fi