#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int s , int e){
    int mid = s+(e-s)/2;
    
    int L1 = mid-s+1;
    int L2 = e - mid;
    int *first = new int [L1];
    int *second = new int [L2];
    
    //coping values
    int k = s;
    for(int i = 0; i< L1;i++){
        first[i] = arr[k++];
    }
    k=mid+1;
    for(int i = 0; i< L2;i++){
        second[i] = arr[k++];
    }
    
    int index1=0;
    int index2=0;
    k = s;
    
    while(index1<L1 && index2< L2){
        if(first[index1]<= second[index2])
            arr[k++] = first[index1++];
        else
            arr[k++] = second[index2++];
    }
    while(index1<L1)
        arr[k++] = first[index1++];
    
    while(index2<L2)
        arr[k++] = second[index2++];
    
    delete []first;
    delete []second;
}

void mergesort(int arr[],int s,int e){
    if (s>=e)
    return;
    
    int mid = s+(e-s)/2;
    
    mergesort(arr,s,mid);
    
    mergesort(arr,mid+1,e);
    
    merge(arr,s,e);
}
int main(){
    int n;
    cout<<"Enter the number of elements in array: ";
    cin>>n;
    int a[n];
    cout << "Enter Elements:" << endl;
    for(int i=0; i < n ;i++) {
        cin >> a[i];
        }
    // Merge Sort Function Call
    mergesort(a, 0 , n - 1 );
    // Printing Sorted Array
    cout << "\nSorted array is : \n";
    for(int i=0; i < n ;i++)
        cout << a[i] << " ";
    return 0;
}