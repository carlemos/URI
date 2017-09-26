#include <iostream>
#include <iomanip>

int main(){
  float x;
  int n = 0;
  float sum = 0;
  while (n < 2){
    std::cin >> x;
    if ( x <=10 && x >=0){
      sum += x;
      n++;
    }else {
      std::cout << "nota invalida" << std::endl;
    }
  }
  std::cout << std::fixed << std::setprecision(2);
  std::cout << "media = " << sum / n << std::endl;
}
