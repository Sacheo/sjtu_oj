#include<stdio.h>

int main(){
	long int n,i;
	int max;
	int a[1000000]={0};
	int f[1000000]={0};

	
	scanf("%ld",&n);
	for(i=0;i<=n-1;i++)
		scanf("%d",&a[i]);	
	
	f[0]=a[0];
	for(i=1;i<=n-1;i++){
		if(f[i-1]<0)
			f[i]=a[i];
		else
			f[i]=f[i-1]+a[i];
	}
	
	max=f[0];
	for(i=1;i<=n-1;i++){
		if(f[i]>max&&f[i]!=a[i])
			max=f[i];
	}
	
	if(max>0)
		printf("%d",max);
	else
		printf("Game Over");
			
			
	return 0;
}
