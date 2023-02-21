#include "ex_03.cpp"
#include <iostream>
#include <string>
#include <stdio.h>

class assistant{
public:
int id;
    assistant(int a){
         id = a;
        std::cout << "Assistant [" << id << "]:  morning everyone * sip coffee *\n";
    }

    ~assistant(){
        std::cout << "Assistant [" << id << "]: see you tomorrow at 9.00 * sip coffee * \n";
    }
void givedrink(const std::string& name, std::string a){
    std::cout << "Assistant [" << "*id" << "]: drink this , [" << name << "] * sip coffee *\n";
    if(a == "Red Bull"){
            *energyPoints += 32;
        }else if(a == "Monster"){
            energyPoints += 64;
        }else{
            energyPoints += 1;
        }
}
};


int main(){
    assistant b(1);
     Student a("John") ;
    a.learn("j'adore le c++");
    a.learn("j'adore le c++");
    b.givedrink(a.name);
    a.learn("j'adore le c++");
    a.drink("Monster");
    a.learn("j'adore le c++");
    a.learn("j'adore le c++");
    
    return 0;
    return 0;
}