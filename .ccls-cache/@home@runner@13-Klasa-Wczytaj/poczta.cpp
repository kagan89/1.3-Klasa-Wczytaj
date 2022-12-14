#include "poczta.h"

void Poczta::Wczytaj(std::string n, std::string o, std::string te, std::string tr)
{
  nadawca = n;  
  odbiorca = o;
  temat = te;
  tresc = tr;
};
void Poczta::Wypisz()
{
  std::cout<<"nadawca: "<<nadawca<<std::endl;
  std::cout<<"odbiorca: "<<odbiorca<<std::endl;
  std::cout<<": "<<nadawca<<std::endl;
};

