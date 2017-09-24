#include <iostream>
#include <iomanip>
#include <array>
#include <iterator>

int main(){
  
  std::istream_iterator<float> it(std::cin);
  float sum = 0;
  int n = 0;

  for (int i=0; i<6; ++i){
    if(*it > 0){
      sum += *it;
      ++n;
    }
    ++it;
  }
  std::cout << std::fixed << std::setprecision(1);
  std::cout << n << " valores positivos" << std::endl << sum/n << std::endl;
}
