#include<stdio.h>
int main()
{
	int i,j,n,temp,minIndex;
	
	printf("enter number of element:");
	scanf("%d",&n);
   
     int arr[n];
     
    printf("enter %d element:\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    for(i=0;i<n-1;i++)
    {
    	minIndex =1;
    	
    	for(j=i+1;j<n;j++)
        {
        	if(arr[j]<arr[minIndex])
        	minIndex =j;
		}
		   //swap
           temp=arr[i];
	       arr[i]=arr[minIndex];
	       arr[minIndex]=temp;
	}
	    printf("sorted array:\n");
	    for(i=0;i<n;i++)
	     printf("%d",arr[i]);
	     
	     return 0;
}
