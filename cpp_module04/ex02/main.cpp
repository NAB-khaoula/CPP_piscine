#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const Animal **animal = new const Animal*[4];
    for (int k = 0; k < 4; k++)
    {
        if (k < 2)
        {
            animal[k] = new Dog();
        }
        else
            animal[k] = new Cat();
    }
    Cat cat;
    Cat copycat(cat);
    Dog dog;
    Dog copydog(dog);
    std::cout << "****test****"<< std::endl;
    std::cout << cat.getBrain() << std::endl;
    std::cout << copycat.getBrain() << std::endl;
    std::cout << dog.getBrain() << std::endl;
    std::cout << copydog.getBrain() << std::endl;
    std::cout << "********"<< std::endl;
    for (int i = 0; i < 4; i++)
        delete animal[i];
    delete [] animal;
    delete j;//should not create a leak
    delete i;
} 