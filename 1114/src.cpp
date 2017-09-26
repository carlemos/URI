#include <iostream>
int main(){
  int x;
  while (std::cin >> x && x != 2002){
    std::cout << "Senha Invalida" << std::endl;
  }
  std::cout << "Acesso Permitido" << std::endl;
}
