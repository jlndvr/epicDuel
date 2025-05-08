#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include <iostream>

using namespace std;

class Character {
protected:
string name;
int health;
int power;

public:
Character(string n, int h, int p);
virtual void attack();
virtual void displayInfo();
string getName();
int getHealth();
};

#endif 
