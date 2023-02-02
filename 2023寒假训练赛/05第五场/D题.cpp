//模拟栈
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int a[N],stk[N],ans[N],tt=0;
int main() {
	int n;
	cin>>n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (!tt || a[i] <= a[stk[tt]]) {
			ans[i] = -1;
			stk[++tt] = i;
		} 
		else {
			int l=1,r=tt;//二分查找
			while(l<r) {
				int mid=(l+r)>>1;
				if(a[stk[mid]]<a[i])r=mid;
				else l=mid+1;
			};
			ans[i]=i-stk[l]-1;
		}
	}
	for(int i=1; i<=n; i++) {
		cout<<ans[i];
		if(i!=n)cout<<" ";
	}
	return 0;
}


