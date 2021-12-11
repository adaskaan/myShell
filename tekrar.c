#include<stdio.h>
#include<stdlib.h>

void main(int argc, char* argv[]){

	if(argc==3){
    
	char *c = argv[2];
	int repeat = atoi(c); // parse to int
	char *str = argv[1];
	if(repeat != 0){
		int i = 0;
		for (i = 0; i < repeat; i++){
        		printf("%s\n",str);
    			}
   		 }else{
   		 	puts("Invalid arguments");
   		 }
 	}else{
 	puts("Invalid arguments");
 	}
	exit(0);
}

