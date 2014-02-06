#include<stdio.h>

int main(){
	int l,w,i,j,p,q;
	int map[1000][1000];
	int m,n;
	long int v=0,max=0;
	
	scanf("%d%d",&l,&w);
	for(i=0;i<=l-1;i++)
		for(j=0;j<=w-1;j++)
			scanf("%d",&map[i][j]);
	scanf("%d%d",&m,&n);
	
	for(j=0;j<=w-n;j++){
		for(p=0;p<=m-1;p++)
				for(q=j;q<=j+n-1;q++)
					v+=map[p][q];//get the first matrix, i=0
		if(v>max)
				max=v;
					
		for(i=1;i<=l-m;i++){
				for(q=j;q<=j+n-1;q++)
					v-=map[i-1][q];
				for(q=j;q<=j+n-1;q++)
					v+=map[i+m-1][q];//matrix update
				if(v>max)
					max=v;
				}
			
		v=0;
		}
	
	printf("%ld",max);
	
	return 0;
	}

