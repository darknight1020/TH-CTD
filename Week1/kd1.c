#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *fptr;
    fptr = fopen("vanban.txt","r");
    char* line = malloc(180*sizeof(char));
    while(!feof(fptr)){
        fgets(line,180,fptr);
        printf("%s",line);
    }
    printf("\n");
}