#ifndef L0_HPP
#define L0_HPP

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
#endif
