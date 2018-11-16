#include<iostream>
using namespace std;
	void accept(int *,int);
	void display(int *,int);
	void bubblesort(int *,int);
int main()
{

	int arrsize,c;
	cout<<"\n Enter the number of elements:";
    cin>>arrsize;
    int arr[arrsize];
	do
	{
		cout<<"\n\n\n enter your choice \n 1.Accept \n 2.Display \n 3.Bubble sort. \n 0.exit.";
		cin>>c;
		switch(c)
		{
			case 1:{

				accept(arr,arrsize);
				break;
				}
			case 2:{
				display(arr,arrsize);
				break;
				}
			case 3:{
				bubblesort(arr,arrsize);
				break;
				}

			 default:{
					cout<<"\n wrong input entered!!!";


				      }
		}
	    cout<<"\n___________________________________________________\n";
	}while(c!=0 && c<4 && c>0);
	return 0;
}

	void accept(int *arr,int arrsize)
	{
		for(int i=0;i<arrsize;i++)
        {
            cout<<"\n enter the element at position "<<i+1<<":";
            cin>>arr[i];
        }

	}

	void display(int *arr,int arrsize)
		{
			for(int i=0;i<arrsize;i++)
			{
				cout<<arr[i]<<" ";
			}
		}

void bubblesort(int *arr,int arrsize){
    int temp;
		for(int i=0;i<arrsize-1;i++)
        {
            cout<<"\n pass:"<<i+1<<":\n";
            for(int j=0;j<arrsize-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
			      temp=arr[j];
			      arr[j]=arr[j+1];
			      arr[j+1]=temp;
			}
			display(arr,arrsize);
            cout<<"\n";
		}
        }



}

