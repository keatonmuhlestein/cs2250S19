#include <stdio.h>

int main ()
{
	int dist = 2;
	int sec = 1;
	int velocity = 1;

	printf("Enter distance in meters:\n");
	scanf("%d", &dist);
	printf("Enter time in seconds:\n");
	scanf("%d", &sec);
	printf("Your current velocity in m/s is: %d\n", dist/sec);
        velocity = (dist/1000)/(sec/3600);
	printf("Your velocity in km/hr is: %d\n", velocity);	

	return 0;
}
