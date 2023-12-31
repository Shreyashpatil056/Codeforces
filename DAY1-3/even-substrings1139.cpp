#include<iostream>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    int even = 0 ;

    for(int i = n - 1 ; i >= 0 ; i--){
        if(s[i]%2 == 0){
            even += i+1;
        }
    }
    cout<<even;
}

int main(){
    // int n;
    // cin>>n;
    // while (n--)
    // {
        solve();
    // }
}