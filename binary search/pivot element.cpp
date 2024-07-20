#include<iostream>
using namespace std;

int pivotelement(int arr[],int size){
    int s=0;
    int e=size-1;
    int mid = s + (e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s= mid+1;
        }else{
            e=mid;
        }
        mid= s+(e-s)/2;
    }
    return s;
}
int main(){
    int arr[6]={7,8,9,3,4,5};
    int index = pivotelement(arr,6);
    cout<<"The pivot element is at index:"<<index<<endl;
}