#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
char str[100005];
long long ans[25];
int main(){
    cin>>str;
    int len=strlen(str);
    ans[0]=1;
    for(int i=0;i<len;i++){
        switch(str[i]){
            case 'e':{
                ans[1]+=ans[0];
                ans[1]%=mod;
                ans[3]+=ans[2];
                ans[3]%=mod;
                ans[7]+=ans[6];
                ans[7]%=mod;
                ans[10]+=ans[9];
                ans[10]%=mod;
                break;
            }
            case 'r':{
                ans[2]+=ans[1];
                ans[2]%=mod;
                ans[5]+=ans[4];
                ans[5]%=mod;
                ans[8]+=ans[7];
                ans[8]%=mod;
                ans[11]+=ans[10];
                ans[11]%=mod;
                break;
            }
            case 'w':{
                ans[4]+=ans[3];
                ans[4]%=mod;
                ans[6]+=ans[5];
                ans[6]%=mod;
                ans[9]+=ans[8];
                ans[9]%=mod;
                break;
            }
        }
    }
    printf("%lld\n",ans[11]);
    return 0;
}
