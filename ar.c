#include <stdio.h>
int main(){
int ar[10][10];
for(int i=0;i<9;i++){
	for(int j=0;j<9;j++){
		ar[i][j]=69;
	}
}
for(int i=0;i<9;i++){
	for(int j=0;j<9;j++){
	printf("%d ",ar[i][j]);
	}
	printf("\n");
}
}
