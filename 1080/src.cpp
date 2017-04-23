#include <iostream>
#include <iterator>

int main(){
  auto first = std::istream_iterator<int>(std::cin);
  auto last = std::istream_iterator<int>();

  int max_value = *first;
  int max_index = 0;
  int index = 0;
  ++first;
  ++index;
  while (first != last){
    if (!(*first < max_value)){
      max_value = *first;
      max_index = index;
    }
    ++first;
    ++index;
  }

  std::cout << max_value << std::endl << max_index + 1 << std::endl;
}
