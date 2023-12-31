#include<stdio.h>
#include<math.h> 
#include<iostream>
#include<string.h>
#define ll long long
using namespace std;
int main()
{
	ll n,t;
	scanf("%lld%lld",&n,&t);
	while(t--)
	{
		ll x,y;
		scanf("%d%d",&x,&y);
		ll sum=(x-1)*n+y+1;
		if((x+y)%2!=0)
		{
			sum+=n*n;
		}
		printf("%lld\n",sum/2);
	}
} 