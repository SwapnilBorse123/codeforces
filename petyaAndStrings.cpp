// 27/09/14 11:57

// Program for problem PETYA AND STRINGS on CODEFORCES

#include<stdio.h>
#include<string.h>

#define MAX 102

int main(){
    char str1[MAX],str2[MAX];
    int len,i,match=0,temp=0;
    scanf(" %[^\n]s",&str1);
    scanf(" %[^\n]s",&str2);
    len = strlen(str1);
    for(i=0;i<len;++i){
        if(str1[i]>=65 && str1[i]<=90){
            str1[i] += 32;
        }
        if(str2[i]>=65 && str2[i]<=90){
            str2[i] += 32;
        }
        if(str1[i]>str2[i]){
            printf("1");
            break;
        }
        else if(str2[i]>str1[i]){
            printf("-1");
            break;
        }
        match++;
    }
    if(match == len){
        printf("0");
    }
    return 0;
}