#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

/* Creation */
COMPLEX * New_Complex;
COMPLEX CreateComplex(double real, double imaginary){
    New_Complex = (COMPLEX *) malloc(sizeof(COMPLEX));
    New_Complex->real = real;
    New_Complex->imaginary = imaginary;
    return *New_Complex;
}

/* Destruction */ 
void DestroyComplex(CPTR COMPLEX){
    free(COMPLEX);
}

/* Addition */ 
COMPLEX AddComplex(CPTR first, CPTR second){
    COMPLEX Add_Complex;
    Add_Complex.real = first->real + second->real;
    Add_Complex.imaginary = first->imaginary + second->imaginary;
    return Add_Complex;
}

/* Subtraction */ 
COMPLEX SubtractComplex(CPTR first, CPTR second){
    COMPLEX Sub_Complex;
    Sub_Complex.real = first->real - second->real;
    Sub_Complex.imaginary = first->imaginary - second->imaginary;
    return Sub_Complex;
}

/* Multiplication */ 
COMPLEX MultiplyComplex(CPTR first, CPTR second){
    COMPLEX Mul_Complex;
    Mul_Complex.real = first->real*second->real - first->imaginary*second->imaginary;
    Mul_Complex.imaginary = first->imaginary*second->real + first->real*second->imaginary;
    return Mul_Complex;
}

/* Conjugate */ 

COMPLEX ConjugateComplex(CPTR complex){
    COMPLEX Conj_Complex;
    Conj_Complex.imaginary = complex->imaginary * (-1);
    Conj_Complex.real = complex->real;
    return Conj_Complex;
}

/* Division */ 
COMPLEX DivideComplex(CPTR first, CPTR second){
    int temp1, temp2, temp3;
    if ( first->real == 0 && second->imaginary == 0 )
        printf("Division by 0 + 0i is not allowed.");
    else
        temp1 = first->real*second->real + first->imaginary*second->imaginary;
        temp2 = first->imaginary*second->real - first->real*second->imaginary;
        temp3 = second->imaginary*second->imaginary + second->imaginary*second->imaginary;
        
    if ( (temp1%temp3 == 0) && (temp2%temp3 == 0) )
        {
          if ( temp2/temp3 >= 0)
            printf("Division of two complex number8s = %d + %di ",temp1/temp3,temp2/temp3);
          else
            printf("Division of two complex number7s = %d %di ",temp1/temp3,temp2/temp3);
        }
        else if ( (temp1%temp3 == 0) && (temp2%temp3 != 0) )
        {
          if ( temp2/temp3 >= 0)
            printf("Division of two complex number6s = %d + %d%di ",temp1/temp3,temp2,temp3);
          else
            printf("Division of two complex number5s = %d %d%di ",temp1/temp3,temp2,temp3);
        }
        else if ( temp1%temp3 != 0 && temp2%temp3 == 0 )
        {
          if ( temp2/temp3 >= 0)
            printf("Division of two complex number4s = %d%d + %di ",temp1,temp3,temp2/temp3);
          else
            printf("Division of two complex number3s = %d %d%ddi ",temp1,temp3,temp2/temp3);
        }
        else
        {
          if ( temp2/temp3 >= 0)
            printf("Division of two complex number2s = %d%d + %d%di ",temp1,temp3,temp2,temp3);
          else
            printf("Division of two complex numbers1 = %d%d %d%di ",temp1,temp3,temp2,temp3);
    }
}



/* Printing */ 
void PrintComplex(CPTR complex){
    printf("Complex Real %lf Complex Imaginary %lf\n", complex->real, complex->imaginary);
}
