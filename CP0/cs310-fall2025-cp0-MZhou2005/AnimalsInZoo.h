#include "Animal.h"
#pragma once
using namespace std;

class AnimalsInZoo {
 public:
  AnimalsInZoo(Animal animals);
  AnimalsInZoo();

  void display();
  
 private:
  int numAnimals;
  Animal animal;
};
