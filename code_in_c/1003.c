#include<stdio.h>

int main(){
	int l,i,j,flag=1,k=0;
	int map[100][100];
	int tmap[100][100];
	scanf("%d",&l);
	for(i=0;i<=l-1;i++)
		for(j=0;j<=l-1;j++){
			scanf("%d",&map[i][j]);
			tmap[i][j]=map[i][j];
			}
	
	while(1){
		flag=1;
		for(i=0;i<=l-1;i++)
			for(j=0;j<=l-1;j++)
			 	if(map[i][j]==0){
			 		flag=0;
			 		if((i>0&&map[i-1][j]==1)||(i<(l-1)&&map[i+1][j]==1)||(j>0&&map[i][j-1]==1)||(j<(l-1)&&map[i][j+1]==1))
			 			tmap[i][j]=1;
			 	}
			 		
			 			
		
		if(flag==1)//no space for germ
			break;
		else	//Update map from tmap
			for(i=0;i<=l-1;i++)
				for(j=0;j<=l-1;j++)
					map[i][j]=tmap[i][j];
		k++;				
	}
	
	printf("%d",k);
	return 0;
}
