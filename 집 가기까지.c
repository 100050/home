#include <stdio.h>
#include <time.h>

int main() {
	time_t curTime = time(NULL);
	struct tm *pLocal = localtime(&curTime);

	int a,b;
	a = pLocal->tm_hour;
	b = pLocal -> tm_min;
	
	if (20 < pLocal->tm_min) {
		a--;
		b-=60;
	} 
	
	printf("%02d시간 %02d분 남았다", 16 - a, 20 - b);
	
	return 0;
} 
