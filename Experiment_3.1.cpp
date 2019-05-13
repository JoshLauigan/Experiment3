#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	int Arr[10],j,l,small,large, sum=0;
	float average;


	j=10;

	for(l=0;l<n;l++)
	{
		cout<<"Enter number "<<l+1<<":";
		cin>>Arr[l];
	}

	small=Arr[0];
	large=Arr[0];

	for(l=1;l<n;l++)
	{
		if(Arr[l]<small)
			small=Arr[l];
		if(Arr[l]>large)
			large=Arr[l];
	}
	
		for(l=0;l<n;l++)
	{
		sum += Arr[l];
	}
	
	average = (float)sum /j;


	cout<<"\nLargest integer is :"<<large;
	cout<<"\nSmallest integer is :"<<small;
    
    cout << "\nSum: " << sum<< endl;
    cout << "AVERAGE: " << average;



    getch();
	return 0;
}

