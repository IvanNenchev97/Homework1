#include<iostream>
using namespace std;
int main()
{
	int n,number,i,sum=0,counter=0;
	double average;
	cout<<"Enter number of elements:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<"Enter number:";
		cin>>number;
		if(number>1)
		{
			sum=sum+number;
			counter++;
		}
		else
		{
			break;
		}
	}
	average=(double)sum/counter;
	cout<<"Sum="<<sum<<endl;
	cout<<"Number of elements is:"<<counter<<endl;
	cout<<"Average:"<<average<<endl;
	
	
	

}
