// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int a=5495;
    int rev=0;
    while(a>0){
        int b=a%10;
        a=a/10;
        rev=rev*10+b;
        
    }
    cout<<rev;
}
