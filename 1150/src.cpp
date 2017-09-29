#include <iostream>
#include <cmath>

int main(){
  int x;
  std::cin >> x;
  int y;
  do {
    std::cin >> y;
  }while ( y <= x );

  /*
  (x + x + n -1)*n/2 > y
  n**2 + (2x-1)n -2y > 0
  n > (-(2x-1) + sqrt((2x-1)**2 + 8y))/2
  */

  double n = (-(2*x-1) + std::sqrt(std::pow((2*x-1), 2) + 8*y))/2;
  n = std::ceil(n);

  std::cout << int(n) << std::endl;
}
