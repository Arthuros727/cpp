#include <iostream>
#include <fstream>
#include <string.h>


int main(int argc, char* argv[]) {
  std::ifstream file(argv[1], std::ios::binary);
  
  if (!file.is_open()) {
    std::cerr << "File error: " << strerror(errno) << std::endl;
    return 1;
  }

  file.seekg(0, std::ios::end);
  std::streampos fileSize = file.tellg();
  file.seekg(0, std::ios::beg);

  char* buffer = new char[fileSize];

  if (!file.read(buffer, fileSize)) {
        std::cerr << "file : No such file or directory " << strerror(errno) << std::endl;
    return 2;
  }

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

