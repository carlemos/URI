#include <iostream>
#include <iterator>

template <typename N>
//N is integral
struct classifier {
  void operator()(const N& n){
    if (n == N(0))
      std::cout << "NULL" << std::endl;
    else {
      if (n % N(2) == N(0))
        std::cout << "EVEN ";
      else
        std::cout << "ODD ";
      if (n > N(0))
        std::cout << "POSITIVE" << std::endl;
      else
        std::cout << "NEGATIVE" << std::endl;
    }
  }
};

namespace l0 {
  template <typename I, typename N, typename Op>
  //I is is InputIterator
  //N is integral
  //I::value_type is convertible to "argument_type" of Op 
  void for_each_n(I first, N n, Op op) {
    while (n != 0) {
      op(*first);
      ++first;
      --n;
    }
  }
}
int main(){
  int n;
  std::cin >> n;
  auto first = std::istream_iterator<int>(std::cin);
  l0::for_each_n(first, n, classifier<int>());
}
