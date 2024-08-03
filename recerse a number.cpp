// recerse a number.cpp
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int numb=987654;
    int rev=0;
    int n;
    while(numb !=0){
    n=numb%10;
    rev=rev*10 + n;
    numb=numb/10;
    }
    cout<<rev;
}
