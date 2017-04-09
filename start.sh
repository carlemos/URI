#!/bin/bash
if [[ $# -eq 1 ]]
then
  echo "how many tests?"
  exit 0
fi
set -e
mkdir $1
cd $1
echo "#include <iostream>" >> src.cpp
echo "int main(){" >> src.cpp
echo "" >> src.cpp
echo "}" >> src.cpp
cd ..
echo "Tests will be created with content from clipboard ..."
for ((i=1;i<=$2;i++))
do
  echo ""
  ./add_test_from_cp.sh $1
done

vim $1/src.cpp
