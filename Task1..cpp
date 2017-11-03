#include<iostream>
using namespace std;
int main()
{
	int n,number,i,sum=0;
	cout<<"Enter number of elements:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<"Enter element:"
		cin>>number;
		sum=sum+number;
	}
	cout<<"Sum of all elements is:"<<sum<<endl;
	
	

}
