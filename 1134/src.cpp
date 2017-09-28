#include <iostream>
int main(){
  int counter[3] = { 0, 0, 0};
  int x;

  while (std::cin >> x, x != 4)
    if ( x < 4 )
      ++counter[x-1];

  std::cout << "MUITO OBRIGADO" <<
  std::endl << "Alcool: " << counter[0] <<
  std::endl << "Gasolina: " << counter[1] <<
  std::endl << "Diesel: " << counter[2] << std::endl;
}
