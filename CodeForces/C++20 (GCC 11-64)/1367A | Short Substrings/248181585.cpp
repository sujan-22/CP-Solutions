#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string result="";
        result+=s[0];
        for(int i=1; i<s.length()-2;++i){
            if(s[i]==s[i+1]) {
                result += s[i];
                ++i;
            }
        } result += s[s.length()-1];
        cout<<result<<'\n';
    }
    return 0;
}