#include <exception>
#include <iostream>

int main(){
  try {
     std::cout << "start" << std::endl;
     throw std::exception();
  }
  catch (...) { 
    std::cout << "other catch" << std::endl;
    return 3;
  }
}