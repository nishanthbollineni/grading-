#include<stdio.h>
#include<conio.h>

int main()
{
int no, i;
float marks[10], per=0, total=0;
printf("Enter number of subject: ");
scanf("%d",&no);
printf("Enter marks of %d subject: ",no);
for(i=0; i<no; i++)
{
scanf("%f",&marks[i]);
}
for(i=0; i<no; i++)
{
total=total+marks[i];
}
per=total/no;
printf("Percentage: %f % \n",per);
if(per>85) {
printf("A grade");
}
else if(per<85 && per>=70) 
{
printf("B grade");
}
else if(per<70 && per>=55)
{
printf("C grade");
}
else if(per<55 && per>=40) 
{
printf("D grade");
}
else 
{
printf("F grade");
}
getch();
}
