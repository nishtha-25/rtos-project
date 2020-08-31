#include<stdio.h>
#include "header.h"
void sort(int number[],n)
{
	int i,j,a;
	for(i = 0; i < n; ++i) 
    {
       for(j = i + 1; j < n; ++j)
       {
		  if (number[i] > number[j]) 
          {
              a =  number[i];
              number[i] = number[j];
              number[j] = a;
          }
       }
	}
    printf("The numbers arranged in ascending order are given below \n");
    for (i = 0; i < n; ++i)
       printf("%d\n", number[i]);
}
void mean(int number[],n)
{
	int sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+number[i];
	}
	sum=sum/n;
	printf("Mean of the array is %d",sum);
}
void mode(int number[],int n)
{
	int max_no=0,i,j,a,val;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(numbers[i]>numbers[j])
			{
				a=numbers[i];
				numbers[i]=numbers[j];
				numbers[j]=a;
			}
		}
	}
	int count=0;
	for(int i=0;i<n-1;i++)
	{
		if(numbers[i]==numbers[i+1])
		{
			count++;
		}
		else
			{
				if(max_no<count)
				{
					max_no=count;
					val=numbers[i];
				}
			}
		}
	printf("Mode of the number is %d", val);	
}
    void median(int numbers[],int n)
	{
		int i,j,a,val;
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(numbers[i]>numbers[j])
				{
					a=numbers[i];
					numbers[i]=numbers[j];
					numbers[j]=a;
				}
			}
		}
		if(n%2==0)
		{
			int n1=numbers[n/2];
			int n2=numbers[(n/2)-1];
			printf("Median of this array is %d and %d",n1,n2);
		}
		else
		{
			printf("Median of the array is %d",numbers[n/2]);
		}	
	}
	void max(int numbers[],int n)
	{
		int i;
		int maxx=0;
		for(i=0;i<n;i++)
		{
			if(numbers[i]>maxx)
			{
				maxx=numbers[i];
			}
		}
		printf("Maximum number of the array is %d",maxx);
	}
	void min(int numbers[],int n)
	{
		int i;
		int minn=99999999;
		for(i=0;i<n;i++)
		{
			if(numbers[i]<minn)
			{
				minn=numbers[i];
			}
		}
		printf("Minimum number of the array is %d",minn);
	}