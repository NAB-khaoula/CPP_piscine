#include <string>
#include <iostream>
#include <utility>
 
class Animal
{
protected:
    std::string m_name;
 
    // We're making this constructor protected because
    // we don't want people creating Animal objects directly,
    // but we still want derived classes to be able to use it.
    Animal(const std::string& name)
        : m_name(name)
    {
    }
 
public:
    std::string getName() const { return m_name; }
    virtual const char* speak() const = 0;
    
    ~Animal(){};
};
 
class Cat: public Animal
{
public:
    Cat(const std::string& name)
        : Animal(name)
    {
    }
 
    const char* speak() const { return "Meow"; }
};
 
class Dog: public Animal
{
public:
    Dog(const std::string& name)
        : Animal(name)
    {
    }
 
    const char* speak() const { return "Woof"; }
};

class Cow : public Animal
{
public:
    Cow(const std::string& name)
        : Animal(name)
    {
    }
 	const char* speak() const { return "Moo"; }
    // We forgot to redefine speak
};
 
int main()
{
    Cow cow("Betsy");
    std::cout << cow.getName() << " says " << cow.speak() << '\n';
 
    return 0;
}