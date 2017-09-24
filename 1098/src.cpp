#include <iostream>
#include <iomanip>
int main(){
  std::cout.precision(2);
  for (double i = 0.0; i <= 2; i += 0.2)
    for (double j = i + 1.0; j <= i + 3; j += 1)
      std::cout << "I=" << i << " J=" << j << std::endl;
}
