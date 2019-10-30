#include<bits/stdc++.h>
using namespace std;
int n,R[1005];
double ans,t,dp[1005];//dp[i]：第1到i个圆柱的占用长度
int main(){
    scanf("%d",&n);
    if(n==1){
        int qwerasd;
        scanf("%d",&qwerasd);
        ans=qwerasd*2.0;
        printf("%.3lf\n",ans);
        return 0;
    }
    for(int i=1;i<=n;i++)scanf("%d",&R[i]);
    for(int i=1;i<=n;i++)dp[i]=R[i]*2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            double power1=(R[i]+R[j]),power2=(R[i]-R[j]);//勾股
            double cache=dp[j]+(R[i]-R[j])+sqrt(R[i]*R[j])*2;
            if(dp[i]<cache)dp[i]=cache;
        }
    }
    printf("%.3lf\n",dp[n]);
    return 0;
}
