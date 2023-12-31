#include <bits/stdc++.h>
using namespace std;
int main(){
int a,b,c,x,y,z;
cin>>a>>b>>c>>x>>y>>z;
a=a-x;
b=b-y;
c=c-z;
/*if(a>0 && b>0 && c>0){
    a=a/2;
    b=b/2;
    c=c/2;
}*/
if(a>0)a=a/2;
if(b>0)b=b/2;
if(c>0)c=c/2;
if(a+b+c>=0){
    cout<<"YES";
}
else
    cout<<"NO";

return 0;
}
 	   	 	 	   		      	 		   		