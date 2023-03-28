#include<stdio.h>
int main()
{
int n,i,p,bt[30],wt[30],tat[30],twt=0,tot=0,awt=0,atat=0;
printf("enter the number of process:");
scanf("%d",&n);
printf("\n enter the birst time for each process\n");
for(i=0;i<n;i++)
{
printf("p[%d]:",i);
scanf("%d",&bt[i]);
}
for(i=0;i<n;i++)
{
wt[0]=0;
wt[i=1]=wt[i]=bt[i];
twt=twt=wt[i]=bt[i];
tat[i]=wt[i]+bt[i];
tot=tot+tat[i];
}
awt=twt/n;
atat=tot/n;
printf("PROCESS\t\t BURST TIME\t\t WAITING TIME\t\t TURN AROUND TIME\n");
for(i=0;i<n;i++)
{
printf("p[%d]\t\t\t%d\t\t\t%d\t\t\t%d\n",i,bt[i],wt[i],tat[i]);
}
printf("\n average waiting time:%d\n",awt);
printf("\n average turn around time:%d",atat);
printf("\n-----------GANTT CHART------------\n");
printf("_______\n");
for(i=0;i<n;i++)
{
printf("p%d\t",i);
printf("|");
}
printf("\n_______\n");
for(i=0;i,n;i++)
{
printf("%d\t",wt[i]);
}
}
