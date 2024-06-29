// to check array or vector is sorted or not.cpp
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v(6);
    
    for(int i =0;i<6;i++){
        cout<<"enter "<<endl;
        cin>>v[i];
    }
    
    int sort=true;
    
    for(int j=0;j<6;j++){
        if(v[j]>v[j+1]){
            sort=false;
        }
    }
    
    if(sort==true){
        cout<<"sorted"<<endl;
    }
    else{
        cout<<"nope"<<endl;
    }

    return 0;
}
