#include<iostream>
#include<vector>
using namespace std;

string longi(string str){
    vector<string> one;
    string re="hh";
    string word="";
    for(char s: str){
        if(s==' '){
            one.push_back(word);
            word="";
        }
        else{
            word=word+s;
        }
    }
    one.push_back(word);
    int index;
    int lengt=0;
    for(int i=0;i<4;i++){
        int l=one[i].length();
        if(l>lengt){
            index=i;
            lengt=l;
        }
    }
    return one[index];
}
int main(){
    string str="hello how are you";
    cout<<longi(str);
}
