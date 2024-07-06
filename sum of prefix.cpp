// sum of prefix.cpp

#include<iostream>
using namespace std;

int main(){
    int arr[6]={4,5,6,7,1,2};
    int arr2[6];
    for(int i=0;i<6;i++){
        
            arr[i]=arr[i]+arr[i-1];
    }
    
     for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    
    
}
