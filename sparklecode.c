#include <stdio.h>
int main()
{
    int t,i,j;int hs,ms;
scanf("%d",&t);
for(i=0;i<t;i++)
{
    int n,H,M;
scanf("%d %d %d", &n, &H, &M);

for(j=0;j<n;j++)
{
    int h,m;
    hs=0;ms=0;
    scanf("%d %d",&h,&m);

if(H>h)
{
        ms=60-M+m;
        if(ms>=60)
        {
            ms=ms-60;
            hs=hs+1;
        }
       
        hs=24-H-1+h;
 printf("%d %d",hs,ms);
 printf("\n");
  
}

if(H<=h && M>m)
{
    ms=60-M+m;
     if(ms>=60)
        {
            ms=ms-60;
            hs=hs+1;
        }
        hs=h-H-1;
        printf("%d %d",hs,ms);
        printf("\n");

}
if(H<=h && M<=m)
{
    ms=60-M+m;
     if(ms>=60)
        {
            ms=ms-60;
            hs=hs+1;
        }
        hs=h-H;
        printf("%d %d",hs,ms);
        printf("\n");

}

}
}
}