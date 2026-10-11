#include<stdio.h>
int main (void)



{
			float s;
			float d;
			float t;
			float a;
			float tspeed;

			printf("Enter takeoff speed(km/h): ");
			scanf("%f",&s);
			printf("Enter the distanc(meters): ");
			scanf("%f",&d);


			tspeed=s*1000/3600;
			a=(tspeed*tspeed)/(2.0*d);
			t=tspeed/a;


			printf("Acceleration(m/s^2):%f\n",a);
			printf("time(seconds):%f",t);

			return 0;


}




	
	


