// 02/11/14 21:55

// Program to solve the problem Haiku on CODEFORCES

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	int len[3],sylcount[3]={0},i,j;
	char str[3][102];
	for(i=0;i<3;++i){
		scanf(" %[^\n]s",&str[i]);
		len[i] = strlen(str[i]);
		//printf("%d\n",len[i]);
		if(i == 0 && len[i]<5){
			printf("NO");
			exit(0);
		} 
		if(i == 1 && len[i]<7){
			printf("NO");
			exit(0);
		}
		if(i == 2 && len[i]<5){
			printf("NO");
			exit(0);
		}
	}
	for(i=0;i<3;++i){
		for(j=0;j<len[i];++j){
			if(str[i][j]=='a'||str[i][j]=='e'||str[i][j]=='i'||str[i][j]=='o'||str[i][j]=='u'){
				sylcount[i]++;
				if(i==0 && sylcount[i]>5){
					printf("NO");
					exit(0);
				}
				if(i==1 && sylcount[i]>7){
					printf("NO");
					exit(0);
				}
				if(i==2 && sylcount[i]>5){
					printf("NO");
					exit(0);
				}
			}
		}
	}
	/*printf("\n");
	for(i=0;i<3;++i){
		printf("%d\n",sylcount[i]);
	}*/
	if(sylcount[0] == 5 && sylcount[1] == 7 && sylcount[2] == 5){
		printf("YES");
	}
	else{
		printf("NO");
	}
	return 0;
}