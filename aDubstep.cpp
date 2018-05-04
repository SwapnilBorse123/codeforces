// 27/09/14 20:18 

// Program to solve the problem of DUBSTEP on CODEFORCES

#include<stdio.h>
#include<string.h>

#define MAX 201

int main(){
    char str[MAX];
    int arr[MAX]={0},i;
    scanf(" %[^\n]",&str);
    int len = strlen(str);
    for(i=1;i<len-1;++i){
        if(str[i] == 'U' && str[i-1]=='W' && str[i+1]=='B'){
            arr[i] = 1;
            arr[i-1] = 1;
            arr[i+1] = 1;
        }
    }
    for(i=0;i<len;++i){
        if(arr[i] == 0){
            while(arr[i] == 0 && i <= len-1){
                printf("%c",str[i]);
                i++;
            }
            printf(" ");    
        }
    }
    return 0;
}