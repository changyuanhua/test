#include <iostream>

using namespace std;

int main()
{
  int i,j,k,a,b,x=-1,y[100]={0},z=0;
  cin >> i;
  for(j=2;j<=i;j++)
  {
    k=i%j;
    x++;
    if(k==0 && i!=j)
    {
      z=1; 
      for(a=2;a<=j;a++)
      {
        b=j%a;
	if(b==0)
	{
	    y[x]=a;
	    cout << y[x] <<endl;
	  
        }
      }
    }
    else if (k==0 && i==j && z==0)
    {
      cout << j;
    }

  }
  return 0;
}  
