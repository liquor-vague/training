#include<bits/stdc++.h>
using namespace std;
int a[105],b[105],mark[1005];
int main(){
	int t,n;
	cin>>t;
	int tmp=t;
	while(tmp--){
		int flag=1;
		cin>>n;
		for(int i=1;i<=n;i++)cin>>a[i]>>b[i];
		for(int i=n;i>0;i--){
			for(int j=1;j<i;j++){
				if(a[i]==a[j]){
					if(b[i]!=b[j]){
						flag=0;
						break;
					}
				}
			};
			if(flag==0)break;
		};
		if(flag==1)mark[tmp]=1;
	};
	for(int i=t-1;i>=0;i--){
		if(mark[i]==0)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
} 
