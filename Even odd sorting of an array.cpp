// Even odd sorting of an array.cpp

#include<iostream>
using namespace std;

void sort(int arr[]){
    int  left=0;
    int right=5;
    int temp;
    while(left<right){
        if(arr[left]%2==1 && arr[right]%2==0){
            temp=arr[left];
            arr[left]=arr[right];
            arr[right]=temp;
            left++;
        right--;
        }
        
        if(arr[left]%2==0){
            left ++;
        }
        if(arr[right]%2==1){
            right --;
        }
        
        
    }
    
    for(int i =0;i<6;i++){
        cout<<arr[i];
    }
}

int main(){
    int arr[6]={1,5,2,4,9,6};
    
    sort(arr);
}
