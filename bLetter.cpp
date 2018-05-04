// 29/11/14 15:05

// Program to solve the problem Letter on CODEFORCES

#include<stdio.h>
#include<string.h>

#define MAX 201

int main(){
	
	int i,lenh=0,lent=0,hash[52]={0},allSet=1;
	char head[MAX],text[MAX];
	scanf(" %[^\n]s",head);
	scanf(" %[^\n]s",text);
	lenh = strlen(head);
	lent = strlen(text);
	
	for(i=0;i<lenh;++i){
		if(head[i]!=' '){
			if(head[i]>=97 && head[i]<=122){ // for small letters
				hash[(head[i]-'a')+26]++;
			}
			else{ // for capital letters
				hash[head[i]-'A']++;
			}	
		}
	}
	
	for(i=0;i<lent;++i){
		if(text[i]!=' '){
			if(text[i]>=97 && text[i]<=122){  // for small letters
				hash[(text[i]-'a')+26]--;
			}
			else{  // for capital letters				
				hash[text[i]-'A']--;
			}
		}
	}
	
	for(i=0;i<52;++i){
		if(hash[i]<0){
			allSet = 0;
			break;
		}
	}
	if(allSet){
		printf("YES");
	}
	else{
		printf("NO");
	}
	return 0;
}