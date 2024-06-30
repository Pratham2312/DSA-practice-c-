// count the number of triplets whose sum is eqal to num.cpp

#include<iostream>
using namespace std;

int main(){
    int arr[6]={2,5,4,7,1,3};
    int tot=0;
    int sum=11;
    int k;
    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++)
        {
            // we can also add a loop here 
            k=j+1;
            if(arr[i]+arr[j]+arr[k]==sum){
                tot=tot+1;
            }
        }
    }
    cout<<tot;
}
