#include <stdio.h>
#include <math.h>

int main()
{
    char name [50] = "ccchien"; // name[0] ......name[49]
                                // name[0] = c, name[1] = c, name[2] = c
	printf("hello world\n");
	printf("%d\n", 2+3);
	printf("%f\n", 1.2+2.5);
	printf("%.16f\n", cos(2.0*M_PI/3.0));
	printf("%s\n", name) ;
	printf("%c\n", name[4]);
	printf("%c\n", name[11]);
	return 0;
}
