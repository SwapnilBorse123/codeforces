// 02/03/15 21:54

// Codeforces Amusing Joke

#include<bits/stdc++.h>
using namespace std;

#define MAX 102

int main(){
	int arr[26]={0};
	char str[MAX];
	int len,i=0,allzero=1;
	for(i=0;i<2;++i){
		scanf(" %[^\n]s",str);
		len = strlen(str);
		for(int j=0;j<len;++j){
			arr[str[j]-'A']++;
		}
	}
	scanf(" %[^\n]s",str);
	len = strlen(str);
	for(i=0;i<len;++i){
		arr[str[i]-'A']--;
	}
	for(i=0;i<26;++i){
		if(arr[i]!=0){
			allzero = 0;
			break;
		}
	}
	if(allzero){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	return 0;
}