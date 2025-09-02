#pragma once
#include <string>
using namespace std;

class Animal {
public:
  Animal();
  Animal(string speciesName, unsigned int discoveryYear);

  void display();
  
private:
  string species;
  unsigned int year_discovered;
};

