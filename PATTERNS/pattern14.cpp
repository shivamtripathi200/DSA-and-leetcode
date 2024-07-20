// ****

// *  *

// *  *

// ****
#include<iostream>
using namespace std;
int main(){
    int l,b;
    cout<<"Enter the length of the box";
    cin>>l;
    cout<<"Enter the bredth of the box";
    cin>>b;
    int i=1;
    while (i<=l)
    {
        int j=1;
        while (j<=b)
        {
            // if (i%2==0)
            // {
            //     cout<<endl;
            // }
            if (i==1||i==l||(j==1||j==b))
            {
                cout<<"*";
            }else{
                cout<<" ";
            }
            
            
            j++;
        }
        cout<<endl;
        i++;
    }
}

