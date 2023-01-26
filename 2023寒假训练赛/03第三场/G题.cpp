#include<bits/stdc++.h>
using namespace std;
int a[10005],mark[10005],ans[1000005];
int main() {
	int n,m;
	cin>>n>>m;

	while(m--) {
		int flag,l,r;
		cin>>flag>>l>>r;
		if(flag==1) {
			for(int i=l; i<=r; i++)a[i]=1;
		} else if(flag==0) {
			for(int i=l; i<=r; i++)if(a[i]!=1)a[i]=2;
		}
	};
	int num=0;
	for(int i=1; i<=n; i++) {
		if(a[i]==2)num++;
		mark[i]=num;
		}
	int q;
	cin>>q;
	int tmp=q,k=1;

	while(tmp--) {
		int l,r;
		cin>>l>>r;
		int time=r-l-(mark[r]-mark[l]);
		if(a[l]!=2)time++;
		ans[k]=time;
		k++;
	};


	for(int j=1; j<=q; j++)cout<<ans[j]<<endl;
	return 0;
}
