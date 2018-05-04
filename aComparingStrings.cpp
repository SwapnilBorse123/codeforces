//31/10/14 00:21

// Program to solve the problem Comparing Strings on CODEFORCES

#include<string.h>
#include<stdio.h>
#include<stdlib.h>

#define MAX 100001

int main(){
	char stra[MAX],strb[MAX];
	int i,lena,lenb,j,arr[26]={0},mismatch=0,allzero=1;
	scanf(" %[^\n]s",&stra);
	scanf(" %[^\n]s",&strb);
	lena = strlen(stra);
	lenb = strlen(strb);
	if(lena!=lenb) printf("NO");
	else{
		for(i=0;i<lena;++i){
			arr[stra[i]-'a']++;
		}
		for(i=0;i<lena;++i){
			arr[strb[i]-'a']--;
		}
		for(i=0;i<26;++i){
			if(arr[i]!=0){
				allzero = 0;
				break;
			}
		}
		if(allzero){
			for(i=0;i<lena;++i){
				if(stra[i]!=strb[i]){
					mismatch++;
					if(mismatch>2){
						break;
					}
				}
			}
			if(mismatch == 2){
				printf("YES");
			}
			else{
				printf("NO");
			}	
		}
		else{
			printf("NO");
		}
	}
	return 0;
}