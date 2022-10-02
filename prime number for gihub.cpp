// prime number
#include<iostream>
using namespace std;
int main()
{
	int i,num;
	cout<<"Enter the number to search "<<endl;
	cin>>num;
	for(i=2; i<num-1; i++)
	{
		if(num%i==0)
		{
			cout<<"number is not prime"<<endl;
		}
		exit(0);
		
	}
	cout<<"number is prime "<<endl;
	return 0;
}
