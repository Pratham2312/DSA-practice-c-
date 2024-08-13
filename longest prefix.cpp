// longest prefix

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

string pre(vector<string> s,int n){
    sort(s.begin(),s.end());
    
    string i=s[0];
    string j=s[n-1];
    int k=0;
    int l=0;
    
    string ans="";
    while(l<i.size() && k<j.size()){
        if(i[l]==j[k]){
            ans=ans+i[l];
          
        }
        else{
            break;
        }
        l++;
        k++;
    }
    return ans;
}

int main(){
    vector<string> s;
    s.push_back("anti");
    s.push_back("antihem");
    s.push_back("anti");
    int n=s.size();
    cout<<pre(s,n);
}
