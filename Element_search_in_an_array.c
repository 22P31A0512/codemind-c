#include<stdio.h>
int linear_search(int *a,int n,int se)
{
	int i,count=0;
for(i=0;i<n;i++)
{
	if(se==a[i])
	return i;
}
return -1;
}
int main()
{
	int n;
	
	scanf("%d",&n);
	int a[n];

	int i;
	for( i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int se;
	
	scanf("%d",&se);
	int res=linear_search(a,n,se);
	if(res==-1)
	{
	printf("False");
    }
	else
	{
	printf("True");
   }
}