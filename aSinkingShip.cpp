// 24/11/14 18:42

// Program to solve the problem SinkingShip on CODEFORCES

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 101

int main(){
	int n,i,j,k;
    scanf("%d",&n);
    int *arr;
    arr = (int*)calloc(n,sizeof(int));
    char str[n][20];
    for(i=0;i<n;++i){
    	scanf(" %[^\t\n]s",str[i]);
    }
	/*for(i=0;i<n;++i){
		printf("%s\n",str[i]);
	}*/
	for(i=0;i<n;++i){
		j=0;
		while(str[i][j]!=' '){
			j++;
		}
		if(str[i][j+1] == 'r'){
			arr[i] = 0;
		}
		else if(str[i][j+1] == 'w' || str[i][j+1] == 'c' && str[i][j+2] == 'h'){
			arr[i] = 1;
		}
		else if(str[i][j+1] == 'm'){
			arr[i] = 2;
		}
		else if(str[i][j+1] == 'c'){
			arr[i] = 3;
		}
	}
	for(i=0;i<=3;++i){
		for(k=0;k<n;++k){
			if(arr[k] == i){
				j=0;
				while(str[k][j]!=' '){
					printf("%c",str[k][j]);
					j++;
				}
				printf("\n");	
			}
		}
	}
	/*for(i=0;i<n;++i){
		printf("%d ",arr[i]);
	}*/
	return 0;
}