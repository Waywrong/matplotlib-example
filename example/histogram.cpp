#include <cmath>
#include "../matplotlibcpp.h"

using namespace std;
namespace plt = matplotlibcpp;

int main() 
{  
	vector<double> x,y;
  vector<double> xErr,yErr;
  int initNum = 500000;
  srand(time(NULL));
  for(int i=0;i<initNum;i++)
  {
  	x.push_back(0.5*i);
  	y.push_back(rand()%100);
  }

  plt::clf();
  plt::title("histogram");
  plt::hist(y,50);
  plt::legend();
  plt::show();
} 
