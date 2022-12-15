#include <iostream>
#include "poczta.h"


int main() {
 
  Poczta p1;

  p1.Wypisz();

  p1.Wczytaj("Jan", "Alina", "Zakupy", "Dzis trzeba zrobic zakupy");

  p1.Wypisz();
}