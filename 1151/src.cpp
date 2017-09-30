#include <iostream>
int main(){
  int n;
  std::cin >> n;
  int i = 0;
  int j = 1;
  if ( n > 0 )
    std::cout << i;
  --n;
  if ( n > 0 )
    std::cout << ' ' << j;
  --n;
  while ( n > 0 ) {
    j = i + j;
    i = j - i;
    std::cout << ' ' << j;
    --n;
  } 
  std::cout << std::endl;
}
