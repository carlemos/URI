#include <iostream>
int main(){
  int x, y;
  std::cin >> x >> y;
  for (int i = 1; i <= y; ++i ){
    std::cout << i;
    for (int k = 0 ; k < x - 1 && i < y; ++k ){
      ++i;
      std::cout << ' ' << i ;
    }
    std::cout << std::endl;
  }
    
}
