// 004 Accenture nearest smaller number.cpp

#include <iostream>
using namespace std;

int main(){
    int arr[8]={3,2,11,7,6,5,6,1};
    
    for(int i=0;i<8;i++){
        for (int j=i;j<8;j++){
            if(i==7){
                arr[i]=-1;
                break;
            }
            if(arr[j]<arr[i]){
                arr[i]=arr[j];
                break;
            }
        }
    }
    
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
}
