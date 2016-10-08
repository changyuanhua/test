#include <iostream>
using namespace std;
int main()
{
	int n,i;
		cout<<"n=";
			cin>>n;
				for(i=2;i<=n;i++)
						if(n%i==0)
								{
											while(n%i==0)
															n/=i;
																		cout<<endl<<i;
																				}
																					return 0;
																					}
