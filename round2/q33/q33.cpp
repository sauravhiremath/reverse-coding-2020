#include<bits/stdc++.h>
using namespace std;

int main(){

    int T;
    cin>>T;
    while(T--){
        int n;
        string s;
        cin>>s;
        cin>>n;
        for(int i=0;i<s.size();i++){
            cout<<s[i]+1+(i%n)<<" ";
        }
        cout<<endl;
    }

}