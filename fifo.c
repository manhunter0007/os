#include<stdio.h>
int main()
{
int f,p,i,j,k,fault=0,avail;
printf("Enter no. of pages in reference string:");
scanf("%d",&p);
printf("Enter no. of frames:");
scanf("%d",&f);
int frame[f],pages[p];
printf("Enter reference string:");
for(i=0;i<p;i++)
{
scanf("%d",&pages[i]);
}
for(i=0;i<f;i++)
{
frame[i]=-1;
}
j=0;
printf("Ref string\t frames\n");
for(i=0;i<p;i++)
{
printf("%d\t\t",pages[i]);
avail=0;
for(k=0;k<f;k++)
printf("%d",frame[k]);
}
printf("Page fault:%d\n page hit:%d\n",fault,p-fault);
}
