// 27/09/14 12:28

// Program to solve the problem FOOTBALL on CODEFORCES/strings

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char input[13],team1[13],team2[13];
    team1[0]='\0';team2[0]='\0';
    int n,cnt1=0,cnt2=0,once=1,once1=1,temp=0;
    scanf("%d",&n);
    //printf("\n%d",n);
    if(n == 1){
        scanf(" %[^\n]",&input);
        printf("%s",input);
        exit(0);
    }
    while(--n){
        if(once){
            scanf(" %[^\n]",&input);
            strcpy(team1,input);
            once = 0;
            cnt1++;
        }
        scanf(" %[^\n]",&input);
        if(strcmp(input,team1) == 0){
            cnt1++;
        }
        else{
            if(once1){
                strcpy(team2,input);
                cnt2++;
                once1=0;
            }
            else if(strcmp(input,team2) == 0){
                cnt2++;
            }
        }
    }
    //printf("\n%d %d",cnt1,cnt2);
    if(cnt1>cnt2){
        printf("%s",team1);
    }
    else{
        printf("%s",team2);
    }
    return 0;
}