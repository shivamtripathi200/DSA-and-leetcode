#include <bits/stdc++.h> 
using namespace std;
void bubbleSort(int arr[], int n)
{   
    // Write your code here.
    bool sorted = true;
    for(int i = 1 ;i <n;i++){
        for(int j = 0; j < n-i;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                sorted = false;
            }
        }
        if(sorted ==true){
            break;
        }
    }
}
int main(){
    int arr[5]={5,3,2,1,4};
    bubbleSort(arr,5);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}
