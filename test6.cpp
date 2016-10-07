#include<iostream>
using namespace std;
int main()
{
  int i,j,x;
  for(i=1;i<10;i++)
    for(j=1;j<10;j++)
    {
      x=i*j;
      cout << i << "*" << j << "=" << x << endl;
    }
  return 0;
}
