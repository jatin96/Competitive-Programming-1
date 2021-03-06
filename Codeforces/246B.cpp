#include <bits/stdc++.h>
using namespace std;
/*
Submitted by : Parth Trehan(markus__)
*/
//--------------------------
#define sd(x) scanf("%d",&x)
#define sll(x) scanf("%lld",&x)
#define ms(array,value) memset(array,value,sizeof(array))
#define iterate(it, s) for(auto it=s.begin(); it!=s.end(); it++)
#define bcnt __builtin_popcount
#define pb(x) push_back(x)
#define sc scanf
#define pf printf
#define vi vector<int>
#define F first
#define S second
#define line printf("\n")
//--------------------------
#define llu long long int unsigned
#define ll long long
#define lli long long int
//--------------------------
#define PI 3.14159265358979323846
#define mod 1000000007
//--------------------------
ll gcd(ll i, ll j){ll temp;if(i<j){temp=i;i=j;j=temp;}while(i%j!=0){
                   temp=i;i=j;j=temp%j;}return j;}
ll lcm(ll i, ll j){ll ans=(i*j);ans/=gcd(i, j);return ans;}
ll modpow(ll n, ll p){ll ans=1;while(p>0){if(p&1)ans=(ans*n)%mod;
                   n=(n*n)%mod;p=p/2;}return ans;}
//--------------------------

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int n;
	ll sum = 0;
	vi arr;
	cin>>n;
	for(int i=0;i<n;i++){

		int x;cin>>x;arr.pb(x);
		sum+=x;
	}
	lli x = sum/n;
	sort(arr.begin(),arr.end());
	int p = 0,q = n-1;
	while(p<q){

		int w = x - arr[p];
		int g = arr[q] - x;
		arr[p] += min(w,g);
		arr[q] -= min(w,g);
		if(min(w,g) == w)
			p++;
		if(min(w,g) == g)
			q--;
	}
	int count =0;
	for(int i=0;i<n;i++)
		if(arr[i] == x)
			count++;
	cout<<count;
	return 0;
}
