#include <iostream>
int sum_of_divisors(int n){
  int sum = 0;
  for (int i = 1; i <= n/2; ++i)
    if ( n%i == 0)
      sum += i;
  return sum;
}
int main(){
  int n;
  std::cin >> n;
  for(; n > 0; --n){
    int x;
    std::cin >> x;
    if (x == sum_of_divisors(x))
      std::cout << x << " eh perfeito" << std::endl;
    else
      std::cout << x << " nao eh perfeito" << std::endl;
  }
}
