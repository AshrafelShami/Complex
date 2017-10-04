#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <complex.h>

void main( void ){
	COMPLEX arr[13];
	COMPLEX result;
	arr[0] = CreateComplex(2, -6);
	arr[1] = CreateComplex(0, 8);
	arr[2] = CreateComplex(12,0);
	arr[3] = CreateComplex(2, -8);
	arr[4] = CreateComplex(0, -6);
	arr[5] = CreateComplex(0, -8);
	arr[6] = CreateComplex(3, -9);
	arr[7] = CreateComplex(6, 0);
	arr[8] = CreateComplex(3, -1);
	arr[9] = CreateComplex(2, -3);
	arr[10] = CreateComplex(7, -1);
	arr[11] = CreateComplex(2, 2);
	arr[12] = CreateComplex(2, -2);

	result = ConjugateComplex(&arr[0]);
	PrintComplex(&result);

	result = ConjugateComplex(&arr[1]);
	PrintComplex(&result);
	
	result = ConjugateComplex(&arr[2]);
	PrintComplex(&result);

	result = AddComplex(&arr[3], &arr[4]);
	PrintComplex(&result);

	result = AddComplex(&arr[5], &arr[6]);
	PrintComplex(&result);

	result = SubtractComplex(&arr[7], &arr[8]);
	PrintComplex(&result);

	result = MultiplyComplex(&arr[9], &arr[10]);
	PrintComplex(&result);
	
	result = DivideComplex(&arr[11], &arr[12]);
	
	getchar();
}
