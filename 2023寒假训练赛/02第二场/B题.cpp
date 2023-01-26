#include<iostream>
using namespace std;
int main(){
	int u;
	cin>>u;
	int ans=0,i=0;
	while(1){
		if((i+1)*i/2>=u)break;
		else ans++;
		i++;
	}
	cout<<ans;
	return 0;
} 
