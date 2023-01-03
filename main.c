#include "pi.h"
#include<stdio.h>
int main(){
float rayon;
printf("rayon\n");
scanf("%f",&rayon);
printf("%f %f", surface(rayon), circonference(rayon));
return 0;
}
