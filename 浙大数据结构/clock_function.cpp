#include <stdio.h>
#include <time.h>

clock_t start,stop;

double duration;

int main()
{
	start = clock();
	Myfunction();
	stop = clock();
	duration = ((double)(stop-start))/CLK_TCK��
	
	return 0; 
} 
