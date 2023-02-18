#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>
#include <bits/stdc++.h>
#include <cstring>

int main ()
{
    int e;
  std::string lastchar;
  std::string name;

  std::cout << "Please, enter your full name: ";
  std::getline (std::cin,name);
  const char *namec = name.c_str();
  e = strlen(namec);
  lastchar = name.substr(e-1);
  if(lastchar == "s"){

  std::cout << "CEL " <<  "!\n";
  }
  if(lastchar == "t"){

  std::cout << "FER " <<  "!\n";
  }

  return 0;
}