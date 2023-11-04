#include<iostream.h>
#include<conio.h>
int factofNnum(num)
{
	int i,fact=1;

	for(i=num;i>1;i--)
	{
		fact=fact*i;
	}

	return fact;
}
void main()
{
	int n;
	clrscr();

	cout<<"Enter the Number for finding Factorial:: ";
	cin>>n;

	cout<<"Factorial of given Number is :: "<<factofNnum(n)<<endl;


	getch();


}
