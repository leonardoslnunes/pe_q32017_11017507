#include<stdio.h>

float volume(float x,float y, float z)
{
	float v = x*y*z;
	printf("%.2f \n",v);	
}

void main(){
	float x,y,z;
	scanf("%f %f %f",&x, &y, &z);
	volume(x,y,z);
}
