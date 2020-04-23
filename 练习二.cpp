#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
bool cmp(int x,int y){
	return x>y;
}
int main()
{
	char a[8],b[8],c[8]="\0",d[8]="\0",max[8];
	int m,n,count,i,len;
		scanf("%s",a);
		len=strlen(a);
		for(i=0;i<4-len;i++)
			d[i]='0';
			strcat(d,a);
			strcpy(a,d);
			d[0]='\0';
	while(count!=6174){
		sort(a,a+4,cmp);
		sscanf(a,"%d",&m);
		strcpy(max,a);
		sort(a,a+4);
		sscanf(a,"%d",&n);
		count=m-n;
		sprintf(b,"%d",count);
		len=strlen(b);
		for(i=0;i<4-len;i++)
			c[i]='0';
			strcat(c,b);
			strcpy(b,c);
			c[0]='\0';
		if(count==0)
		{
			printf("%s - %s = 0000",max,a);
			break;
		}
		printf("%s - %s = %s\n",max,a,b);
		strcpy(a,b);
	}
	return 0;
 } 
