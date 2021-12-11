#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[]){

	if(argc==4){
		char *x= argv[2];
		char *y = argv[3];
		int num1 = atoi(x); //  to int
		int num2 = atoi(y); //  to int
		int sub = num1 - num2;
		printf("Cikar : %d\n",sub);

 		}else {
 			puts("Invalid arguments");
 			exit(1);
 		}
	exit(0);
	
}
