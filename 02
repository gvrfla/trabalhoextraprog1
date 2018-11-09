#include <stdio.h>

int main()
{
int i = 0, cont = 0;
char c[i];

printf ("Culpado ou inocente?\n");
//primeira pergunta
printf ("\nTelefonou para a vítima?");
scanf ("%s", &c[i++]);

//segunda pergunta 
printf ("\nEsteve no local do crime?");
scanf ("%s", &c[i++]);

//terceira pergunta
printf ("\nMora perto da vítima?");
scanf ("%s", &c[i++]);

//quarta pergunta
printf ("\nDevia para a vitima?");
scanf ("%s", &c[i++]);

//quinta pergunta
printf ("\nJa trabalhou com a vítima?");
scanf ("%s", &c[i++]);

for (i= 0; i < 5; i++){
	if (c[i] == 115) cont++;
}	

//final
printf ("\nO veredito foi: ");
if (cont == 0 || cont == 1) printf ("Inocente");
if (cont == 2) printf ("Suspeito");
if (cont == 3 || cont == 4) printf ("Cumplice");
if (cont == 5) printf ("Assassino");

getch();
return 0;
}
