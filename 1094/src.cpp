#include <iostream>
#include <iomanip>

int main(){
  int n;
  std::cin >> n;
  
  int rabit = 0;
  int rat = 0;
  int frog = 0;
  char type;
  int x;

  for(int i=0; i<n; ++i){
    std::cin >> x >> type;
    if (type == 'C')
      rabit += x;
    else if (type == 'R')
      rat += x;
    else if (type == 'S')
      frog += x;
  }
  int total = rabit + rat + frog;
  std::cout << "Total: " << total << " cobaias" <<
  std::endl << "Total de coelhos: " << rabit <<
  std::endl << "Total de ratos: " << rat <<
  std::endl << "Total de sapos: " << frog <<
  std::fixed << std::setprecision(2) <<
  std::endl << "Percentual de coelhos: " <<float(100*rabit)/total << " %" <<
  std::endl << "Percentual de ratos: " <<float(100*rat)/total << " %" <<
  std::endl << "Percentual de sapos: " <<float(100*frog)/total << " %" <<
  std::endl;
}
