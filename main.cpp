#include <iostream>

int const barbell = 20;
int const collars = 5.0;

double const red = 25.0;
double const blue = 20.0;
double const yellow = 15.0;
double const green = 10.0;
double const white = 5.0;
double const microBlack = 2.5;
double const microWhite0 = 1.25;
double const microWhite1 = 0.5;
double const microWhite2 = 0.25;

double totalWeight;


int main (int argc, char *argv[]) {
  totalWeight = argv[0];
  double loadingWeight = totalWeight - barbell - collars;
  if (loadingWeight % 2.5 != 0){
    std::cerr << "Must be of 2.5kg increments" << std::endl;
  }

  while (loadingWeight > 0){

  }
}
