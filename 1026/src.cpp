#include <iostream>
int main(){
  uint x, y;
  while(std::cin >> x >> y, !std::cin.eof()){
    std::cout << (x xor y) << std::endl; 
  }
}
