#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv){
	printf("Process_ID: %d\n", getpid());
	printf("Parent_process_ID: %d\n", getppid());
	printf("My_group:%d\n", getpgrp());

	return 0;
}
