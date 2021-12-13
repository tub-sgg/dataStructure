#include <iostream>

template<typename T>
void selectionSort(T arr[],int n){
	for(int i=0;i<n;i++){
	   T min=arr[i];
	   for(int j=n-1;j>i;j--)
		{
		   if(arr[j]<min){
		    min=arr[j];
	   	   std::swap(arr[i],arr[j]);
		   }
		}   
	}
}
int main() {

    int a[10] = {10,9,8,7,6,5,4,3,2,1};
    selectionSort(a,10);
    for( int i = 0 ; i < 10 ; i ++ )
        std::cout<<a[i]<<" ";
    std::cout<<std::endl;

    return 0;
}
