#include<iostream>
using namespace std;

void solve(){
    string s;
    cin>>s;

    int n = s.size();
    if(n <= 10){
        cout<<s;
    }else{
        cout<<s[0];
        cout<<n-2;
        cout<<s[n-1];
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    while (n--)
    {
        solve();
    }
}