#include <iostream>
#include "csvfile.h"

int main() {
//  std::cout << "Hello, World!" << std::endl;
  try{
    char szFileName[FILENAME_MAX];
    sprintf(szFileName, "example_%d.csv", 2);
    csvfile csv(szFileName);
    csv << 1;
    csv << 2;
    csv << endrow;
    csv << 22;
    csv << 33;
    csv << endrow;
  } catch (const std::exception &ex) {
    std::cout << "Exception was thrown: " << ex.what() << std::endl;
  }
  return 0;
}