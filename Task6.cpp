#include<iostream>
using namespace std;
int main()
{
	
	int n,i,j,rem,sum=0;
	cout<<"Enter two-digit number:";
	cin>>n;
	for(i=10;i<=n;i++)
	{
		j=i;
		while(j!=0)
		{
			rem=j%10;
			j=j/10;
			sum=sum+rem;
		}
	
		
		
	}
	cout<<"Sum of all two-digit number from 10 to n is:"<<sum<<endl;
	
	
	
	

}
