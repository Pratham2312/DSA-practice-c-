#include <iostream>
using namespace std;
int main() {
    int a=1546;
    int b;
    int c=0;
    
    while(a>0){
        b=a%10;
        a=a/10;
        c=c+b;
    }
    cout<<c;
}
