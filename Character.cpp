#include "Character.hpp"
using namespace std;

Character::Character(string n = "Elden King", int h = 100, int p = 10) {
  this -> name = n;
  this -> health = h;
  this -> power = p;
}

void Character::attack() {
  cout << "Basic Low Attack" << endl;
}

void Character::displayInfo() {
  cout << "Name: " << "<" << name << ">" << " , " << "Health: " << "<" << health << ">" << " , "<< "Power: " << "<" << power << ">" << endl;
}
