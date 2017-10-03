#include <iostream>

int main(){
  int n;
  std::cin >> n;
  for (int i=0; i < 1000; ++i)
    std::cout << "N[" << i << "] = " << i%n << std::endl;
}
