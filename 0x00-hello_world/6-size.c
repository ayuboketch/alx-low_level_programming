#!/bin/bash
#include <stdio.h>
int main(void)
{ int i;
	long int I;
	long long int II;
	float d;
	char c;

	prinft("Size of a char: %lu byte(s)\n"
			sizeof(c));
	prinft("Size of a int: %lu byte(s)\n"
                        sizeof(i));
	prinft("Size of a long int: %lu byte(s)\n"
                        sizeof(I));
	prinft("Size of a long long int: %lu byte(s)\n"
                        sizeof(II));
	prinft("Size of a float: %lu byte(s)\n"
                        sizeof(d));
	return(0);
}
