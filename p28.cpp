#include<iostream>
#include<conio.h>
#define esc 27
using namespace std;
class tollbooth
{
	unsigned int cars;
	double money;
	public:
		tollbooth()
		{ cars=money=0;}
		void payingcar()
		{
			cars+=1;
			money+=0.50;
		}
		void nonpay_car()
		{
			cars+=1;
		}
		void display()
		{
			cout<<"\nTotal NO. OF CARS: "<<cars;
			cout<<"\nTOTAL MONEY: Rs."<<money;
		}
}tb;
int main()
{
	int ch;
	cout<<"\nEnter 1 for Paying Car\nEnter 2 for Non Paying Car\nEnter Esc for display\nEnter 0 to exit";
	do
	{
		cout<<"\nEnter input: ";
		//cin>>ch;
		ch=getch(); cout<<(char)ch;
		switch(ch)
		{
			case '1':
				tb.payingcar();
				cout<<"\nDone!";
				break;
			case '2':
				tb.nonpay_car();
				cout<<"\nDone!";
				break;
			case esc:
				tb.display();
				break;
			case '0':
				break;
			default:
				cout<<"\nWrong input!";
		}
	}while(ch!='0');
	cout<<"\nThank You!";
}
