#include<stdio.h>
int main()
{
int blocks,processes,i,j;
printf("Enter number of blocks:");
scanf("%d",&blocks);
int blockSize[blocks],occupied[blocks];
printf("Enter The Block Sizes:");
for(i=0;i<blocks;i++)
{
scanf("%d",&blockSize[i]);
occupied[i]=0;
}
printf("enter no.of processes:");
scanf("%d",&processes);
int processSize[processes],allocation[processes];
printf("Enter the processes size:");
for(int i=0;i<processes;i++)
{
scanf("%d",&processSize[i]);
allocation[i]=-1;
}
for(i=0;i<processes;i++)
{
int indexPlaced=-1;
for(j=0;j<blocks;j++)
{
if(blockSize[j]>=processSize[i]&&!occupied[j])
{
if(indexPlaced==-1)
indexPlaced=j;
else if(blockSize[j]<blockSize[indexPlaced])
indexPlaced=j;
}
}
if(indexPlaced!=-1)
{
allocation[i]=indexPlaced;
occupied[indexPlaced]=1;
}
}
printf("\nProcess No\tProcessSize\tBlock No\tBlockSize\tfragment\n");
for(i=0;i<processes;i++)
{
printf("%d\t\t%d\t\t",i+1,processSize[i]);
if(allocation[i]!=-1)
printf("%d\t\t%d\t\t%d\n",allocation[i]+1,blockSize[allocation[i]],blockSize[allocation[i]]-processSize[i]);
else
printf("Not allocated\tNot allocated\n");
}
return 0;
}
