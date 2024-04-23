#include<iostream>
using namespace std;
float sum(float a, float b)
{
	float tot=a+b;
	return tot;
}
float sub(float a,float b)
{
	float tot=a-b;
	return tot;
}
float mult(float a, float b)
{
	float tot=a*b;
	return tot;
}
float div(float a,float b)
{
	float tot=a/b;
	return tot;
}
int main()
{
	cout<<"--------------------------------";
	cout<<"\n 	Simple Calculator \n";
	cout<<"--------------------------------\n";
	int ch;
	float tot,n1,n2;
	cout<<"\n----------- MENU -----------\n1. Add two numbers\n2. Subtract two numbers\n3. Multiply two numbers\n4. Divide two numbers\n";
	do
	{
		cout<<"\n\nEnter your choice : ";
		cin>>ch;
		cout<<"\n";
		switch(ch)
		{
			case 1:
				{
					cout<<"Enter the first number : ";
					cin>>n1;
					cout<<"Enter the second number : ";
					cin>>n2;
					tot=sum(n1,n2);
					cout<<"--------------------------\n";
					cout<<"  Addition : "<<tot;
					cout<<"\n--------------------------";
					break;
				}
			case 2:
				{
					cout<<"Enter the first number : ";
					cin>>n1;
					cout<<"Enter the second number : ";
					cin>>n2;
					tot=sub(n1,n2);
					cout<<"--------------------------\n";
					cout<<"  Subtraction : "<<tot;
					cout<<"\n--------------------------";
					break;
				}
			case 3:
				{
					cout<<"Enter the first number : ";
					cin>>n1;
					cout<<"Enter the second number : ";
					cin>>n2;
					tot=mult(n1,n2);
					cout<<"--------------------------\n";
					cout<<"  Multiplication : "<<tot;
					cout<<"\n--------------------------";
					break;
				}
			case 4:
				{
					cout<<"Enter the first number : ";
					cin>>n1;
					cout<<"Enter the second number : ";
					cin>>n2;
					tot=div(n1,n2);
					cout<<"--------------------------\n";
					cout<<"  Division : "<<tot;
					cout<<"\n--------------------------";
					break;
				}
			default:
				{
					cout<<"\tInvalid Choice";
				}
		}
	}while(ch!=5);
}
