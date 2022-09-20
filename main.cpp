#include <iostream>
#include <vector>
#include "sources/exercices.h"

int main (int argc, char **argv)
{
  std::cout << "---------------------------------------" << std::endl;
  std::cout << "-------------- EXERCICES --------------" << std::endl;
  std::cout << "---------------------------------------" << std::endl;
  std::cout << " Please select one of the following : " << std::endl;
  std::cout << " 1- Laverie " << std::endl;
  std::cout << " 2- PGCD " << std::endl;
  std::cout << " 3- Fibonacci " << std::endl;
  std::cout << " 4- Primalité " << std::endl;
  std::cout << " 5- Moyenne " << std::endl;
  
  int choice {0};

  if (!(std::cin >> choice)) {
    std::cout << "Sorry, this choice does not rely to any existing exercise" << std::endl;
    return -1;
  }

  switch (choice) {
    case 1:
      laverie(); 
      break;
    case 2:
      pgcd();
      break;
    case 3:
      fibonacci();
      break;
    case 4:
      primalite();
      break;
    case 5:
      moyenne();
      break;
    default:
      std::cout << "Sorry, this choice does not rely to any existing exercise" << std::endl;
  }

  return 0;
}
