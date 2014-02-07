#include<stdio.h>

int main(){
	long int m,t,i,k=1,sum=0;
	char buf,trash;
	int u,f,d;
	scanf("%ld%ld%d%d%d",&m,&t,&u,&f,&d);
	u+=d;
	f+=f;
	for(i=1;i<=2*t;i++){
		scanf("%c",&buf);
		switch(buf){
			case 'u': sum+=u;break;
			case 'd': sum+=u;break;
			case 'f': sum+=f;break;
			case 10 : break;
		}
		if(buf==10)
			continue;
		
		if(sum>m)
			break;
		k++;
	}
	
	k--;
	printf("%ld",k);	

	return 0;
}
