#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main()
{

 	int i, n=10, inp[10];
 	float total=0, average;
 	
 	cout << setprecision(2) << fixed << showpoint;
 	
 	for (i = 0; i < 10; i++)
	{
		cout << "Enter Number " << i+1 << endl;
		cin >> inp[i]; 
	}
	//for total
	for (i = 0; i < n; i++)
	{
		total = total + inp[i];
	}	
	cout << "\nThe Sum of all the Numbers is = " << total << endl;
	
	//for average
	average = total/10;
	cout << "The Average of all the numbers is = " << average << endl;
	
	//for Largest Number
	for (i = 1; i < n; ++i)
	{
		if (inp[0] < inp[i])
			inp[0] = inp[i];
	}
	cout << "The Largest Number is = " << inp[0] << "\n" << endl;
	
	getch();
	return 0;
}
	
