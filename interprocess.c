#include<stdio.h>
#include<stdlib.h>
#define SIZE 30
int mutex=1,full=0,empty=SIZE,f=0,buffer[SIZE];
int wait(int s)
{
if(s==0)
f=1;
else
s--;
return s;
}
int signal(int s)
{
s++;
return s;
}
int main()
{
int ch,i;
printf("The choices are: \n1.Producer Routine\n2.Consumer routine\n3.Buffer contents\n4.Exit\n");
while(1)
{
printf("Enter the choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:{
empty=wait(empty);
mutex=wait(mutex);
if(f==0)
{
printf("Enter the item to be added:");
scanf("%d",&buffer[full]);
full=signal(full);
printf("produced successfully\n");
}
else
{
printf("Buffer is full\n");
f=0;
}
mutex=signal(mutex);
break;
}
case 2:{
full=wait(full);
mutex=wait(mutex);
if(f==0)
{
printf("Item consumed:%d\n",buffer[0]);
for(i=0;i<full;i++)
{
buffer[i]=buffer[i+1];
}
empty=signal(empty);
}
else
{
printf("Buffer is empty\n");
f=0;
}
mutex=signal(mutex);
break;
}
case 3:{
if(full!=0)
{
for(i=0;i<full;i++)
printf("%d\n",buffer[i]);
}
else
printf("\n Buffer is empty\n");
break;
}
case 4:
exit(0);
default:
printf("Invalid input\n");
}
}
return 0;
}

