#include<iostream>
using namespace std;

add(float a,float b)
{
	cout<<"Enter two numbers :";
	cin>>a>>b;
	return (a+b);
}
sub(float a,float b)
{
	cout<<"Enter two numbers :";
	cin>>a>>b;
	return (a-b);
}
multiply(float a,float b)
{
	cout<<"Enter two numbers :";
	cin>>a>>b;
	return (a*b);
}
div(float a,float b)
{
	cout<<"Enter two numbers :";
	cin>>a>>b;
	return (a/b);
}
mod(int a,int b)
{
	cout<<"Enter two numbers :";
	cin>>a>>b;
	return (a % b);
}

main()
{
	float a=0,b=0;
	int choice;
//	MAIN MENU
	do
	{		
	cout<<"\n~~~~~~~~~~~~~\n";
	cout<<"--MENU--";
	cout<<"\n1.ADD";
	cout<<"\n2.SUBTRACT";
	cout<<"\n3.MULTIPLY";
	cout<<"\n4.DIVIDE";
	cout<<"\n5.MODULUS";
	cout<<"\n6.EXIT";
	cout<<"\n~~~~~~~~~~~~~";
	cout<<"\nEnter your choice : ";
	cin>>choice;
	
	switch(choice)
	{
		case 1:cout<<"RESULT :"<<add(a,b); // FUNCTION CALL
		break;
		case 2:cout<<"RESULT :"<<sub(a,b); // FUNCTION CALL
		break;
		case 3:cout<<"RESULT :"<<multiply(a,b); // FUNCTION CALL
		break;
		case 4:cout<<"RESULT :"<<div(a,b); // FUNCTION CALL
		break;
		case 5:cout<<"RESULT :"<<mod(a,b); // FUNCTION CALL
		break;
		case 6:exit(0);
		break;
		default : cout<<"Invalid input!!! Enter the correct choice.";
		}
	}while(choice!=6);
}


