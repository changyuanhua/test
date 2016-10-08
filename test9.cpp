#include<iostream>
using namespace std;

int main()
{
  int i,j,k;
  cin >> i;
  for(j=2;j<=i;j++)
  {
    while(i%j==0)
    {
      i=i/j;
      cout << j;
    }      
  }
}

