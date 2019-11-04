#include<bits/stdc++.h>
using namespace std;
int n,a[1000005],f[1000005][2];
int main(){
	scanf("%d",&n);
	f[1][0]=f[1][1]=1;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		for(int j=1;j<=i-1;j++){
			if(a[i]>a[j])f[i][0]=max(f[i][0],f[j][1]+1);
			if(a[i]<a[j])f[i][1]=max(f[i][1],f[j][0]+1);
		}
	}
	cout<<max(f[n][0],f[n][1])<<endl;
	return 0;
}
