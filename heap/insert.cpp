#include<bits/stdc++.h>

using namespace std;

class heap {
    public:
    int arr[100];
    int size;

    heap(){
        arr[0]=-1;
        size = 0;
    }

    void deletion(){
        cout<<"Deleting the element from Heap\n";
        arr[1]=arr[size];
        size--;
        int index = 1;
        while(index<size){
            int leftindex = index * 2;
            int rightindex = (index * 2)+1;
            if (arr[leftindex] > arr [index] && leftindex < size){
                swap(arr[leftindex],arr[index]);
            }else if (arr[rightindex] > arr[index] && rightindex < size){
                swap(arr[rightindex],arr[index]);
            }else{
                return;
            }
        }
    }

    void insert(int val){
        size = size+1;
        arr[size] = val;
        int index = size;
        while (index > 1)
        {
            int parent = index/2;
            if (arr[index] > arr[parent])
            {
                swap(arr[index],arr[parent]);
                index =  parent;
            }else{
                return;
            }
            
        }
        
    }
    void print(){
        for (int i=1;i<=size;i++)
            cout<<arr[i]<<" ";
    }
};
int main(){
    heap h;
    h.insert(5);
    h.insert(55);
    h.insert(45);
    h.insert(60);
    h.insert(35);
    h.print();
    h.deletion();
    h.print();
}