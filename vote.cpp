#include <iostream>
using namespace std;;
int main()
{
	int age;
	cout<<"Enter your age to check whether you are eligible to vote or not:";
	cin>>age;
	if (age>=18 && age<20)
	{
		cout<<"\nCongrats you are ready to make decisions on democratic government structure being a teenager";
	}
	if(age>=18)
	{
		cout<<"\nYou are eligible!!";
	}
	else
	cout<<"\nYou are not eligible";
}
