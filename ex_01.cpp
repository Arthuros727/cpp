#include <iostream>
#include <fstream>
#include <string.h>



int main(int argc, char* argv[]) {
std::ifstream ifs;
ifs.open(argv[1]);
if(!ifs.good()){

std::cout << "MyCat : " <<  argv[1] << ": No such file or directory" <<  "\n";
return 84;
}
char c = ifs.get();

  while (ifs.good()) {
    std::cout << c;
    c = ifs.get();
  }

  ifs.close();
  
  return 0;
}

