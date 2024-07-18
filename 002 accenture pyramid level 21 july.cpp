// 002 accenture pyramid level 21 july.cpp

//  n*2 + n-1

#include <iostream>
using namespace std;

int totc(int n){
    if(n == 1){
        return 2;
    }
    int c= n*2 + n-1 + totc(n-1); // logic asa ahe ki pic phych and magch add krych 
    return c;
}

int main(){
    
    int card=totc(2);
    cout<<card;
}
