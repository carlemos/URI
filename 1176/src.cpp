#include <iostream>
int main(){
  long long int fib[61];
  fib[0] = 0;
  fib[1] = 1;
  for (int i=2; i<=60; ++i)
    fib[i] = fib[i-1] + fib[i-2];

  int n;
  std::cin >> n;
  for(;n > 0; --n){
    int x;
    std::cin >> x;
    std::cout << "Fib(" << x << ") = " << fib[x] << std::endl; 
  }
}
