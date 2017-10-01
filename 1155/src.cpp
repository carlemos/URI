#include <iostream>
#include <iomanip>

int main(){
  float x = 0;
  for (float i=1; i<=100; ++i)
    x += 1/i;
  std::cout << std::fixed << std::setprecision(2) << x << std::endl;
}
