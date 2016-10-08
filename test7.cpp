#include <iostream>
using namespace std;
int main()
{
  int i,j,k;
  cin >> i ;
  
  for(j=2;j<i;j++)
  {
    k=i%j;
    if(k==0)
    {
      cout << "no";
      return 0;
    }
  }
  cout << "yes";
  return 0;
}
