//square root using binary search
#include<iostream>
using namespace std;
int squareroot(int num){
    int s=0;
    int e=num;
    int mid=s+(e-s)/2;
    long long int ans = -1;
    while(s<=e){
        if (mid*mid==num)
        {
            ans = mid;
            return mid;
        }
        
        if (mid*mid<num)
        {
            s=mid+1;  
        }
        else
        {
            e=mid-1;  
        }
        
        mid=s+(e-s)/2;
    }
    return ans;
}
    double moreprecision(int tempsol,int precision,int num){
        double f = 1;
        double ans=tempsol;
        for (int i = 0; i < precision; i++)
        {
            f= f/10;
            for(double j=ans;j*j<num;j=j+f){
                ans=j;
            }
        }
        return ans;
        
    }
int main(){
    cout<<"Enter the number to find out the sqrt :";
    int n;
    cin>>n;
    cout<<"How much precision do you want: ";
    int precision;
    cin>>precision;
    int tempsol=squareroot(n);
    cout<<"The square root is: "<<moreprecision(tempsol,precision,n);
    return 0;
}