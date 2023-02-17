#include <iostream>
#include <fstream>
#include <string.h>


int main(int argc, char* argv[]) {
  std::ifstream file(argv[1], std::ios::binary);
  
  if (!file.is_open()) {
        std::cerr << argv[1] << ": No such file or directory "  << std::endl;
    return 1;
  }

  file.seekg(0, std::ios::end);
  std::streampos fileSize = file.tellg();
  file.seekg(0, std::ios::beg);

  char* buffer = new char[fileSize];


file.read(buffer, fileSize);

  file.close();

  std::cout.write(buffer, fileSize);

  delete[] buffer;

  return 0;
}


// int main(int argc, char* argv[]) {
//  
//   for (int i = 1; i < argc; i++) {
//     std::cout << "Argument " << i << " : " << argv[i] << "\n";
//   }
//   return 0;
// }

