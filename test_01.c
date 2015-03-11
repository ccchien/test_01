#include <stdio.h>
#include <math.h>

int main()
{
    int i ;
	char name [50] = "ccchien"; // name[0] ......name[49]
                                // name[0] = c, name[1] = c, name[2] = c, 到出現name[x] = \0就跳出來 
	printf("hello world\n");
	printf("%d\n", 2+3);
	printf("%f\n", 1.2+2.5);
	printf("%.16f\n", cos(2.0*M_PI/3.0));
	printf("%s\n", name) ;
	printf("-------------------------------\n");
	printf("abc");
	printf("%u\n", name) ;
	printf("%c\n", name[5]);
	printf("%s\n", name+3);
	for(i=0;i<50;++i)
	{
		printf("%d : %c - %u\n", i, name[i], name[i] ) ; 
	}

	return 0;
}
