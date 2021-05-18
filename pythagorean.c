#include<stdio.h>
#include<cs50.h>

int main(void){
	float s1 = get_float("side 1 ");
	float s2 = get_float("side 2 ");		
	float s3 = get_float("side 3 ");
	//printf("%.2f",s1*s1);
	if(s1>s2 && s1>s3){
		float a = s1*s1;
		float b = s2*s2;
		float c = s3*s3;
		
		if(a ==(b+c)){
			printf("Yes");
		}
		else
			printf("No");	
	}
	else if(s2>s1 && s2>s3){
		float a = s1*s1;
		float b = s2*s2;
		float c = s3*s3;
		
		if(b ==(a+c)){
			printf("Yes");
		}
		else
			printf("No");		
	}
	if(s3>s2 && s3>s1){
		float a = s1*s1;
		float b = s2*s2;
		float c = s3*s3;
		
		if(c ==(a+b)){
			printf("Yes");
		}
		else
			printf("No");		
	}
}
