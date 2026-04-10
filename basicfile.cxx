#include<stdio.h>
#include<conio.h>
#include<string.h>
void main() 
{
    char file[50];
    printf("Enter file name:");
    scanf("%s", file);
    if(strstr(file, ".txt") != NULL) 
    {
        printf("Document file");
    }
    else if(strstr(file,".jpg")!=NULL) 
    {
        printf("Image file");
    }
    else 
    {
        printf("Other type file");
    }
    getch();
}