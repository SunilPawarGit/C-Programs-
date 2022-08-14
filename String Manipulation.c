#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(void)
{
    char str1[]= "India is my country.";
    char str2[]= "All indians are my brothers and sisters.";
    char str3[150];
    int i=0,j=0;
    while(str1[j] != '\0'){
        str3[i]= str1[j];
        i++;
        j++;
    }
    j=0;
    while(str2[j] != '\0'){
        str3[i]=str2[j];
        j++;
        i++;
    }
    printf("%s",str3);
    return(0);
}
