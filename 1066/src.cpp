#include <iostream>
int main(){
  const int n = 5; 
  int even = 0;
  int positive = 0;
  int negative = 0;

  int x;
  for (int i=0; i<n; ++i){
    std::cin >> x;
    if (x > 0) ++positive;
    if (x < 0) ++negative;
    if (x % 2 == 0) ++even;
  }

  std::cout << even << " valor(es) par(es)" << std::endl
            << 5 - even << " valor(es) impar(es)" << std::endl
            << positive << " valor(es) positivo(s)" << std::endl
            << negative << " valor(es) negativo(s)" << std::endl;
}
