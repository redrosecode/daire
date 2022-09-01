#include <stdio.h>
#define pi 3.14
main(){
	float r,cevre,alan;
	printf("Yaricapi giriniz:");
	scanf("%f",&r);
	alan=pi*r*r;
	cevre=2*pi*r;
	printf("dairenin alani:=%f\n",alan);
	printf("dairenin cevresi:%f",cevre);
	getch();
}
