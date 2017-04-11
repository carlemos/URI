#include <iostream>
#include <iomanip>
#include <array>
#include <iterator>
#include <algorithm>
#include <numeric>

int main(){
  int n;
  std::cin >> n;
  
  std::cout << std::fixed << std::setprecision(1);
  auto output = std::ostream_iterator<double>(std::cout, "\n");

  const std::array<double, 3> u = {2.0, 3.0, 5.0};
  const double norm = std::accumulate(begin(u), end(u), 0.0);
  
  std::array<double,3> v;

  std::generate_n(
    output,
    n,
    [&](){
      std::copy_n(std::istream_iterator<double>(std::cin), 3, begin(v));
      return std::inner_product(begin(u), end(u), begin(v), 0.0)/norm;
      //return l0::inner_product(begin(u), end(u), std::istream_iterator<double>(std::cin), 0.0);
    }
  );
}
