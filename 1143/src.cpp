#include <iostream>
int main(){
  int x;
  std::cin >> x;
  for ( int i = 1; i <= x; ++i)
    std::cout << i << ' ' << i*i << ' ' << i*i*i << std::endl;
}
