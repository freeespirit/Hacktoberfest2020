#include <iostream>
using namespace std;

int main()
{
	int count, i,j, arr[30], num, first, last, middle;
	cout<<"how many elements would you like to enter?:\n"; 
        cin>>count;


		cout<<"Enter"<<count<<"elements for array in ascending order.\n"; 
			for (i=0; i<count; i++)
	{
                cin>>arr[i];
	}
	cout<<"Enter the number that you want to search:\n"; 
        cin>>num;

	first = 0;
	last = count-1;
	middle = (first+last)/2;
	while (first <= last)
	{
	   if(arr[middle] < num)
	   {
		first = middle + 1;

	   }
	   else if(arr[middle] == num)
	   {
		cout<<num<<" found in the array at the location "<<middle+1<<"\n"; 
                break; 
           } 
           else { 
                last = middle - 1; 
           } 
           middle = (first + last)/2; 
        } 
        if(first > last)
	{
	   cout<<num<<" not found in the array";
	}
	return 0;
}
