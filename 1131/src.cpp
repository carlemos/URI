#include <iostream>
int main(){
  int option;
  int x, y;
  int inter = 0;
  int gremio = 0;
  int draw = 0;

  do {
    std::cin >> x >> y;
    if ( x > y)
      ++inter;
    else if ( y > x)
      ++gremio;
    else
      ++draw;
    std::cout << "Novo grenal (1-sim 2-nao)" << std::endl;
    std::cin >> option;
  }while (option == 1);

  std::cout << inter + gremio + draw << " grenais" <<
  std::endl << "Inter:" << inter <<
  std::endl << "Gremio:" << gremio <<
  std::endl << "Empates:" << draw << std::endl;
  if ( inter > gremio)
    std::cout << "Inter venceu mais" << std::endl;
  else if ( gremio > inter)
    std::cout << "Gremio venceu mais" << std::endl;
  else
    std::cout << "Nao houve vencedor" << std::endl;
}
