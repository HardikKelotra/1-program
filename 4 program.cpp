/*conversions*/
#include<stdio.h>
 int main()
        { float a,b,c,d,e;
          printf("distance between two cities = ");
		  scanf("%f",&a);
		  b=a*1000;
		  printf("distance between cities in meters = %f \n",b );
		  c=a*3280;
		  printf("distance between citiees in feet = %f \n",c);
		  d=a*39370;
		  printf("distance between cities in inches = %f \n",d);
		  e=a*100000;
		  printf("distance between cities in centimeter = %f \n",e);
		  }
