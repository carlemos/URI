#include <iostream>
#include <string>

int main(){
  std::string skip;
  int day1, hour1, minute1, second1;
  int day2, hour2, minute2, second2;

  std::cin >> skip >> day1 >> hour1 >> skip >> minute1
  >> skip >> second1;

  std::cin >> skip >> day2 >> hour2 >> skip >> minute2
  >> skip >> second2;

  second1 = ((day1*24 + hour1)*60 + minute1)*60 + second1; 
  second2 = ((day2*24 + hour2)*60 + minute2)*60 + second2;

  int seconds = second2 - second1;

  int minutes = seconds / 60;
  seconds = seconds % 60;

  int hours = minutes / 60;
  minutes = minutes % 60;

  int days = hours / 24;
  hours = hours % 24;

  std::cout << days << " dia(s)" << std::endl
  << hours << " hora(s)" << std::endl
  << minutes << " minuto(s)" << std::endl
  << seconds << " segundo(s)" << std::endl;
}
