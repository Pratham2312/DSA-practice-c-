accenture 01 rev string .cpp
#include <iostream>

using namespace std;

int main() {
   string s="hello";
   cout<<s<<endl;
   
   
   string rev;
   for(int i=0;i<s.length();i++){
       rev=s[i]+rev;
   }
   cout<<rev;
}
