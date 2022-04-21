#include <stdio.h>
int main()
{
    int a,b,c,d,n;
    int i;
    scanf("%d %d %d",&a,&b,&n);
    c=a;
    d=b;
    for(i=1;i<=n;i++)
        if(i%2==1)
        c=c*2;
        else
        d=d*2;
    
    if(c>=d)
        printf("%d",c/d);
    else
    printf("%d",d/c);
	return 0;
}