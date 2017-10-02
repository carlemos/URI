#include <iostream>
#include <cmath>

bool prime(int n){
  for (int i = 2; i <= std::sqrt(n); ++i)
    if ( n%i == 0)
      return false;
  return true;
}
int main(){
  int n;
  std::cin >> n;
  for (; n > 0; --n) {
    int x;
    std::cin >> x;
    if ( prime(x) )
      std::cout << x << " eh primo" << std::endl;
    else
      std::cout << x << " nao eh primo" << std::endl;
  }
}
