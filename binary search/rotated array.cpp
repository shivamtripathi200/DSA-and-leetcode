#include<iostream>
using namespace std;

int binarysearch(int arr[],int key,int s , int e ){
int mid = s+(e-s)/2;
    while (s<=e)    
    {
        if (key == arr[mid])
        {
            return mid;
        }
        
        if(key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid= s+(e-s)/2;
    }
    return -1;
}

int getpivot(int arr[],int size){
    int s=0;
    int e= size-1;
    int mid = s+(e-s)/2;
    while (s<e)
    {
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e = mid;
        }
        mid= s+ (e-s)/2;
    }
    return s;
}

int main (){
int arr[6]={7,8,9,10,1,2};
cout<<"Enter the element to be searched: ";
int target;
cin>>target;
int pivot=getpivot(arr,6);
int index;
if(target >=arr[pivot] && target <=arr[6-1]){
index = binarysearch(arr,target,pivot,5);
}else{
index = binarysearch(arr,target,0,pivot-1);
}
cout<<"The given target is at index:"<<index;
}