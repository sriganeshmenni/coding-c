#include<stdio.h>
int main()
{
	int n,a;
	scanf("%d",&n);
	for(int i= n; i>0; i++){
 	a =i*(i+1)/2;
		int b=a%2==0;
	printf("%d ",b);
	}	
	
}