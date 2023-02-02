#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
ll arr[15];
bool check(ll mid) {
	ll t=n,sum=0;
	while(t) {
		sum+=min(t,mid);
		t-=min(t,mid);
		t-=t/10;
	};
	return sum*2>=n;
}
void solve(int i) {
	cin>>n;
	ll l=1,r=n,ans;
	while(l<=r) {
		ll mid=l+r>>1;
		if(check(mid))ans=mid,r=mid-1;
		else l=mid+1;
	};
	arr[i]=ans;
}
int main() {
	int t;
	cin>>t;
	int tmp=t,i=1;
	while(tmp--) {
		solve(i);
		i++;
	};
	for(int i=1;i<=t;i++)cout<<arr[i]<<endl;
	return 0;
}
