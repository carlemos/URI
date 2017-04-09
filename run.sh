#!/bin/bash

set -e
cd $1

g++ -std=c++11 -O2 -lm src.cpp
set +e

allpassing=true

for f in *
do
  if [[ $f =~ input_([0-9]+).txt ]]
  then

    n=${BASH_REMATCH[1]}
    input="input_$n.txt"
    expected="expected_$n.txt"
    output="output_$n.txt"

    if [[ -f $expected ]]
    then
      echo "running $input ..."
      ./a.out < $input > $output
      diff $expected $output
      if [[ $? -ne  0 ]]
      then
        allpassing=false
      fi
    else
      echo "unable to run $f, $expected doesn't exists."
    fi
  fi
done

if $allpassing
then
  cat src.cpp | pbcopy
  echo "all test passed! src.cpp at clipboard"
fi
