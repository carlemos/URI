#include <iostream>
#include <algorithm>

int main(){
  int x, y;
  std::cin >> x >> y;
  if ( y < x)
    std::swap(x, y);
  int sum = (x+y)*(y-x+1)/2;
  
  if (x > 0)
    x += 13 - x%13;
  else
    x -= x%13;
  if (y >0)
    y -= y%13;
  else
    y -= 13 + x%13;

  int sum13 = (x+y)*(y-x+13)/13/2;

  std::cout << sum - sum13 << std::endl;
}
