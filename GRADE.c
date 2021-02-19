#include<stdio.h>
void main
{
int s1,s2,s3,tot;
float avg;
printf("Enter 3 marks:");
scanf("%d%d%d",&s1,&s2,&s2);
tot=s1+s2+s3;
avg=(float)tot/3;
if((avg>=80)&&(avg<=100))
{
printf("Distinction");
}
else if((avg<80)&&(avg>=60))
{
printf("/nFIrst CLass");
}
else if((avg<60)&&(avg>=50))
{
printf("/nSECOND CLass");
}
else if((avg<50)&&(avg>=40))
{
printf("/nTHIRD CLass");
}
else
{
printf("FAIL");
}
}
