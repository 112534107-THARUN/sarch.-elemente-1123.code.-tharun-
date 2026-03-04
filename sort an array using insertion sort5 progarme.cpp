#include<stdio.h>

int main ()
{
	int n,key,j;
	
	printf("Enter number of elements:");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("Enter%d elements:\n",n);
	for(int i=0;i<n;i++)
	 scanf("%d",&arr[i]);
	 
	 //insertion sort iogic
	 for(int i=1;i<n;i++)
	 {
	 	key=arr[j];
	 	j=i-1;
	 	
	 	while(j>=0&&arr[j]>key)
	 	{
	 		arr[j+1]=arr[j];
	 		j--;
		 }
		 arr[j+1]=key;
	 }
	 printf("sorted array:\n");
	 for(int i=0;i<n;i++)
	  printf("%d",arr[i]);
	  
	  return 0;
}
