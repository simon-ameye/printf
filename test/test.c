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

	printf("\nres returned value : %d\n", 
	ft_printf   ("mon age est : %-20i ans, et mon nom est : %s. j'aimme la %c, -15 en hexa c'est : %020X", nb, "simon", 'C', -15));
	printf("\nres returned value : %d\n", 
	printf		("mon age est : %-20i ans, et mon nom est : %s. j'aimme la %c, -15 en hexa c'est : %020X", nb, "simon", 'C', -15));
}

/*


1) str

2) neg
	neg = flag-neg

3) leftzeros
	leftzeros = max(0, precision - str)
	leftzeros = max(leftzeros, (minus == 0) * (zeros == 1) * (width - str - neg))

4) leftspaces
	leftspaces = max(0, width - leftzeros - str - neg)

5) rightspaces
	rightspaces = (minus == 1) * (width - neg - str), 



		



4) str

5) rightspaces

*/