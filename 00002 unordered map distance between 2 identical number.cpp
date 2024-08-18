#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int diti(int arr[]){
    unordered_map <int,int> mp;
    int maxu=0;
    for(int i=0;i<5;i++){
        if(mp.find(arr[i])==mp.end()){
            mp[arr[i]]=i;
        }
        else{
            int nm=i-mp[arr[i]];
            if(nm>maxu){
                maxu=nm;
            }
        }
        
    }
    return maxu;
}
int main(){
    int arr[5]={1,4,5,8,1};
    cout<<diti(arr);
}
