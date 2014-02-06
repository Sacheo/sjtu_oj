#include<stdio.h>
int main(){
	int h1,h2,h;
	int n,m=0;
	
	scanf("%d%d%d",&h1,&h2,&n);
	h1+=h2;
	for(h2=1;h2<=n;h2++){
		scanf("%d",&h);
		if(h<=h1)
			m++;
	}
	
	printf("%d",m);
	
	return 0;
}
	
