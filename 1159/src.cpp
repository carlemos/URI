#include <iostream>
int main(){
  int x;
  while ( std::cin >> x, x != 0) {
    if ( x % 2 != 0)
      ++x;
    // (x + x + 2*(5-1)*5/2
    std::cout << (x + 4)*5 << std::endl; 
  }
}
