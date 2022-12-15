#pragma 
#include <iostream>
#include <string.h>

class Poczta{
public:

std::string nadawca = "noname";
std::string odbiorca = "noname";
std::string temat = " ";
std::string tresc = " ";

Poczta();
~Poczta();
void Wczytaj(std::string n, std::string o, std::string te, std::string tr);
void Wypisz ();

};