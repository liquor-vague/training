#include<bits/stdc++.h>
using namespace std;
int w[105][105];
typedef long long LL;
int main() {
	int t;
	cin>>t;
	for(int k=1; k<=t; k++) {
		int n;
		cin>>n;
		for(int i=1; i<=n; i++)w[k][i]=i;
		int sum=0,final=1;
		for(int i=2; i<=n; i++){
			sum+=i;
			if(sum>=n) {
				w[k][0]=i;
				final=i;
				break;
			}
		};
		if(sum-n==1)w[k][2]=1,w[k][final]+=1;
		else if(sum-n>1) w[k][sum-n]=1;//注意sum溢出的情况 
	};
	
	for(int k=1; k<=t; k++) {
		LL ans=1;
		int final=w[k][0];
		for(int i=1; i<=final; i++) {
			if(w[k][i]!=1&&i!=final)cout<<w[k][i]<<" ";
			else if(i==final)cout<<w[k][i]<<"\n";
			ans*=w[k][i];
		};
		cout<<ans;
		if(k!=t)cout<<'\n';
	}
	return 0;
}


