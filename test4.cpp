#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  double x,y,z,i,j,k;
  cin >> x >> y >> z;
  if((y*y-4*x*z)>=0)
  {
    k=sqrt(y*y-4*x*z);
    i=(-y+k)/2;
    j=(-y-k)/2;
    cout << i << "," << j;
  }
  else
  {
    cout << "none";
  }
  return 0;
}
