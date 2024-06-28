// Count and print the number scrictly greater than x in vector

#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v(6);
    for(int i=0;i<v.size();i++){
        cout<<"enter ";
        cin>>v[i];
    }
    int num=3;
    for(int j=0;j<v.size();j++){
        if(v[j]>num){
            cout<<"the number is "<<v[j];
            cout<<"present at "<<j<<endl;
        }
        else{
            cout<<"not present";
        }
    }
}
