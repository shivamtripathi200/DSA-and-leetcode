#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[],int size){
    for(int i = 1;i<size;i++){
        int temp = arr[i];
        int j = i-1;
        for(;j>=0;j--){
            
            if( arr[j] > temp ){
                arr[j+1] = arr[j];
            }else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}

int main(){
    int arr[7] = { 10,1,7,4,8,7,9};
    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    insertion_sort(arr,7);
    cout<<"Array after sorting using insertion sort"<<endl;
    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    
}