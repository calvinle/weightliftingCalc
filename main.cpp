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
double discCount[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0}

double totalWeight;


int main (int argc, char *argv[]) {
  totalWeight = argv[0];
  double loadingWeight = totalWeight - barbell - collars;
  if (loadingWeight % 2.5 != 0){
    std::cerr << "Must be of 2.5kg increments" << std::endl;
  }

  while (loadingWeight > 0){
    //@TODO: Test Logic
    if (loadingWeight - red*2 >= 0){
      discCount[0]++;
      loadingWeight = loadingWeight - red*2;
    }
    if (loadingWeight - blue*2 >= 0){
      discCount[1]++;
      loadingWeight = loadingWeight - blue*2;
    }
    if (loadingWeight - yellow*2 >= 0){
      discCount[2]++;
      loadingWeight = loadingWeight - yellow*2;
    }
    if (loadingWeight - green*2 >= 0){
      discCount[3]++;
      loadingWeight = loadingWeight - green*2;
    }
    if (loadingWeight - white*2 >= 0){
      discCount[4]++;
      loadingWeight = loadingWeight - white*2;
    }
    if (loadingWeight - microBlack*2 >= 0){
      discCount[5]++;
      loadingWeight = loadingWeight - microBlack*2;
    }
    if (loadingWeight - microWhite0*2 >= 0){
      discCount[6]++;
      loadingWeight = loadingWeight - microWhite0*2;
    }
    if (loadingWeight - microWhite1*2 >= 0){
      discCount[7]++;
      loadingWeight = loadingWeight - microWhite1*2;
    }
    if (loadingWeight - microWhite2*2 >= 0){
      discCount[8]++;
      loadingWeight = loadingWeight - microWhite2*2;
    }
  }
}
