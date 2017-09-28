#include <iostream>
int main(){
  int x;
  std::cin >> x;
  for (int i = 0; i < x; ++i) { 
    for (int j = 0; j < 3; ++j)
      std::cout << 4*i + 1 + j << ' ';
    std::cout << "PUM" << std::endl;
  }
}
