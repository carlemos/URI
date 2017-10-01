#include <iostream>
int main(){
  int n;
  std::cin >> n;
  int m = 1;
  while ( n > 0) {
    m *= n;
    --n;
  }
  std::cout << m << std::endl;
}
