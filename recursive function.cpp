// recursive function.cpp

#include<iostream>

using namespace std;

int fact(int n){
    if(n==1){
        return 1;
    }
    
    int ans=n*fact(n-1);
    return ans;
}

int main(){
    
    int n = 6;
    
    int a=fact(n);
    cout<<a;
    
}
