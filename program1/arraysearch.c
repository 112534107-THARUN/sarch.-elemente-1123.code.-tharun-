#include <stdio.h>
int main()
{
    int n,i,search,found=0;
	//input number of elements in the array
	printf("enter number of elements in the array:");
	scanf("%d",&n);
	 
	int arr[n];
	//input array elements
	printf("enter elements of the array:\n");
	for(i=0;i<n;i++)
{
	scanf("%d",& arr[i]);
}
    //input the element to search
    printf("enter element search:");
    scanf("%d",&search);
    
    //linear search 
    for(i=0;i<n;i++)
{
	if(arr[i]==search) 
{
	found=1;
	printf("element %d found at index %d.\n",search,i);
	break;
}
 } 
    //if element is not found 
    if(!found)
{
	printf("element %d not found in the array.\n",search);
}
    return 0;

} 


