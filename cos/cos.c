#include<stdio.h>
#include<float.h>
#include<math.h>
#define DEG_RAD(x) ((x)/180*3.1415926535979323846)

main()
{
	double q;
	for(q=-90;q<=90;q+=10)
	printf("cos(%3g)=% .*f\n",q,DBL_DIG, cos(DEG_RAD(q)));
	return 0;
}
