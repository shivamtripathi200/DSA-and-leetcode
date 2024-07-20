#include<iostream>
using namespace std;

int binarysearch(int arr[],int size,int key){
    int lo=0,hi=size-1;
    int mid=lo +(hi-lo)/2;
    while(lo <= hi){
        if(arr[mid] == key){
            return mid;
        }
        if(arr[mid] < key){
            lo=mid+1;
        }else{
            hi=mid-1;
        }
        mid=lo+(hi-lo)/2;
    }
    return -1;
}

int main(){
    int even[10]={1,2,3,4,5,6,7,8,9,22};
    int odd[9]={1,2,3,4,5,6,7,8,9};
    int index = binarysearch(even,10,22);
    int index2= binarysearch(odd,9,8);
    cout<<"The number 22 is at index:"<<index<<endl;
    cout<<"The number 8 is at index:"<<index2<<endl;
}