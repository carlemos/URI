#include <iostream>
int main(){
  int n;
  std::cin >> n;
  if (n <= 2){
    std::cout << std::endl;
    return 0;  
  }
  for (int i = 2; i <= 10000; i += n)
    std::cout << i << std::endl;
}
