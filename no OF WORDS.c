#include<stdio.h>
#include<string.h>
int main()
{
    char c[100];
    scanf("%[^\n]%*c",c);
    //int l=strlen(c);
    int i=0,count=0;
    while(c[i] != '\0'){
        if(c[i]==' ')
        {
            count++;
        }
        i++;
    }
    printf("%d",count+1);

    return 0;

}
