#include<bits/stdc++.h>
using namespace std;

bool issorted(int arr[] , int size){
    if(size==0 || size==1)
    return true;

    if(arr[0] > arr[1])
    return false;
    else
    return issorted(arr+1, size-1 );
}

int main(){
    int arr[7] = {1,1,4,4,5,6,7};
    if(issorted(arr,7))
    cout<<endl <<"Sorted"<<endl;
    else
    cout<<endl << "Not Sorted"<<endl;
    
}