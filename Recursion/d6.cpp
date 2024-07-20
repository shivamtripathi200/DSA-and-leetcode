#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int s,int e){
    int pivot = arr[s];
    int cnt= 0;
    for (int i = s+1; i <= e; i++)
    {
        if(arr[i]<=pivot){
            cnt++;
        }
    }
    int position = cnt + s;
    swap(arr[position],arr[s]);
    int i = s,j = e;
    while(i<position && j> position){
        while (arr[i]<pivot)
        {
            i++;
        }        
        while (arr[j]>pivot)
        {
            j--;
        }       
        if(i<position && j> position){
            swap(arr[i++] , arr[j--]);
        } 
    }
    return position;
    
}
void quick_sort(int arr[],int s, int e){
    if(s>=e){
        return;
    }
    int p = partition(arr,s,e);
    
    //left array sorting
    quick_sort(arr,s,p-1);

    //right array sorting
    quick_sort(arr,p+1,e);
}
int main(){
    int arr[10] = {4,6,2,5,3,7,9,1,4,8};
    int n = 10;
    quick_sort(arr, 0 , n - 1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
    
}