#include <stdlib.h>
#include <stdio.h>

int factorial(int n){
	int m=1;
	if(n==0||n==1)
	return 1;
	for(int i =1; i<=n;i++ )
	m=m*i;
	return m;
}


