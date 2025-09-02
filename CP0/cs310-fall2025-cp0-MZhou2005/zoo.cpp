#include "Animal.h"
#include "AnimalsInZoo.h"
#include <iostream>
#include <stdlib.h>
using namespace std;


int main() {
   Animal *animal1 = new Animal("African Elephant", 1758);
   Animal animal2("Giant Panda", 1869);
   Animal animal3("Spider Monkey",4000);
   AnimalsInZoo aiz1(animal2);
   delete animal1;
   animal1 = new Animal("Snow Leopard", 1777);
   aiz1.display();
   animal2.display();
   animal1->display();
   animal3.display();

   delete animal1;
   return 0;
}
