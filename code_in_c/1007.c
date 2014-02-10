#include<stdio.h>
#include<string.h>


void swap(char arr[401], int x, int y){
	char buf;
	buf=arr[x];
	arr[x]=arr[y];
	arr[y]=buf;
}
	
	

int main(){
	char a[402],b[402];
	int c[402];	//c[200] is invalid 
	int i;
	int a_dot,b_dot;
	int tmp;
	char buf;
	int s,t;
	
	for(i=0;i<=400;i++)
		a[i]=b[i]='0';
	
	scanf("%s",a);
	a[strlen(a)]='0';
	scanf("%s",b);
	b[strlen(b)]='0';
	
	a[401]=b[401]=c[402]='\0';
	
	for(i=0;i<=200;i++)
		if(a[i]=='.')
			a_dot=i;
	
	for(i=0;i<=200;i++)
		if(b[i]=='.')
			b_dot=i;
		
		
	for(i=200;i>=0;i--)
		swap(a,i,i+200-a_dot);
		
	for(i=200;i>=0;i--)
		swap(b,i,i+200-b_dot);
	
		
	for(i=0;i<=199;i++)
		swap(a,i,400-i);
	//Reversing a
	
	for(i=0;i<=199;i++)
		swap(b,i,400-i);
		
	//Reversing b
	
	//After These Operations, we get formatted a and b, which has a dot at a[200] or b[200] and in a reversed direction, supposing all invalid position is taken by non '0'
	c[200]=0;
	
	tmp=0;
	for(i=0;i<=400;i++){
		if(i==200)continue;
		c[i]=(a[i]-'0'+b[i]-'0'+tmp)%10;
		tmp=(a[i]-'0'+b[i]-'0'+tmp)/10;
		}
	c[401]=tmp;
		
	//Calculate

	
	
	for(i=0;i<=401;i++){
		if(i==200){
			t=201;
			break;
			}
		if(c[i]!=0){
			t=i;
			break;
			}
	}
	

	for(i=401;i>=0;i--){
		if(i==200){
			s=199;
			break;
			}
		if(c[i]!=0){
			s=i;
			break;
			}
	}
	
	
	//Processing
	for(i=s;i>=t;i--){
		if(i==200)
			printf(".");
		else
			printf("%d",c[i]);
		}
	
	return 0;
	
}

