// accenture kadane.cpp
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int sum=0;
    int maxi=0;
    
    for(int i=0;i<7;i++){
        sum=sum+arr[i];
        maxi=max(sum,maxi);
        if(sum<0){
            sum=0;
        }
       
    }
     cout<<maxi<<endl;
        cout<<sum;

    return 0;
}
