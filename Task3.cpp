#include<iostream>
using namespace std;
int main()
{
	int number,remainder,counter=0;
	cout<<"Enter number:";
	cin>>number;
	while(number!=0)
	{
		remainder=number%10;
		number=number/10;
		counter++;
	}
	cout<<"Number of digits is:"<<counter<<endl;
	
	
	

}
