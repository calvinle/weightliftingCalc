#include <iostream>
#include <stdio.h>
#include <math.h>
#include "calc.h"

double totalWeight;

int main (int argc, char *argv[]) {

  while(true){
    std::cout << "ENTER WEIGHT: ";
    std::cin >> totalWeight;
    if (std::cin.fail()){
      std::cout << "Wut" << std::endl;
      std::cin.clear();
      continue;
    }

    if (totalWeight <= 25){ std::cerr << "No plates" << "\n" << std::endl; continue; }
    if (fmod(totalWeight, 2.5) != 0){
      std::cerr << "Weight must be of 2.5kg increments" << "\n" << std::endl;
      continue;
    }

    //Subtract barbell and collars
    discCalc(totalWeight - 25);
  }
  return 0;
}
