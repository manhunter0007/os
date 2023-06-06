#include<stdio.h>
int main()
{
int blocks,processes,i,j;
printf("Enter number of blocks:");
scanf("%d",&blocks);
int blockSize[blocks],fragment[blocks],occupied[blocks];
printf("Enter block size one by one:\n");
for(i=0;i<blocks;i++)
{
scanf("%d",&blockSize[i]);
occupied[i]=0;
}
printf("Enter number of processes:");
scanf("%d",&processes);
int processSize[processes],allocate[processes];
printf("Enter pocess size one by one:\n");
for(i=0;i<processes;i++)
{
scanf("%d",&processSize[i]);
allocate[i]=-1;
}
for(i=0;i<processes;i++)
{
for(j=0;j<blocks;j++)
{
if (occupied[j]==0&&blockSize[j]>=processSize[i])
{
allocate[i]=j;
occupied[j]=1;
fragment[j]=blockSize[j]-processSize[i];
break;
}
}
}
printf("\nProcess No \t Process Size \t  Block No \tBlock Size \t Fragments\n");
for(i=0;i<processes;i++)
{
printf("%d \t\t %d \t\t",i+1,processSize[i]);
if(allocate[i]!=-1)
printf("%d \t\t %d \t\t %d \t\t\n",allocate[i]+1,blockSize[allocate[i]],fragment[allocate[i]]);
else
printf("Not allocated\n");
}
return 0;
}
