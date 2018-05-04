// 27/09/14 11:41

// Program for the problem A WORD on CODEFORCES

#include<stdio.h>
#include<string.h>

#define MAX 101

int main(){
	char input[MAX];
	int lcase=0,ucase=0,len=0,i=0;
	scanf("%[^\n]s",&input);
	len = strlen(input);
	for(i=0;i<len;++i){
		if(input[i]>=97 && input[i]<=122){
			lcase++;
		}
		else{
			ucase++;
		}
	}
	if(lcase == ucase){
		for(i=0;i<len;++i){
			if(input[i]>=65 && input[i]<=90){
				input[i] += 32;
			}	
		}
	}
	else if(lcase>ucase){
		for(i=0;i<len;++i){
			if(input[i]>=65 && input[i]<=90){
				input[i] += 32;
			}	
		}
	}
	else{
		for(i=0;i<len;++i){
			if(input[i]>=97 && input[i]<=122){
				input[i] -= 32;
			}	
		}
	}
	printf("%s",input);
	return 0;
}