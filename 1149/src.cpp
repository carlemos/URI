#include <iostream>
int main(){
  int a;
  std::cin >> a;
  int n;
  do {
    std::cin >> n;
  } while ( n <= 0 );
  std::cout << ( a + a + n - 1)* n / 2 << std::endl;
}
