#include<iostream>
#include<bits/stdc++.h>

using namespace std;

string isit(int arr1[],int arr2[]){
    unordered_map<int,int> mp;
    for(int i=0;i<5;i++){
        mp[arr1[i]]=i;
    }
    for(int i=0;i<3;i++){
        if(mp.find(arr2[i])==mp.end()){
            return "pal ithun";
        }
        
    }
    return "ok";
    
}
int main(){
    int arr1[5]={2,6,4,8,9};
    int arr2[3]={2,9,5};
    cout<<isit(arr1,arr2);
}
