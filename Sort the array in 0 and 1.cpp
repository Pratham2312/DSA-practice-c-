//  Sort the array in 0 and 1.cpp

#include<iostream>
using namespace std;

int main(){
    int arr[6]={0,1,0,1,1,0};
    int count=0;
    for (int i =0;i<6;i++){
        if(arr[i]==0){
            count++;
        }
    }
    
    for(int i=0;i<6;i++){
        if(i<count){
            arr[i]=0;
        }
        else{
            arr[i]=1;
        }
    }
    
    for(int i =0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}
