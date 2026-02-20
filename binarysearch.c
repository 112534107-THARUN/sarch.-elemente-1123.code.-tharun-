#include <stdio.h>
int binarysearch(int arr[],int n,int key)
{
	int low =0,high=n-1,mid;
	while(low<=high)
{
	mid=(low+high)/2;
	if(arr[mid]==key)
	return mid; //element found 
	else if(arr[mid]<key) 
	low=mid+1; //search left half
	else 
	high=mid-1; //search left half
}
    return-1;//element not found
}
    int main()
{
	int i,n,key,result;
	printf("enter number of element:");
	scanf("%d",&n);
	
	int arr[n];
	printf("enter %d sorted element:\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	printf("enter element to search:");
	scanf("%d",&key);
	
	result=binarysearch (arr,n,key);
	if(result-1)
	printf("element found at index %d\n",result);
	else
	printf("elements not found\n");
	return 0;
}
