# include<stdio.h>
#include<string.h>
#include<stdlib.h>
int compare(const void * a, const void * b)
{
    return ((char)a -(char)b);
}
int main()
{
    char x[150];
    int i, len;
    scanf("%s", x);
    len = strlen(x);
    qsort(x, len, sizeof(char), compare);
    //printf("%s\n", x);
    int count = 0;
    for(i=0; i<strlen(x); i++){
        for(int j=i+1; j<len; j++){
            if(x[i] != x[j]){
                count++;
            }
        }
    }
    if(count%2 == 1){
        printf("IGNORE HIM!\n");
    }
    if(count%2 == 0){
        printf("CHAT WITH HER!\n");
    }
    return 0;
}
