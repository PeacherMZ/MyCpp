#include<bits/stdc++.h>
using namespace std;
int T,n,a[25],each;
bool f[25],ok=false;
void dfs(int dep,int sum,int edges,int x){
	if(ok)return;
	if(sum==each){
		sum=0;
		x=0;
		edges++;
	}
	if(edges>=3){
		ok=true;
		return;
	}
	for(int i=x;i<=n;i++){
		if(!f[i]&&sum+a[i]<=each){
			f[i]=true;
			dfs(dep+1,sum+a[i],edges,i);
			f[i]=false;
		}
	}
}
int main(){
	scanf("%d",&T);
	while(T--){
		memset(f,false,sizeof(f));
		memset(a,0,sizeof(a));
		scanf("%d",&n);
		int sum=0;
		for(int i=1;i<=n;i++){
			scanf("%d",&a[i]);
			sum+=a[i];
		}
		if(sum%4!=0){
			printf("no\n");
			continue;
		}
		
		else{
			sort(a+1,a+n+1);
			each=sum/4;
			if(a[n]>each){
				printf("no\n");
				continue; 
			}
			ok=false;
			dfs(0,0,0,1);
			if(ok)printf("yes\n");
			else printf("no\n");
		}
	}
	return 0;
}
