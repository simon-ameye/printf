#include "../ft_printf.h"
#include <stdio.h>

int main(void)
{
	int *pt;
	int nb;

	nb = -2147483648;
	pt = &nb;

/*
	printf("\nres returned value : %d\n", 
	ft_printf	("res : c:%c, s:%10s, p:%-10p, d:%-10d, i:%20i, u:%u, x:%-1x, X:%-*X, pourcen:%-03%", 'C', "caca", pt, nb, nb, nb, nb, 20, nb));
	
	printf("\nref returned value : %d\n",
	printf		("res : c:%c, s:%10s, p:%-10p, d:%-10d, i:%20i, u:%u, x:%-1x, X:%-*X, pourcen:%-03%", 'C', "caca", pt, nb, nb, nb, nb, 20, nb));
*/
//	printf("\nres returned value : %d\n", 
//	ft_printf   ("!%88.*d!", 66, 123456));

	//printf("\nres returned value : %d\n",
	//ft_printf		("!%*d!", 1, -123456));
	printf("\nref returned value : %d\n",
	printf			("!%030.20d", -123456));
}

/*

width = max(0, width)
precision = max(0, precision)

1) str

2) neg
	neg = flag-neg

3) leftzeros
	leftzeros = max(0, precision - str)
	leftzeros = max(leftzeros, (minus == 0) * (zeros == 1) * (width - str - neg))

4) leftspaces
	leftspaces = max(0, width - leftzeros - str - neg)

5) rightspaces
	if minus == 1
		rightspaces = (minus == 1) * (width - neg - str), 



		



4) str

5) rightspaces

*/