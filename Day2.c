#include <stdio.h>
int main() {
	int Seconds , Hours , Minutes , seconds;
	printf("Enter the number of seconds to convert: ");
	scanf("%d", &seconds);
	Hours= seconds/3600;
	Minutes= (seconds - Hours*3600)/60;
	Seconds= seconds-Hours*3600-Minutes*60;
	printf("Hours : %d \n",Hours);
	printf("Minutes : %d \n",Minutes);
	printf("Seconds : %d \n",Seconds);
	return(0);
	
}
