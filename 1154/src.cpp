#include <iostream>
#include <iomanip>

int main(){
  float n = 0;
  float sum = 0;
  float x;

  while (std::cin >> x, x > 0) {
    ++n;
    sum += x;
  }
  std::cout << std::fixed << std::setprecision(2) << sum/n << std::endl;
}
