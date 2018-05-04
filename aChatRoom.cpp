// 28/11/14 21:56

// Program to solve the problem ChatRoom on CODEFORCES

#include<stdio.h>
#include<string.h>

#define MAX 101

int main(){
	int i,len=0,ind=0,gotAll=0;
	char str[MAX],arr[]={'h','e','l','l','o'};
	scanf(" %[^\n]s",str);
	len = strlen(str);
	for(i=0;i<len;++i){
		if(str[i] == arr[ind]){
			ind++;
		}
		if(ind == 5){
			break;
		}
	}
	if(ind == 5){
		printf("YES");
	}
	else{
		printf("NO");
	}
	return 0;
}