// to find the total number of pairs whose sum is equal to x

#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v(5);
    for(int i =0;i<5;i++){
        cout<<"enter ";
        cin>>v[i];
    }
    int num;
    int tot=0;
    cout<<"enter the number ";
    cin>>num;
    
    for(int j=0;j<size(v);j++){
        for(int k=j+1;k<5;k++){
             if(v[j]+v[k]==num){
                 tot=tot+1;
             }
        }
       
    }
    cout<<tot<<endl;
}
