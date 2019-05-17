#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	char text[500], Rev[500];
	int num, i;
	
	cout << "Enter the number of characters to put inside the array: \n";
	cin >> num;
	
	cout << "Enter " << num << " characters. \n";
	
	for (i=0; i < num; i++)
	{
		cin >> text[i];
	}

	for (i = 0; i < num; i++)
	{
		//[num-i-1] is for the value placed on it to be placed on the other side.
		Rev[i] = text[num-i-1];
	} 
        
    cout << "In Reverse Order: " << endl;
    for (i = 0; i < num; i++)
    {
    	cout << Rev[i] << " ";
	}
	getch();
    return 0;
	
}
