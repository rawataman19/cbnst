#include<stdio.h>
#include<math.h>
float f(float x){
   return (x*x*x) - 5*x +1;
}

float g(float x){
  return 3*x*x -5;	
}
int main(){
	
	
	
	float x, y;
	
	while(1){
	printf("Enter the value of x and y\n");
	scanf("%f%f" , &x,&y);
	
	
	if(f(x)*f(y) <0){
		printf("root lies int the interval\n");
		break;
	
	}
	else{
		printf("root doesnot lie in the interval plzz try again \n");
	}
	}
	float a,b;
	
	printf("enter value of a bw %f & %f",x,y);
	scanf("%f",&a);
	
	float aerr;
	printf("enter allowed error");
	scanf("%f",&aerr);
	int cnt=0;
	
	do {
		b = a - f(a)/g(a);
		cnt++;
			
		printf("at iteration %d root value is %f \n", cnt,b); 
		
		printf(" f(b) -> %f\n", f(b));
		a=b;
	}while(fabs(f(b))>= aerr);
	
	printf("root is %f ",b);
	return  0;
}
