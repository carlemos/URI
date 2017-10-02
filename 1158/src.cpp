#include <iostream>
int main(){
  int n;
  std::cin >> n;
  for (; n > 0; --n) {
    int x, y;
    std::cin >> x >> y;
    if (x % 2 == 0)
      ++x;
    std::cout << (x + x + 2 * (y - 1)) * y / 2 << std::endl;
  }
}
