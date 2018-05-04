// 28/11/14 22:11

// Program to solve the problem help Far Away Kingdom on CODEFORCES

#include<stdio.h>
#include<string.h>

#define MAX 1001

int main(){
	char num[MAX];
	int i,len=0,j=0;
	scanf(" %[^\n]s",num);
	len = strlen(num);
	for(i=0;i<len;i++){
		if(num[i] == '.'){
			if(num[i-1] != '9' && num[i+1]<'5'){
				j = 0;
				while(j<i){
					printf("%c",num[j]);j++;
				}
			}
			if(num[i-1] != '9' && num[i+1] >= '5'){
				j=0;
				while(j<i-1){
					printf("%c",num[j]);j++;
				}
				printf("%c",num[i-1]+1);
			}
			if(num[i-1] == '9'){
				printf("GOTO Vasilisa.");
			}
		}
	}
	return 0;
}