#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
{
	int n, a, b;
	
	cout<<"Enter the integer you want to find the factorial of:\n";
	cin>>n;  								
	
	a=n;								//assigning variable a and b to the value of n.
	b=n;
	
	while(a>1)							// While loop to find factorial of number while a>1.
	{
	
		a=a-1;							//decrement a by 1 and assinging this value as the new value of a.
		b=(b*a);						//b is assigned the value of b times the new value of a.
		
	}
	
	cout << n << "! is " << b << endl;	//Once a = 1, the final value has been found and stored in variable b.
	
	return 0;
}
