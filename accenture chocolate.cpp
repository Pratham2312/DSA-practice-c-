// accenture chocolate.cpp
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int choco(int arr[],int size, int m){
    int group=size-m;
    int min=10000;
    sort(arr,arr+size);
    for(int i=0;i<=group;i++){
        int j=i+m-1;
        if(j<=size){
            int sm=arr[j]-arr[i];
            if(sm<min){
                min=sm;
            }
        }
       
    }
    
     return min;
}

int main() {
    
    int arr[]={3, 4, 1, 9, 56, 7, 9, 12};
    int m=5;
    int size=sizeof(arr)/sizeof(arr[0]);
    int ans=choco(arr,size,m);
    cout<<ans;
    

    return 0;
}
