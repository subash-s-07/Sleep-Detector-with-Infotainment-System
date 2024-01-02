#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int t=a[0];
// loop for no of times; to rotate , for reverse
    for(int i=0;i<10;i++)
    {
        a[i]=a[i+1];
    }
    a[9]=t;
    for(int i=0;i<10;i++)
        printf("%d\n",a[i]);
}
