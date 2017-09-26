#include <iostream>
int main(){
  int x, y;
  std::cin >> x >> y;
  while (x != 0 && y != 0) {
    if (y > 0)
      if (x >0)
        std::cout << "primeiro";
      else
        std::cout << "segundo";
    else
      if (x < 0)
        std::cout << "terceiro";
      else
        std::cout << "quarto";
    std::cout << std::endl;
    std::cin >> x >> y;
  }
}
