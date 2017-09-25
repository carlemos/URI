#include <iostream>
#include <algorithm>

void sort_two(int& x, int& y){
  if (y < x)
    std::swap(x, y);
}
int sum_of_odds_between(int x, int y){
  if(x == y)
    return 0;
  sort_two(x,y);
  if (x%2 == 0) --x;
  if (y%2 == 0) ++y;
  return (x + y)*(y - x + 2)/4 - (x + y);
}
int main(){
  int n, x, y;
  std::cin >> n;
  for (int i = 0; i < n; ++i){
    std::cin >> x >> y;
    std::cout << sum_of_odds_between(x,y) << std::endl;
  }
}
