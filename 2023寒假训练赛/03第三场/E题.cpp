#include<bits/stdc++.h>
using namespace std;
struct node {
	int x,y,h;
	friend bool operator<(node a,node b) {
		if(a.x>b.x)return false;
		else if(a.x<b.x)return true;
		else {
			if(a.y>b.y)return false;
			else if(a.y<b.y)return true;
			else{
			if(a.h>b.h)return true;
			else return false;
			}
		}
	}

};
priority_queue <node>q;
queue<int>q2;
int main(){
	int m;
	cin>>m;
	int i=1;
	while(m--){
		int op,a,b;
		cin>>op;
		if(op==1){
			cin>>a>>b;
			node now;
			now.x=a,now.y=b,now.h=i;
			q.push(now);
			i++;
		}
		else if(op==2){
			node now=q.top();
			q2.push(now.h);
			q.pop(); 
		}
	};
	while(!q2.empty()){
		cout<<q2.front()<<endl;
		q2.pop();
	}
	return 0;
}
