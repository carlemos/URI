#include <iostream>
int main(){
  int x;
  while ( std::cin >> x, x != 0 ) {
    std::cout << 1;
    for ( int i = 2; i <= x; ++i )
      std::cout << ' ' << i;
    std::cout << std::endl;
  }
}
