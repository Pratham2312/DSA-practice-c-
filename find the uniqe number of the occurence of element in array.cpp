// find the uniqe number of the occurence of element in array 

#include<iostream>

using namespace std;

int main(){
    int arr[5]={1,2,2,1,3};
    for(int i =0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i]==arr[j]){
                arr[i]=-1;
                arr[j]=-1;
            }
        }
    }
    
    for(int i=0;i<5;i++){
        if(arr[i]!=-1){
            cout<<arr[i];
        }
    }
}
