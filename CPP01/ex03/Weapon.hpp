#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <string>
#include <iostream>


class Weapon
{
    private:
        std::string type;
    public:
        const std::string& getType()
        {
            return (this->type);
        }
        // For sake of good practice 
        void    setType(std::string type)
        {
            this->type = type;
        }
        // This is actually a pointer point to object that membre function working on
        Weapon()
        {
            std::cout << "Weapon default constructor" << std::endl;    
        }
        Weapon(std::string type)
        {
            std::cout << "Weapon Parameterized constructor" << std::endl;    
            this->type = type;
        }
        ~Weapon()
        {
            std::cout << "Weapon Destructor" << std::endl;    
        }
};


class HumanA
{
    private:
        Weapon      Human_a;
        std::string name;
    public:
        HumanA()
        {
            std::cout << "HumanA default constructor" << std::endl;    
        }
        void attack()
        {
            std::cout << this->name << " attacks with their " << Human_a.getType() << std::endl;
        }
        HumanA(std::string name ,Weapon Hu)
        {
            this->Human_a = Hu;
            this->name = name;
            std::cout << "Parameterized HumanA constructor" << std::endl;
        }
        ~HumanA()
        {
            std::cout << "HumanA Destructor" << std::endl;    
        }
};

class HumanB
{
    private:
        std::string name;
        Weapon Human_b;
    public:
    // Refrence to a Weapon object
        void    setWeapon(Weapon Human_b)
        {
            this->Human_b = Human_b;
        }
        void attack()
        {
            std::cout << this->name << " attacks with their " << Human_b.getType() << std::endl;
        }
    HumanB(std::string name)
    {
        this->name = name;
        std::cout << "Para HumanB constructor" << std::endl;
    }
    ~HumanB()
    {
        std::cout << "HumanB Destructor" << std::endl;    
    }
};

#endif