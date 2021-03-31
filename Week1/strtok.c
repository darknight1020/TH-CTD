#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char str[80] = "Hoc C-co ban va nang cao-tai VietJack";
    const char s[2] = "-";
    char *token;
    /* Lay token dau tine */
    token = strtok(str,s);

    /*Duyet qua cac token con lai*/
    while(token != NULL){
        printf("%s\n",token);
        token = strtok(NULL,s);
    }
    return 0;
}