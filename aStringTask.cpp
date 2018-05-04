// 23/11/14 20:15

// Solution to the problem String Task on CODEFORCES

#include<stdio.h>
#include<string.h>

#define MAX 101

int main(){
	int len,i,arr[MAX] = {0};
	char str[MAX];
	gets(str);
	len = strlen(str);
	for(i=0;i<len;++i){
		if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U'||str[i]=='y'||str[i]=='Y'){
		}
		else if(str[i]>=65 && str[i]<=90){
			printf(".%c",str[i]+32);
		}
		else{
			printf(".%c",str[i]);
		}
	}
	
	return 0;
}