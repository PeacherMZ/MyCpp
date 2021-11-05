#include<bits/stdc++.h>
using namespace std;
bool minorflag=false;
int qz[200],X,Y,len,o=0;
unsigned long long Dec=0;
char sy[20]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'},num[1000],ans[1000];
int fget();
int mypow(int x,int n);
int init();
int main(){
	//Main: X -> DEC -> Y
	if(init()){
		cerr<<"An Error Occurred."<<endl;
		return 0;
	}
	//X -> DEC
	for(int i=len;i>=0;i--)Dec+=qz[(int)num[i]]*mypow(X,o++);

	//Dec -> Y
	o=0;
	while(Dec>0){
		ans[++o]=sy[Dec%Y];
		Dec/=Y;
	}
	
	//Output
	if(minorflag==true)printf("-");
	for(int i=o;i>=1;i--)printf("%c",ans[i]);
	return 0;
}
int fget(){
	int v=0;char ch;bool f=false;
	while(!isdigit(ch=getchar()))if(ch=='-')break;
	if(ch=='-')f=true;else v=ch-'0';
	while(isdigit(ch=getchar()))v=v*10+ch-'0';
	return f?-v:v;
}
int mypow(int x,int n){
	int res=1;
	for(int i=1;i<=n;i++)res*=x;
	return res;
}
int init(){
	qz['0']=0;qz['1']=1;qz['2']=2;qz['3']=3;qz['4']=4;qz['5']=5;qz['6']=6;qz['7']=7;qz['8']=8;qz['9']=9;
	qz['A']=10;qz['B']=11;qz['C']=12;qz['D']=13;qz['E']=14;qz['F']=15;
	qz['a']=10;qz['b']=11;qz['c']=12;qz['d']=13;qz['e']=14;qz['f']=15;
	printf("将X进制转换为Y进制(2 <= X,Y <= 16)\nX:");
	X=fget();
	if(X<2||X>16){
		printf("X = %d 不合法！\n",X);
		return 1;
	}
	printf("Y:");
	Y=fget();
	if(Y<2||Y>16){
		printf("Y = %d 不合法！\n",Y);
		return 1;
	}
	printf("Number:");
	cin.getline(num,1000);
	len=strlen(num)-1;
	if(num[0]=='-'){
		minorflag=true;
		for(int i=0;i<=len;i++)num[i]=num[i+1];
		len--;
	}
	for(int i=0;i<=len;i++){
		if((num[i]>='A'&&num[i]<='F')||(num[i]>='a'&&num[i]<='f')||(num[i]>='0'&&num[i]<='9'))continue;
		else{
			cerr<<"非法输入！"<<endl; 
			return 1;
		}
	}
	return 0;
}
