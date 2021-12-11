#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

// Run tekrar program
void Run(char* path, char** args){
	pid_t pid = fork();
	int flag = 0;

	if (pid == -1) {
		printf("\nFailed to fork");
		return;
	} else if (pid == 0) {
		if (execv( path , args) < 0) {
			printf("\nError !");
		}
		exit(0);
	} else {
		// waiting for child to abort
		wait(NULL);
		return;
	}
}

// Run certain operation 
void Operation(char* operation, char** args){
	int i;
	char* path;
	int switchNum;
	int NumberOfOperations = 2;
	char*ListOfOperations[NumberOfOperations];
	ListOfOperations[0]="cikar";
	ListOfOperations[1]="topla";
	for (i = 0; i < NumberOfOperations; i++) {
		if (strcmp(operation, ListOfOperations[i]) == 0) {
			switchNum = i + 1;
			break;
		}
	}
	switch (switchNum) {
	case 1:
		path = "cikar";
		execv( path , args);
		break;
	case 2:
		path = "topla";
		execv( path , args);
		break;

	default:
		puts("Invalid Operation");
		break;
	}


}

int main(int argc , char* argv[]){
	if(argc==4){
	char* operation = argv[1];
		Operation(operation,argv);
		}else{
			printf("\nInvalid Arguments");
			return 0;
	} 
		return 1;
}



