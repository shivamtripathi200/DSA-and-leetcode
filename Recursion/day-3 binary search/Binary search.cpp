// binary search using recursion

#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[],int s,int e,int key){
    if (s>e){
        return -1;
    }
    int mid= s+(e-s)/2;
    //if the element is found at middle index itself then print it and exit function.
    if(arr[mid]==key){
        return mid;
    }
    if(arr[mid]>key)
        return binary_search(arr,s,--mid,key);
    
    if(arr[mid]<key)
        return binary_search(arr,++mid,e,key);
    
    
}

int main(){
    int arr[7]={1,2,3,4,5,6,7};
    cout<<"The number is at index:"<<binary_search(arr,0,7,7)<<endl;
}