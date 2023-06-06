#include<stdio.h>
int main()
{
int blocks,process,i,j;
printf("Enter number of blocks:");
scanf("%d",&blocks);
int blockSize[blocks],occupied[blocks];
printf("Enter the block size:");
for(i=0;i<blocks;i++)
{
scanf("%d",&blockSize[i]);
occupied[i]=0;
}
printf("Enter no. of processes:");
scanf("%d",&process);
int processSize[process],allocation[process];
printf("Enter the provess sizes:");
for(int i=0;i<process;i++)
{
scanf("%d",&processSize[i]);
allocation[i]=-1;
}
for(i=0;i<process;i++)
{
int indexPlaced=-1;
for(j=0;j<blocks;j++)
{
if(blockSize[j]>=processSize[i]&&!occupied[j])
{
if(indexPlaced==-1)
indexPlaced=j;
else if(blockSize[j]>blockSize[indexPlaced])
indexPlaced=j;
}
}
if(indexPlaced!=-1)
{
allocation[i]=indexPlaced;
occupied[indexPlaced]=1;
}
}
printf("\nProcess no. \tProcess Size\t Block No \t Block Size \t Fragment \n");
for(i=0;i<process;i++)
{
printf("%d\t\t%d\t\t",i+1,processSize[i]);
if(allocation[i]!=-1)
printf("%d\t\t%d\t\t%d\t\t%d\n",allocation[i]=1,blockSize[allocation[i]],blockSize[allocation[i]]-processSize[i]);
else
printf("Not Allocated\t Not Allocated\n");
}
return 0;
}
