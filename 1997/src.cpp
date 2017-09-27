#include <iostream>
#include <iomanip>

int main(){
  
  float x;
  float score[2];
  int i;
  while (true) {
    i = 0;
    while ( i < 2){
      std::cin >> x;
      if (x < 0 || x > 10 )
        std::cout << "nota invalida" << std::endl;
      else{
        score[i] = x;
        ++i;
      }
    }
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "media = " << (score[0] + score[1])/2 << std::endl;
    while (true){
      std::cout << "novo calculo (1-sim 2-nao)" << std::endl;
      std::cin >> x;
      if (x == 1)
        break;
      if (x == 2)
        goto end;
    }
  }
  end:;
}
