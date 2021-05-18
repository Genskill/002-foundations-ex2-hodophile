#include<stdio.h>
#include<cs50.h>

int main(void){
	int type = get_int(" ");
	int rows = get_int(" ");
	if(type == 1){
		for(int i=rows;i>0;i--){
			for(int j=0;j<i;j++){
				printf("#");
			}
			printf("\n");
		}
	}
	if(type == 2){
		for(int i=1;i<=rows;i++){
			for(int j=1;j<=rows-i;j++){
				printf(" ");
			}
			for(int x=0;x<i;x++)
				printf("#");
			printf("\n");
		}
	}
}
