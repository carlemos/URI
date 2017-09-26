#include <iostream>
#include <iomanip>

int main(){
  std::cout << std::fixed <<  std::setprecision(1);
  int x, y;
  int n;
  std::cin >> n;
  for (int i = 0; i < n; ++i){
    std::cin >> x >> y;
    if (y == 0)
      std::cout << "divisao impossivel" << std::endl;
    else
      std::cout << float(x) / y << std::endl;
  }
}
