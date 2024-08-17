#include<iostream>
using namespace std;
int main(){
    int num=3000;
    if(num %4==0 && num %100!=0 ||num %400==0){
        cout<<"leap";
    }else{
        cout<<"not keap";
    }
}
