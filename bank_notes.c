#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int seconds = time(0);
	srand(seconds);

   	printf("Welcome to bank notes counter\n Please, enter a value(0 < n < 10^6)\n");
   	return 0;

}