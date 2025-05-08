#ifndef WARRIOR_HPP
#define WARRIOR_HPP

#include "Character.hpp"
class Warrior : public Character {
  private:
  
  public:
  Warrior(string wn, int wh, int wp);
  void attack() override;
  void specialAttack();
};
#endif 
