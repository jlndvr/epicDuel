#include "Warrior.hpp"
using namespace std;

Warrior::Warrior(string wn, int wh, int wp) : Character(wn,wh,wp) {}

void Warrior::attack() {
  cout << "<" << name << ">" << " Swings a mighty sword!" << endl;
}

void Warrior::specialAttack() {
  cout << "<" << name << ">" << " a devastating double strike!" << endl;
}
