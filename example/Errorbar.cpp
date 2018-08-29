#include <cmath>
#include "../matplotlibcpp.h"

using namespace std;
namespace plt = matplotlibcpp;

int main() 
{  
	vector<double> x,y;
  vector<double> xErr,yErr;
  int initNum = 50;
  for(int i=0;i<initNum;i++)
  {
  	x.push_back(0.5*i);
  	y.push_back(i);
  	xErr.push_back(3);
  	yErr.push_back(.3*i);
  }

  int n=10;
  for(int k=0;k<n;k++)
  {
  	x.push_back(0.2*k+0.5*initNum);
  	y.push_back(k+initNum);
  	xErr.push_back(7);
  	yErr.push_back(.7*k);

  	plt::clf();
	  plt::title("errorBar");
	  plt::errorbar(x,y,yErr);
	  plt::named_plot("path",x,y,"r--");
	  //plt::xlim(0, n*n);
	  plt::legend();
	  plt::pause(0.01);
	}
	plt::show();
} 
