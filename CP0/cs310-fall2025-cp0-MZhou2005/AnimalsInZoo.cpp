#include "Animal.h"
#include "AnimalsInZoo.h"
#include <iostream>
using namespace std;

AnimalsInZoo::AnimalsInZoo(Animal animals) {
  animal=animals;
  numAnimals = 1;
}

AnimalsInZoo::AnimalsInZoo() {
  numAnimals = 0;
}

void AnimalsInZoo::display() {
  cout << numAnimals << endl;
  if(numAnimals==1) {
    animal.display();
  } 
}
