//WAP to swap alternate numbers in an array
#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
void swapalternate(int a[],int n){
    for (int i = 0; i < n-1; i+=2)
    {
        swap(a[i],a[i+1]);
    }
    
}
void print(int a[],int size){
    for (int i = 0; i < size; i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int a[5]={1,2,3,4,5};
    swapalternate(a,5);
    print(a,5);
    
}