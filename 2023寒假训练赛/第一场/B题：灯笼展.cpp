#include<cstdio>
#include<algorithm>
using namespace std;
int a[100005],ans[100005],arr[100005];
int main() {
	int n,k;
	scanf("%d%d",&n,&k);
	for(int i=1; i<=n; i++) {
		scanf("%d",&a[i]);
		arr[i]=a[i];
	}
	sort(arr+1,arr+1+k);

	for(int i=1; i<=n; i++) {
		int temp=a[i];

		if(i<=k) {
			ans[i]=-1;
		} else if(a[i]>=arr[k]) {
			ans[i]=arr[k];

		} else if(a[i]<arr[k]) {
			ans[i]=-1;
		};

		if(i>k) {
			int j=k;
			while(temp<=arr[j]) {
				if(temp>=arr[j-1]) {
					arr[j]=temp;
					break;
				} else if(temp<arr[j-1]) {
					arr[j]=arr[j-1];
				}
				j--;
			}
		}
	}

	for(int i=1; i<=n; i++)printf("%d\n",ans[i]);
	return 0;
}
