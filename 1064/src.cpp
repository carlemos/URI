#include <iostream>
#include <array>
#include <iterator>

int main(){
  //std::istream_iterator<double> it(std::cin);
  std::array<double, 6> a;
  std::cout << sizeof begin(a) << std::endl;
  std::cout << sizeof (std::istream_iterator<int>) << std::endl;
}
