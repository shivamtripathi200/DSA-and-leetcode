#include <bits/stdc++.h> 
using namespace std;
void selectionSort(vector<int>& arr, int n)
{   
    // Write your code here.
    for(int i=0;i<n-1;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        swap(arr[i],arr[minindex]);
    }
}