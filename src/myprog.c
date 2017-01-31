#include "stdio.h"
#include "../inc/myprog.h"

myprint(int i) {
	int k=0;
	for (k=0;k<i;k++) {
		printf("This is a test of c program\n");
	}
}

yourprint(int i) {
	int k=0;
	for (k=0;k<i;k++) {
		printf("This is a test of fail\n")
	}
}

main(){
	myprint(NUMTIMES);
	yourprint(3);
}
