#include <iostream>
#include <iomanip>

int main(){
  double x;
  std::cin >> x;
  std::cout << std::fixed << std::setprecision(4);
  for (int i=0; i<100; ++i){
    std::cout << "N[" << i << "] = " << x << std::endl;
    x /= 2;
  }
}
