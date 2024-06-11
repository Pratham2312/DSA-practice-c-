// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int arr[]={4,5,8,9,6};
    int big=65;
    int s=sizeof(arr)/sizeof(arr[1]);
    int flag=0;
    for(int i=0;i<s;i++){
        if(arr[i]==big){
            cout<<"element is present at index "<<i;
            flag=1;
        }
        
    }
    if(flag==0){
        cout<<"-1";
    }
}
