#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal {
    protected:
        std::string _type;
    public:
    Animal();
    Animal(Animal const &animal);
    ~Animal();
    Animal const &operator= (Animal const &animal);
    std::string     getType() const;
    virtual void    makeSound() const;
};

#endif