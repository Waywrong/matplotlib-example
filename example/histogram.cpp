#include <cmath>
#include "../matplotlibcpp.h"

using namespace std;
namespace plt = matplotlibcpp;

int main() 
{  
	vector<double> x,y;
  vector<double> xErr,yErr;
  int initNum = 500;
  srand(time(NULL));
  for(int i=0;i<initNum;i++)
  {
  	x.push_back(0.5*i);
  	y.push_back(rand()%100);
  }

  plt::clf();
  plt::subplot(3,2,1);
  plt::title("histogram");
  plt::hist(y,50);
  plt::ylabel("count");

  plt::subplot(3,2,2);
  plt::title("plot_bo");
  plt::plot(x,y,"bo");

  plt::subplot(3,2,4);
  plt::title("plot_r--");
  plt::plot(x,y,"r--");

  plt::subplot(3,2,5);
  plt::title("plot_gx");
  plt::plot(x,y,"gx");
  plt::xlabel("time");

  plt::legend();
  plt::show();
} 
