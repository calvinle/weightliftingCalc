#include "calc.h"

//Discs
double const red = 25.0;
double const blue = 20.0;
double const yellow = 15.0;
double const green = 10.0;
double const white = 5.0;
double const microBlack = 2.5;
double const microWhite0 = 1.25;
double const microWhite1 = 0.5;
double const microWhite2 = 0.25;
//Array to hold count of Discs
double discCount[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};


void discCalc(double weight){
  memset(discCount, 0, 9*sizeof(*discCount));
  while (weight > 0){
    if (weight - red*2 >= 0){
      discCount[0]++;
      weight = weight - red*2;
    }
    else if (weight - blue*2 >= 0){
      discCount[1]++;
      weight = weight - blue*2;
    }
    else if (weight - yellow*2 >= 0){
      discCount[2]++;
      weight = weight - yellow*2;
    }
    else if (weight - green*2 >= 0){
      discCount[3]++;
      weight = weight - green*2;
    }
    else if (weight - white*2 >= 0){
      discCount[4]++;
      weight = weight - white*2;
    }
    else if (weight - microBlack*2 >= 0){
      discCount[5]++;
      weight = weight - microBlack*2;
    }
    else if (weight - microWhite0*2 >= 0){
      discCount[6]++;
      weight = weight - microWhite0*2;
    }
    else if (weight - microWhite1*2 >= 0){
      discCount[7]++;
      weight = weight - microWhite1*2;
    }
    else if (weight - microWhite2*2 >= 0){
      discCount[8]++;
      weight = weight - microWhite2*2;
    }
  }
  discPrint();
}

void discPrint(){
  std::cout << "25KG DISCS: " << discCount[0] << std::endl;
  std::cout << "20KG DISCS: " << discCount[1] << std::endl;
  std::cout << "15KG DISCS: " << discCount[2] << std::endl;
  std::cout << "10KG DISCS: " << discCount[3] << std::endl;
  std::cout << "5KG DISCS: " << discCount[4] << std::endl;
  std::cout << "2.5KG DISCS: " << discCount[5] << std::endl;
  std::cout << "1.25KG DISCS: " << discCount[6] << std::endl;
  std::cout << "0.5KG DISCS: " << discCount[7] << std::endl;
  std::cout << "0.25KG DISCS: " << discCount[8] << std::endl;
  std::cout << std::endl;
}