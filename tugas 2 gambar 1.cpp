#include <stdio.h>

int main()
{
	int N;
	printf("masukkan nilai N: ");
	scanf("%d", &N);
	
	if (N > 50){
		N = N + 10; 
	}else{
		N = N - 25;
	}
	
	printf("nilai akhir N: %d\n", N);
	return 0;
	
	
	  
}
