#ifndef SORCERER_HPP
#define SORCERER_HPP

#include "Character.hpp"

class Sorcerer : public Character {
  private:

  public:
  Sorcerer(string sn, int sh, int sp);
  void attack() override;
};

#endif 
