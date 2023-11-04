#include<iostream.h>
#include<conio.h>
int cal_power(int n)
{
	return n*n;
}
void main()
{
	int num;
	clrscr();

	cout<<"Enter the Number to print :: ";
	cin>>num;

	cout<<"Power of Given Number is :: "<<cal_power(num)<<endl;

	getch();

}
