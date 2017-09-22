#include <iostream>
#include <string>

int main(){
  std::string in;
  std::string out;

  std::cin >> in;
  if(in == "vertebrado"){
    std::cin >> in;
    if(in == "ave"){
      std::cin >> in;
      if(in == "carnivoro")
        out = "aguia";
      else
        out = "pomba";
    }
    else {
      std::cin >> in;
      if( in == "onivoro")
        out = "homem";
      else
        out = "vaca";
    }
  }
  else {
    std::cin >> in;
    if( in == "inseto"){
      std::cin >> in;
      if( in == "hematofago")
        out = "pulga";
      else
        out = "lagarta";
    }
    else {
      std::cin >> in;
      if( in == "hematofago")
        out = "sanguessuga";
      else
        out = "minhoca";
    }
  }
  std::cout << out << std::endl;
}
