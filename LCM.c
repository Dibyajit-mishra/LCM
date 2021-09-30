#include<stdio.h>
int lcm(int a,int b)
{static int m=0;
m=m+b;
if(m%a==0 && m%b==0)
{return m;
}
return lcm(a,b);
}
int main()
{int x,y;
printf("enter first number:");
scanf("%d",&x);
printf("enter second number:");
scanf("%d",&y);
printf("LCM of %d and %d=%d",x,y,lcm(x,y));
return 0;
}
