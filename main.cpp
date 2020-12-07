#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define N 256
char *noprobels(char *a,int n,int *l)
{
    int i,j;
    for(i=0;i<n;i++)
    {
       if(a[i]==' ')
       {
           for(j=i;j<n-1;j++)
           {
               a[j]=a[j+1];
           }
           a[n-1]=' ';
       }
    }
    i=0;
    while(a[i]!=' ' && i<n)
    {
        *l=*l+1;
        i++;
    }
    return a;
}
void palindrom(char *a,int l, int r)
{
    int i;
    char *b;
    if(r>=l)
    {
       if(a[l]==a[r])
       {
           palindrom(a, l+1, r-1);
       }
       else
       {
           printf("not a palindrom");
       }
    }
    else
    {
        printf("palindrom");
    }
}
int main()
{
    char t[N], *a;
    int i,l;
    l=0;
    gets(t);
    a=noprobels(t, strlen(t),&l);
    palindrom(a,0,l-1);
    return 0;
}
