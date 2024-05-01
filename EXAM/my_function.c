#include<stdio.h>


void checkstr(char str[])
{
	int n,count,i,j;
	n = strlen(str);
	for(i=0;i<n;i++)
    {
        if(str[i]!='A'&&str[i]!='a'&&str[i]!='E'&&str[i]!='e'&&str[i]!='I'&&str[i]!='i'&&str[i]!='O'&&str[i]!='o'&&str[i]!='U'&&str[i]!='u')
        {
            count =1;
        for(j=i+1;j<n;j++)
        {
            if(str[j]==str[i])
            {
                count ++;
                str[j]=0;
            }
            
        }
        if(str[i]!=0)
            {
                printf("%c\t=\t%d Times\n",str[i],count);
            }
        }
    }
}
void checknumber(int n)
{
    if(n%3==0)
    {
        printf("%d is Divisible By 3 & 5",n);
    }
    else if(n%5==0)
	{ 
		printf("%d is Divisible by 5 & 3",n);
	}
	else
	{
		printf("%d is not Divisible by 5 & 3",n);
		
	}
}
