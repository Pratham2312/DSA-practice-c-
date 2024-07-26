// accenture 02 big in array.cpp
#include <iostream>

using namespace std;

int gr(int arr[], int n){
    int max=0;
    
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int main() {
   int arr[5]={4,5,7,8,9};
   int size=sizeof(arr)/sizeof(arr[0]);
   int a=gr(arr, size);
   cout<<a;
}
