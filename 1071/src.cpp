#include <iostream>
#include <algorithm>

int main(){
  int x, y;
  std::cin >> x >> y;

  if (y < x) std::swap(x, y);

  if (x % 2 == 0)
    x -= 1;
  
  if (y % 2 == 0)
    y += 1;

  int n = (x + y)*(y - x + 2)/4 - x - y;
  
  if(x == y)
    n = 0;

  std::cout << n << std::endl;
}
