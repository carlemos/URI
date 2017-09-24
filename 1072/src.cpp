#include <iostream>
int main(){
  int n;
  std::cin >> n;

  int x;
  int in = 0;

  for (int i=0; i<n; ++i){
    std::cin >> x;
    if (10 <= x && x <= 20 )
      ++ in;
  }
  std::cout << in << " in" << std::endl << n-in << " out" << std::endl;
}
