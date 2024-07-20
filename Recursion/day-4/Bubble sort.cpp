#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[],int size){
    
    if( size==0 || size == 1)
        return ;
    int sorted = true;
    for (int i = 0; i < size-1; i++)
    {
        if( arr[i] > arr[i+1]){
            swap(arr[i],arr[i+1]);
            sorted = false;
        }
    }
    if (sorted==true)
    {
        return;
    }
    
    // recursive relation 
    bubble_sort(arr , size-1);
    
}

int main(){
    int arr[7]={7,9,3,4,7,1,2};
    cout<<"Given array:";
    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    bubble_sort(arr,7);
    cout << "Sorted Array: \n";
    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    
}