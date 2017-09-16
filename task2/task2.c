/*
 * task2.c
 *
 *  Created on: 27 дек. 2016 г.
 *      Author: Tanyushka
 */

#include <stdio.h>
#define TRUE 1

int main(void){
	int current = 1;
	int previous = 0;
	int temp;
	int sum = 0;
	while(TRUE){
		if((current + previous) > 4000000)
			break;
		if(current%2 == 0){
			sum += current;
		}
		temp = current;
		current += previous;
		previous = temp;
	}
	printf("%d, %d", sum, current);
	return 0;
}
