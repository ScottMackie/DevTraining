#include <iostream>
#include <string>

using namespace std;

// Base class
class Animal {
  public:
    void animalSound() {
      cout << "The animal makes a sound \n";
    }
};

// Derived class
class Pig : public Animal {
  public:
    void animalSound() {
      cout << "The pig says: oink \n";
    }
};

// Derived class
class Dog : public Animal {
  public:
    void animalSound() {
      cout << "The dog says: woof \n";
    }
};

int main()
{
    Animal objAnimal;
    Pig objPig;
    Dog objDog;

    objAnimal.animalSound();
    objPig.animalSound();
    objDog.animalSound();
}