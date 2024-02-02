#include <stdlib.h>
#include <stdio.h>
#include "towers.h"

int main(int argc, char **argv)
{
	int numDisks = 3, from = 1, dest = 2, temp;
	if(argc == 2)
		numDisks = atoi(argv[1]);
	else if(argc >= 3){
		numDisks = atoi(argv[1]);
		from = atoi(argv[2]);
		temp = atoi(argv[3]);
		if(temp != from)
			dest = temp;
		else{
			fprintf(stderr,"STARTING TOWER AND DESTINATION TOWER MUST NOT MATCH");
			exit(0);
		}
	}
	towers(numDisks, from, dest);
    	exit(0);
}
