#include<iostream>
using namespace std;

/* int partition(int *arr,int left,int right,int pivot)
{
	while( left <= right )
	{
		while( arr[left] <pivot )
			left++;
		while( arr[right] > pivot )
			right--;
		
		if( left <= right )
		{
			int temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
			left++;
			right--;
		}
	}
	return left;
}

void quicksort(int *arr,int left,int right)
{
	if(left >= right)
		return;
	int pivot = arr[left+right]/2;
	int index = partition(arr,left,right,pivot);
	quicksort(arr,left,index-1);
	quicksort(arr,index-1,right);
} */

// A utility function to swap two elements  
void swap(int* a, int* b)  
{  
    int t = *a;  
    *a = *b;  
    *b = t;  
}  
  
/* This function takes last element as pivot, places  
the pivot element at its correct position in sorted  
array, and places all smaller (smaller than pivot)  
to left of pivot and all greater elements to right  
of pivot */
int partition (int arr[], int low, int high)  
{  
    int pivot = arr[high]; // pivot  
    int i = (low - 1); // Index of smaller element  
  
    for (int j = low; j <= high - 1; j++)  
    {  
        // If current element is smaller than the pivot  
        if (arr[j] < pivot)  
        {  
            i++; // increment index of smaller element  
            swap(&arr[i], &arr[j]);  
        }  
    }  
    swap(&arr[i + 1], &arr[high]);  
    return (i + 1);  
}  
  
/* The main function that implements QuickSort  
arr[] --> Array to be sorted,  
low --> Starting index,  
high --> Ending index */
void quickSort(int arr[], int low, int high)  
{  
    if (low < high)  
    {  
        /* pi is partitioning index, arr[p] is now  
        at right place */
        int pi = partition(arr, low, high);  
  
        // Separately sort elements before  
        // partition and after partition  
        quickSort(arr, low, pi - 1);  
        quickSort(arr, pi + 1, high);  
    }  
}  
void bubblesort(int *arr,int n)
{
	for( int i=0;i < n;i++) 
	{
		for ( int j=0;j < n-i-1;j++) 
		{
				if ( arr[j] > arr[j+1] )
				{
					int temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;
				}
		}
	}
}

void selectionsort(int *arr,int n)
{
	int minimum;
	for(int i=0;i<n;i++)
	{
		minimum = i;
		for( int j=i+1;j<n;j++)
		{
			if( arr[minimum ] > arr[j])
			{
				minimum = j;
			}
		}			
		int temp = arr[i];
		arr[i] = arr[minimum];
		arr[minimum] = temp;
	}
}
void display(int arr[], int n)
{
	for ( int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void insertionSort(int *arr,int n)
{
	for(int i=1;i<n;i++)
	{
		int key = arr[i];
		int j = i-1;
		
		while( j >=0 && arr[j] > key)
		{
			arr[j+1] = arr[j];
			j = j-1;
		}
		arr[j+1] = key;
	}
}
int main()
{
	int arr[] ={25,66,7,8,99,236,12,12,66,7,8,99,236};
	int choice;
	int n = sizeof(arr) / sizeof (arr[0]);
	display(arr,n);
	cout<<"Enter your choice: \n1) Bubble Sort \n2) Selection Sort \n3) Quick Sort \n4) Insertion Sort"<<endl;
	cin >> choice;
	display(arr,n);
	switch (choice)
	{
		case 1: 
					cout<<"Bubble sort:"<<endl;
					bubblesort(arr,n);
					display(arr,n);
					break;
		case 2: 
					cout<<"Selection sort:"<<endl; 
					selectionsort(arr,n);					
					display(arr,n);
					break;
		case 3: 
					cout<<"Quick sort:"<<endl; 
					quickSort(arr,0,n-1);					
					display(arr,n);
					break;
		case 4: 
					cout<<"Insertion sort:"<<endl; 
					insertionSort(arr,n);					
					display(arr,n);
					break;			
		default:
					cout<<"<< Invalid choice"<<endl;
					break;
	}
	return 0;
}