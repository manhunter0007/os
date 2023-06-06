#include<stdio.h>
void main()
{
int alloc[10][10],totalavail[10],max[10][10],p,r,i,j,flag=0,safe[10],f[10],count=0;
printf("Enter no of processors:\n");
scanf("%d",&p);
printf("Enter no of resourses:\n");
scanf("%d",&r);
printf("Enter available resourses:\n");
for(j=0;j<r;j++)
{
scanf("%d",&totalavail[j]);
}
for(i=0;i<p;i++)
{
f[i]=0;
}
printf("Enter max matrix:\n");
for(i=0;i<p;i++)
{
for(j=0;j<r;j++)
{
scanf("%d",&max[i][j]);
}
printf("\n");
}
printf("Enter current allocation matrix:\n");
for(i=0;i<p;i++)
{
for(j=0;j<r;j++)
{
scanf("%d",&alloc[i][j]);
}
printf("\n");
}
int need[p][r];
for(i=0;i<p;i++)
{
for(j=0;j<r;j++)
{
need[i][j]= max[i][j]-alloc[i][j];
}}
int ans[p], ind = 0,k;
int y = 0;
for (k = 0; k < p; k++) {
for (i = 0; i < p; i++) {
if (f[i] == 0) {
int flag = 0;
for (j = 0; j < r; j++) {
if (need[i][j] > totalavail[j]){
flag = 1;
break;
}
}
if (flag == 0) {
ans[ind++] = i;
for (y = 0; y < r; y++)
totalavail[y] += alloc[i][y];
f[i] = 1;
}
}
}
}
flag = 1;
for(int i=0;i<p;i++)
{
if(f[i]==0)
{
flag=0;
printf("The following system is not safe");
break;
}
}
if(flag==1)
{
printf("Following is the SAFE Sequence\n");
for (i = 0; i < p ; i++)
{
printf("-> P%d",ans[i]);
}
}
printf("\n");
}
