#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>
#include <bits/stdc++.h>
#include <cstring>



int main ()
{
std::string name;
std::string delimiter = " ";
std::getline (std::cin,name);

    
      std::string f = "Fahrenheit";
  std::string c = "Celsius";

  
   
    size_t found = name.find(c);
    size_t found1 = name.find(f);
    std::string first = name.substr(0, name.find(" "));
    float in = std::stof(first);
    // std::cout << found << "\n";
    // std::cout << "-------------------------------\n";
    // std::cout << found1 << "\n";
    // std::cout << "-------------------------------\n";

    if (found1 < 150){
       float res =  5.000 / 9.000 * ( in - 32 );
      std::cout << "                " << std::fixed << std::setprecision(3) << res << "                " << "Celsius" << "!\n";
    }
   
    if (found < 150){
       float res =  (9.000/5.000) * in + 32.000;
  
       std::cout << "                " << std::fixed << std::setprecision(3) << res << "                " << "Fahrenheit" << "!\n";
    }
  
    return 0;
}