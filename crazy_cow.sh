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
  cowsay "How would you rate your experience?"
  echo "Please reply with a number from 1 (not good) to 5 (very good)"
  read exp1
  while [ $exp1 -ne 1 ] || [ $exp1 -ne 2 ] || [ $exp1 -ne 3 ]|| [ $exp1 -ne 4 ]|| [ $exp1 -ne 5 ]
  do
    echo Oops! This is not a number. Try again.
    read exp1
  done
  if [ $exp1 -lt 3 ]
  then
    clear
    cowsay "We are sad to hear that. Whould you like to specify why you rated us with $exp1 for your overal experience on the site?"
    echo Reply with YES or No
    read rep1
    if [ $rep1 == "YES" ]
    then
      clear 
      cowsay "Please specify below..."
      read resp1
    fi
    sleep 1
  clear
  cowsay Question no 2
  sleep 2
  cowsay "How likely are you to recommend our website to a friend?"
  echo "Please reply with a number from 1 (not good) to 5 (very good)"
  read exp1
  while [ $exp1 -ne 1 ] || [ $exp1 -ne 2 ] || [ $exp1 -ne 3 ]|| [ $exp1 -ne 4 ]|| [ $exp1 -ne 5 ]
  do
    echo Oops! This is not a number. Try again.
    read exp1
  done
  if [ $exp1 -le 2 ]
  then
    clear
    cowsay "Hmm It seems that you wouldn't recomend this site to a friend. Why is that?"
    echo "Please specify below..."
    read resp1
  else
    clear
    cowsay "Thank you for your score. Is there anything missing on this page?"
    echo Reply with YES or No
    read rep2
    if [ $rep2 == "YES" ]
    then
      clear 
      cowsay "Please specify below..."
      read resp2
    fi
    fi

else
  echo "I do not understand. Operation terminated"
fi