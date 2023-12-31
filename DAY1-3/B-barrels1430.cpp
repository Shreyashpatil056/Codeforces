#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n , k;
    cin>>n>>k;
    long long int arr[n];
    long long int max=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr, arr + n);
    int c=k;
    for(int i = n-1 ; i > 0 && k!= 0 ; i--){
        arr[i-1] += arr[i];
        if(arr[i-1]>max){
            max=arr[i-1];   
        }
        k--;
    }

    cout<<max;
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