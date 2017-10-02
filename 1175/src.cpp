#include <iostream>
#include <array>
#include <algorithm>

int main(){
  std::array<int,5> n;
  for (int& v : n)
    std::cin >> v;
  std::reverse(std::begin(n), std::end(n));
  for (int& v : n)
      std::cout << "N[" << &v-std::begin(n) << "] = " << v << std::endl;
}
