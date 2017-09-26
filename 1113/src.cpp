#include <iostream>
int main(){
  int x, y;
  std::cin >> x >> y;
  while (x != y){
    if (x < y)
      std::cout << "Crescente" << std::endl;
    else
      std::cout << "Decrescente" << std::endl;
    std::cin >> x >> y;
  }
}
