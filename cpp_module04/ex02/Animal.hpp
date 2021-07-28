#ifndef AANIMAL_HPP
# define AANIMAL_HPP
# include <iostream>

class AAnimal {
    protected:
        std::string _type;
    public:
    AAnimal();
    AAnimal(AAnimal const &animal);
    virtual ~AAnimal();
    AAnimal const &operator= (AAnimal const &animal);
    std::string     getType() const;
    virtual void    makeSound() const = 0;
};

#endif