#include<stdio.h>
#include<math.h>
float f(float x){
   return (x*x*x) - cos(x) +1;
}
int main(){
	
	
	
	float x, y,z;
	
	while(1){
	printf("Enter the value of x and y\n");
	scanf("%f%f" , &x,&y);
	
	
	if(f(x)*f(y) <0){
		printf("root lies int the interval\n");
		break;
	
	}
	else{
		printf("root doesnot lie in the interval plszz try again \n");
	}
	}
	float aerr;
	printf("enter allowed error");
	scanf("%f",&aerr);
	int cnt=0;
	
	do {
		z= y -(y-x)/(f(y)- f(x)) *f(y);
		cnt++;
			
		printf("at iteration %d root value is %f \n", cnt,z); 
		
		printf(" f(z) -> %f\n", f(z));
		x=y;
		y=z;
	}while(fabs(f(z))>= aerr);
	
	printf("root is %f ",z);
	return  0;
}
