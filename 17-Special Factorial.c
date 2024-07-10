#include <stdio.h>
#include <stdlib.h>

/* Find the biggest number which has a factorial that less than 10^9  */

int main(int argc, char *argv[]) {
	int fac,num;
	
	fac=1;
	num=1;
	
	while(fac<pow(10,9)){
		fac=fac*num;
		num++;
				
	}
	printf("%d",num-1);
	
	return 0;
}
