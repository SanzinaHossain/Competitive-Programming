#include<iostream>

using namespace std;

int main()
{
	unsigned long i,p,n,sum=0;
	cout<<"Enter any number:";
	cin>>n;

	while(n!=0)
	{
		p=n%10;
		sum+=p;
		n=n/10;
	}

	cout<<endl<<"Sum of digits is:"<<sum;
	return 0;
}
