// recursion on sum of int.cpp

#include<iostream>

using namespace std;
int sumi(int n){
    if(n<=0 || n<10){
        return n;
    }
    int a= sumi(n/10) + n%10;
    return a;
    
}

int main(){
    int n =1234;
    int a=sumi(n);
    cout<<a;
    
}
