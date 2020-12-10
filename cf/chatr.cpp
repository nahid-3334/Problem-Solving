#include<stdio.h>
#include<string.h>

main(){
    int m,i,a=0;
    char s[100];
    gets(s);
    m=strlen(s);
    for(i=0;i<m;i++)
    {        if(s[i]=='h'&&a==0)
                a=1;
                else if(a==1&&s[i]=='e')
                a=2;
                 else if(a==2&&s[i]=='l')
                 a=3;
                     else if(a==3&&s[i]=='l')
                     a=4;
                      else if(a==4&&s[i]=='o')
                      a=5;
    }if(a==5)
    printf("YES");
    else
    printf("NO");
}
