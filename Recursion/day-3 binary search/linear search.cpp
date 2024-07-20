// linear search using recursion
#include<bits/stdc++.h>
using namespace std;

int linear_search(int arr[],int size,int key){
    int static count = 1;
    if(size==0)
        return 0;
    if(arr[0]==key)
        return count;
    else
        count++;
        linear_search(arr+1,size-1,key);
}

int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int index = linear_search(arr,7,11);
    if (index)
        cout<<"4 is at index:"<<index<<endl;
    else   
        cout<<"Not found"<<endl;
    
}