// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int arr[]={4,5,8,9,6};
    int sum=0;
    int s=sizeof(arr)/sizeof(arr[1]);
    
    for(int i=0;i<s;i++){
        sum=sum+arr[i];
    }
    cout<<sum;
}
