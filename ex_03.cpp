#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>
#include <cstring>


class Student{
       private:
    int energyPoints = 100;
    public:
    std::string name;

   bool learn(std::string a){
        if(energyPoints >= 42){

        checkEnergyPoints();
        energyPoints -= 42;
        checkEnergyPoints();
            std::cout << "Student" << "[" << name << "] : " << a <<"\n";
            return true;
        }else{
            while (a.find("c++") != std::string::npos)
        a.replace(a.find("c++"), 3, "shit");
        std::cout << "Student" << "[" << name << "] : " << a<<"\n";
        return false;
        }
        
    }

    void drink(std::string b){
        if(b == "Red Bull"){
            std::cout << "Student" << "[" << name << "] : " << "Red Bull gives you wings!\n";
            energyPoints += 32;
        }else if(b == "Monster"){
            std::cout << "Student" << "[" << name << "] : " << "Unleash The Beast!\n";
            energyPoints += 64;
        }else{
            std::cout << "Student" << "[" << name << "] : " << "ah, yes... enslaved moisture\n";
            energyPoints += 1;
        }
    }

 

     Student(std::string x) { // Constructor with parameters
      name = x;
      std::cout << "Student" << "[" << name << "] : " << "I'm ready to learn C++.\n";
     
    }

    ~Student(){
        std::cout << "Student" << "[" << name << "] : "  << "Wow , much learning today , very smart , such C ++.\n";
    }
    

     void checkEnergyPoints(){
        if (energyPoints < 0){
            energyPoints = 0;
        } else if (energyPoints > 100){
            energyPoints = 100;
        }
    }
};

int main(){
    Student a("John") ;
    a.learn("j'adore le c++");
    a.learn("j'adore le c++");
    a.learn("j'adore le c++");
    a.drink("Monster");
    a.learn("j'adore le c++");
    a.learn("j'adore le c++");
    
    return 0;
}


