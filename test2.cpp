#include <iostream>
using namespace std;
int main()
{
  int i,j,k;
  cin >> i;
  j=i*9%5;
  k=(i*9-j)/5+32;
  cout << k;
  return 0;
}
