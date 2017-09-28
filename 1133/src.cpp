#include <iostream>
int main(){
  int x, y;
  std::cin >> x >> y;
  if ( y < x )
    std::swap(x, y);

  ++x;
  int q = x/5;
  int r = x%5;

  if ( r < 2 )
    //x = 5*q + 2;
    x += 2 - r;
  else if ( r == 3) {
    std::cout << x << std::endl;
    x += 5 + 2 - r;
  }
  else if ( r > 3) {
    //x = 5*q + 5 + 2;
    x += 5 + 2 - r;

  }

  while ( x < y ){
    std::cout << x << std::endl;
    if (x + 1 < y)
      std::cout << x + 1 << std::endl;
    x += 5;
  }
}
