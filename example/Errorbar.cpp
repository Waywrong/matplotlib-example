#include <cmath>
#include "../matplotlibcpp.h"

using namespace std;
namespace plt = matplotlibcpp;

int main() 
{  
	int n = 80;
  vector<double> x(n),y(n);
  vector<double> xErr(n),yErr(n);
  for(int i=0;i<n;i++)
  {
  	x.at(i) = 0.5*i;
  	y.at(i) = i;
  	xErr.at(i) = .3;
  	yErr.at(i) = .3*i;
  }
  plt::title("errorbar");
  plt::errorbar(x,y,yErr);
  //plt::plot(x,y,"r--");
  plt::named_plot("path",x,y,"r--");
  plt::legend();
  plt::show();
} 
