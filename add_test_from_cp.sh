#!/bin/bash

set -e
cd $1

I=1
while [[ -f "input_$I.txt" ]];
do
  ((I++))
done

input="input_$I.txt"
expected="expected_$I.txt"

read -p "Clipboard ready for INPUT_$I ?" op
pbpaste > $input
if [[ $(tail -c 1 $input) != "" ]]
then 
  echo >> $input
fi

read -p "Clipboard ready for EXPECTED_$I ?" op
pbpaste > $expected
if [[ $(tail -c 1 $expected) != "" ]]
then
  echo >> $expected
fi
