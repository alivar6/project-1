#include<stdio.h>
int main()
{
    int i, j, n, b;
    scanf("%d",&n);
    for(i=2 ; i < n ; ++i){
    	if(n / i == 0)
    	b++;
	}
	if(b == 0)
		printf("is prime");
	else{
		printf("no prime");
	}	
}
