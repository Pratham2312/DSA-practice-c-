// second largest element of array.cpp 

#include<iostream>

using namespace std;

int main(){
    int arr[5]={4,5,8,1,6};
    int max=0;
    for(int i =0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
            arr[i]=-1;
        }
        
    }
    int maxx=0;
    for(int i =0;i<5;i++){
        if(arr[i]>maxx){
            maxx=arr[i];
        }
        
    }
    cout<<maxx;
    
}
