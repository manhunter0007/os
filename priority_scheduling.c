#include<stdio.h>
int main(){
int n,i,j,p[30],pr[30],bt[30],wt[30],tat[30],temp;
float awt=0,atat=0,twt=0,tot=0;
printf("Enter the number of process:");
scanf("%d",&n);
printf("Enter the burst time for each process\n");
for(i=0;i<n;i++)
{
scanf("%d",&bt[i]);
p[i]=i+1;
}
printf("Enter the priority for each process\n");
for(i=0;i<n;i++)
{
scanf("%d",&pr[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{if(pr[i]>pr[j])
{
temp=pr[i];
pr[i]=pr[j];
pr[j]=temp;
temp=bt[i];
bt[i]=bt[j];
bt[j]=temp;
temp=p[i];
p[i]=p[j];
p[j]=temp;
}
}
}
for(i=0;i<n;i++)
{
wt[0]=0;
wt[i+1]=wt[i]+bt[i];
twt=twt+wt[i];
tat[i]=wt[i]+bt[i];
tot=tot+tat[i];
}awt=twt/n;
atat=tot/n;
printf("PROCESS\t\tBURST TIME\t\tPRIORITY\t\tWAITING TIME\t\tTURNAROUND TIME\n");
for(i=0;i<n;i++)
{
printf("p[%d]\t\t\t%d\t\t\t%d\t\t\t%d\t\t\t%d\n",p[i],bt[i],pr[i],wt[i],tat[i]);
}
printf("\nAverage waiting time:%f\n",awt);
printf("\nAverage turn around time:%f",atat);
printf("\n--------GANTT CHART--------------- \n");
printf("____________\n");
for(i=0;i<n;i++)
{
printf("p%d\t",p[i]);
printf("|");
}
printf("\n____________\n");
for(i=0;i<=n;i++) {
printf("%d\t",wt[i]);
}
}
