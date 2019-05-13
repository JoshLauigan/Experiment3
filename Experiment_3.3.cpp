#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
int main()
{
	char array[20];
	int size;
	cout << "ENTER A WORD:\n";
	cin>> array;
	
	size =0;
	while(array[size] !='\0')
		size++;
	cout << "REVERESED WORD: \n";
	for(int j=size-1;j>=0;j--)
	{
		cout << array[j];
	}
	cout<< "\nArray size is:"<< size;

	
	getch();
	return 0;
}
