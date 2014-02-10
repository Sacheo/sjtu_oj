#include<stdio.h>

int main(){
	int k,i,j,m,n,flag=0;
	int map[9][9];
	int bar[10]={0};
	
	scanf("%d",&k);
	
	for(;k>0;k--){
		//Init
		for(i=0;i<=8;i++)
			for(j=0;j<=8;j++)	
				scanf("%d",&map[i][j]);

		flag=0;
		
		//Judge
		for(j=0;j<=9;j++)
				bar[j]=0;

		for(i=0;i<=8;i++){	//Scan by line
			for(j=0;j<=8;j++)
				bar[map[i][j]]=1;
			
			for(j=1;j<=9;j++){
				if(bar[j]!=1){	//Detect
					flag=1;
					break;	//Detection ends
					}
			}
			if(flag==1)
				break;
		}	
			
		if(flag==1){
				//sudoku fails
				printf("Wrong\n");
				continue;
				}
				
			
		for(j=0;j<=9;j++)
				bar[j]=0;
		for(j=0;j<=8;j++){	//Scan by column
			for(i=0;i<=8;i++)
				bar[map[i][j]]=1;
			for(j=1;j<=9;j++){
				if(bar[j]!=1){	//Detect
					flag=1;
					break;	//Detection ends
					}
			}
			if(flag==1)
				break;
		}		
		
		
		if(flag==1){
				//sudoku fails
				printf("Wrong\n");
				continue;
				}
				
		
		for(j=0;j<=9;j++)
				bar[j]=0;
		for(i=0;i<=8;i+=3){	//Scan by block
			for(j=0;j<=8;j+=3){
			
				for(m=i;m<=i+2;m++)
					for(n=j;n<=j+2;n++)
						bar[map[m][n]]=1;
						
				for(j=1;j<=9;j++){
					if(bar[j]!=1){	//Detect
						flag=1;
						break;	//Detection ends
						}
				
				if(flag==1)
					break;	//block fails
				}
			}
			if(flag==1)
				break;	//3 blocks fails
			}
			
		if(flag==1){
				//sudoku fails
			printf("Wrong\n");
			continue;
			}
			

		printf("Right\n");
		}
		
	return 0;
}
