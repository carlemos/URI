#include <iostream>
#include <cmath>

int main(){
  int n;
  std::cin >> n;
  for (; n > 0; --n){
    double  pa, pb;
    double ga, gb;
    std::cin >> pa >> pb >> ga >> gb;
    ga = 1 + ga/100;
    gb = 1 + gb/100;
    int k = 0;
    while (pa <= pb && k <= 100) {
      pa = std::floor(pa*ga);
      pb = std::floor(pb*gb);
      ++k;
    }
    if ( k > 100 )
      std::cout << "Mais de 1 seculo." << std::endl;
    else
      std::cout << k << " anos." << std::endl;
  }
}
