#include <stdlib.h>
#include <stdio.h>

int factorial(int aNumber){
	int m=1;
	if(aNumber==0||aNumber==1)
	return 1;
	for(int i =1; i<=aNumber;i++ )
	m=m*i;
	return m;
}


