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
      std::cout << "Error Input" << std::endl;
      return -1;
    }

    if (totalWeight <= 25){ std::cerr << "No plates" << "\n" << std::endl; continue; }
    if (fmod(totalWeight, 2.5) != 0){
      std::cerr << "Weight must be divisible by 2.5" << "\n" << std::endl; continue; }

    std::cout << "LOADING WEIGHT: " << totalWeight - 25 << std::endl;
    discCalc(totalWeight - 25); //Subtract barbell and collars
  }
  return 0;
}
