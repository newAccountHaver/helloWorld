#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* calculate the area of a triangle */

int main (int argc, char **argv) {

	double a = atof(argv[1]);
	double b = atof(argv[2]);
	double c = atof(argv[3]);
	double area;

	area = (1.0/4.0)*sqrt((a+b+c)*(b+c-a)*(a-b+c)*(a+b-c));

	printf("The area is %f\n", area);

	return 0;	
}
