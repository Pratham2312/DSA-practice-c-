// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int>v(6);
    for(int i=0;i<6;i++){
        cin>>v[i];
    }
    
    
//   int a[5]={4,2,5,4,6,6};
   int num=0;
   int f=4;
  for(int i=0;i<=6;i++){
      if(v[i]==f){
          num=num+1;
      }
  }
  cout<<num;
}
