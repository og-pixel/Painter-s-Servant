#include "Settings.h"

// Constructor 
Settings::Settings() {
  std::cout << "settings created" << std::endl;
}


int Settings::getArrayLenght(std::string array[]){
  return sizeof(array)/sizeof(array[0]);
}
