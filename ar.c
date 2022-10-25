#include <stdio.h>
int main(){
	int ar[10][10];
	int i,j;
	char temp;
	for(int i=0;i<10;i++){
		        for(int j=0;j<10;j++){
				                ar[i][j]=69;
						        }
	}

	for(i=1;i<9;i++)
	{
		for(j=1;j<9;j++)
		{
			        scanf("%c",&temp);
				        ar[i][j]=temp;


		}
	}
	for(int i=1;i<9;i++){
		        for(int j=1;j<9;j++){
				        printf("%c ",ar[i][j]);
					        }
			        printf("\n");

	}
	//printf("%c ",temp);
	}
