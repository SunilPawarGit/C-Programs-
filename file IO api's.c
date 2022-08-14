#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    FILE *ptr;
    char BUFFER[100]="\0",str[100]="\0",str1[100]="\0",str2[]=" VSI,", str3[]=", Maharashtra";
    int i=0,j=0;
    int last=0;
    ptr = fopen("input.txt","r");
    if(ptr == NULL)
    {
        printf("Can't open file.");
        return;
    }
    fgets(BUFFER,100,ptr);
    while(BUFFER[i] != '\0')
    {
        if(BUFFER[i-1] =='o' && BUFFER[i-2] == 't')
        {
            last=1;
        }else{
            str[i]=BUFFER[i];
        }
        if(last){
            str1[j]=BUFFER[i];
            j++;
        }
        i++;
    }
    printf("%s \n",BUFFER);
    printf("%s \n",str);
    printf("%s  \n",str1);
    fclose(ptr);


    ptr=fopen("output.txt","w");
    fputs(str,ptr);
    fputs(str2,ptr);
    fputs(str1,ptr);
    fclose(ptr);

    ptr=fopen("output.txt","r");
    fgets(BUFFER,100,ptr);
    printf("%s \n",BUFFER);
    fclose(ptr);



    return 0;
}
