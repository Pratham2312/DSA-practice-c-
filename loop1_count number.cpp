
#include <iostream>
using namespace std;
int main() {
    int a;
    cout<<"enter num: ";
    cin>>a;
    int flag=0;
    int c;
    while(a>0){
        a=a/10;
        flag++;
    }
    cout<<"Total digits are "<<flag;
}
