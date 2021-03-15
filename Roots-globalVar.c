#include<stdio.h>
#include<math.h>

float a,b,c;
float discriminant,root_1,root_2,real_part,imag_part;

void roots(float a,float b,float discriminant){
	
	//Both roots are real and differen
	if(discriminant > 0){
		root_1 = (-b + sqrt(discriminant)) / (2 * a);
		root_2 = (-b - sqrt(discriminant)) / (2 * a);
		printf("Root_1 = %.2f\nRoot_2 = %.2f",root_1,root_2);
	}
	
	//Both roots are real and same
	else if(discriminant == 0){
		root_1 = root_2 = (-b) / (2 * a);
		printf("Root_1 = Root_2 = %.2f",root_1);
	}
	
	//Both roots are complex
	else {
        real_part = (-b) / (2 * a);
        imag_part = sqrt(-discriminant) / (2 * a);
        printf("Root_1 = %.2f + %.2fi\nRoot_2 = %.2f - %.2fi",real_part,imag_part,real_part,imag_part);
    }  
}


int main() {
	
	printf("Enter coefficients a , b and c -: ");
	scanf("%f %f %f",&a,&b,&c);
	
	if(a == 0){
		printf("The value of a cannot be zero");
	}
	
	discriminant = (b * b)-(4 * a * c);
	roots(a,b,discriminant);
	
return 0;
}
