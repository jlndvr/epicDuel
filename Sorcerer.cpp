#include "Sorcerer.hpp"
using namespace std;

Sorcerer::Sorcerer(string sn, int sh, int sp) : Character(sn, sh, sp) {}

void Sorcerer::attack() {
  cout << "<" << name << ">" << " Casts a spell!" << endl;
}
