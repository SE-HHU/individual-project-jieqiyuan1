#include<stdio.h>
#include<stdlib.h> 
#include<time.h>
int main()
{
	FILE *fp1,*fp2;
	int a,b,c,num,i,r,t,m,h,j,k;
	char s,x;
	srand(time(NULL));
	if((fp1=fopen("C:\\Users\\86132\\Desktop\\Exercises.txt","w"))==NULL)
	{
		printf("Can't open this file.\n");
		exit(0);
	}
	if((fp2=fopen("C:\\Users\\86132\\Desktop\\Answers.txt","w"))==NULL)
	{
		printf("Can't open this file.\n");
		exit(0);	
	}
	printf("请输入生成题目数量:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		do
		{
		a=rand()%99+1;
		b=rand()%99+1;
		c=rand()%99+1;
	    } while(a<b||a+b<c||a+b>100||a+c>100||a+b+c>100||a<b+c||(a==h&&b==j&&c==k));
		r=rand()%2;
		t=rand()%4;
		switch(t)
		{
			case 0:s='+',x='-';break;
			case 1:s='-',x='+';break;
			case 2:s='+',x='+';break;
			case 3:s='-',x='-';break;
		}
			
		
		switch(r)
		{
			case 0:fprintf(fp1,"%d.%d%c%d=\n",i,a,s,b);
			       if(t==0||t==2) m=a+b;
			       else           m=a-b;
			       fprintf(fp2,"%d.答案为%d\n",i,m);
			       break;
			case 1:fprintf(fp1,"%d.%d%c%d%c%d=\n",i,a,s,b,x,c);
			       if(t==0)         m=a+b-c;
			       else if(t==1)    m=a-b+c;
			       else if(t==2)    m=a+b+c;
			       else             m=a-b-c;
			       fprintf(fp2,"%d.答案为%d\n",i,m);
			       break;
				
		}
		h=a;
		j=b;
		k=c;
		
	}
	return 0;
} 

