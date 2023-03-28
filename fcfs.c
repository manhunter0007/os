#include<stdio.h>
int main()
{
int n,i,p,bt[30],wt[30],tat[30],twt=0,tot=0,awt=0,atat=0;
printf("Enter the process:");
scanf("%d",&n);
printf("\n Enter the burst time for each process\n");
for(i=0;i<n;i++)
{
printf("p[%d]:",i);
scanf("%d",&bt[i]);
}
for(i=0;i<n;i++)
{
wt[0]=0;
wt[i+1]=wt[i]+bt[i];
twt=twt+wt[i];
tat[i]=wt[i]+bt[i];
tot=tot+tat[i];
}
awt=awt/n;
atat=tot/n;
printf("Process\t\tBurst time\t\tWaiting time\t\tTurn around time\n");
for(i=0;i<n;i++)
{
printf("p[%d]\t\t\t%d\t\t\t%d\t\t\t%d\n",i,bt[i],wt[i],tat[i]);
}
printf("\nAverage waiting time:%d\n",awt);
printf("\nAverage turn around time:%d",atat);
printf("\n______GANTT CHART______\n");
printf("_____________\n");
for(i=0;i<n;i++)
{
printf("p%d\t",i);
printf("|");
}
printf("\n______\n");
for(i=0;i<n;i++)
{
printf("%d\t",wt[i]);
}
}
