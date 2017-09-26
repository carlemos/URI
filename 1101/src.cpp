#include <iostream>
#include <algorithm>

int main(){
  int x, y;
  std::cin >> x >> y;
  while(x > 0 && y > 0){
    if (y < x)
      std::swap(x, y);
    for(int i = x; i <= y; ++i)
      std::cout << i << ' ';
    std::cout << "Sum=" << (x + y)*(y - x + 1)/2 << std::endl;
    std::cin >> x >> y;
  }
}
