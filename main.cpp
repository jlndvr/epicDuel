#include <vector>
#include "Warrior.hpp"
#include "Sorcerer.hpp"

using namespace std;

int main() {

  vector<Character*> characters;
  characters.push_back(new Warrior("Barbarian", 120, 20));
  characters.push_back(new Sorcerer("Fire Wizard", 80, 10));

  for (Character* character : characters) {
    character -> attack();
    character -> displayInfo();
  }

  Character* characterPtr = new Warrior("Ice wizard", 120, 15);

  Warrior* downcast = dynamic_cast<Warrior*> (characters[0]);

  for (int i = 0; i < characters.size(); i++) {
  delete characters[i];
  }

  characters.clear();
  

  return 0;

}
