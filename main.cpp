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

    char szFileName01[FILENAME_MAX];
    std::string strFileName = "haha.csv";
//    std::string strFileName;
    if (strFileName.empty()){
      std::cout << "wow, it's empty" << std::endl;
    }
    strcpy(szFileName01, strFileName.c_str());
//    csvfile csv01(szFileName01);
//    csv01 << 1;
//    csv01 << 2;
//    csv01 << endrow;
//    csv01 << 22;
//    csv01 << 33;
//    csv01 << endrow;
  } catch (const std::exception &ex) {
    std::cout << "Exception was thrown: " << ex.what() << std::endl;
  }
  return 0;
}