// accenture star pattern 22 july.cpp
// n=7
// *******
//  ******
//   *****
//     ***
//      **
//       *

#include <iostream>
using namespace std;

int main(){
    int n=7;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            if(j<=i){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    
}
