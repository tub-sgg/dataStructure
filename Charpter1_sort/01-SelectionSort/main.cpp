#include <iostream>

template<typename T>
void selectionSort(T arr[],int n){
	for(int i=0;i<n;i++){
	   T min=arr[i];
	   int minIdx=i;
	   for(j=n-1;j>i;j--)
		{
		   if(arr[j]<min){
		    minIdx=j;
		    min=arr[j];
		   }
		}   
	swap(arr[i],min);
	}
}
int main() {

    int a[10] = {10,9,8,7,6,5,4,3,2,1};
    selectionSort(a,10);
    for( int i = 0 ; i < 10 ; i ++ )
        cout<<a[i]<<" ";
    cout<<endl;

    return 0;
}
