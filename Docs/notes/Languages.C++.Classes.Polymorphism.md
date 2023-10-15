---
id: ejnfrzllyb8ynt569zfexp6
title: Polymorphism
desc: ''
updated: 1697368892625
created: 1697282989191
---

# Polymorphism

Polymorphism means "many forms", and it occurs when we have many classes that are related to each other by inheritance.  

Polymorphism uses methods which have been inherited to perform different tasks. This allows us to perform a single action in different ways.  

For example, think of a base class called Animal that has a method called animalSound(). Derived classes of Animals could be Pigs, Cats, Dogs, Birds - And they also have their own implementation of an animal sound (the pig oinks, and the cat meows, etc.).  

## Example

```cpp
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
```
This result in 3 diffrent outputs:
> For `objAnimal` it prints `"The animal makes a sound"`
> For `objPig` it prints `"The pig says: oink"`
> For `objDog` it prints `"The dog says: woof "`
