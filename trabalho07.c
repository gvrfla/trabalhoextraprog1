#include <stdio.h>

int main()
{

int a = 0, todosalunos = 1, i, j = 0, continuar = 1, nota = 0, certas[10], erradas[10], todos[a], max, min, qmax, qmin;
int imaior = 0, imenor = 0;
char resposta[10], gabarito[10]="abcdeabcde";
float somanotas = 0.0;

int questoes[10]={0,0,0,0,0,0,0,0,0,0};

do{
nota = 0;
for (i = 0; i < 10; i++){
    certas[i] = 0;
    erradas[i] = 0;
}

// Gabarito     
printf ("GABARITO: ");
for (i = 0; i < 10; i++){
    printf ("%c", gabarito[i]);
}
printf ("\n\n");

// Obtenção da resposta do aluno
printf ("Aluno %d\n", a+1);
for (i = 0; i < 10; i++){
    printf ("A resposta da questao %d: ", i+1);
    scanf ("%s", &resposta[i]);   
}

// Impressão de tabela
printf ("\n\nQuestao\tRespostaGabaritoSituacao\n");
for (i = 0; i < 10; i++){
    if (resposta[i] == gabarito[i]){
       printf ("%d\t%c\t%c\tCORRETA\n", i+1, resposta[i], gabarito[i]);
       certas[i] = 1;
       questoes[i]++;
       }
    if (resposta[i] != gabarito[i]){
       printf ("%d\t%c\t%c\tINCORRETA\n", i+1, resposta[i], gabarito[i]);
       }
}
//nota do aluno
for (i = 0; i < 10; i++){
    if (certas[i] == 1) nota++;   
}
printf ("O aluno tirou %d", nota);
todos[a] = nota;

//pergunta continua?
printf ("\n\nDeseja inserir mais algum aluno? (1 - sim / 0 - nao) ");
scanf ("%d", &continuar);
if (continuar == 1) a++;

} while (continuar == 1);

//depois do NAO
todosalunos = todosalunos + a;
a = 1;
for (i = 0; i < todosalunos; i++){
    printf ("O aluno %d tirou %d\n", a++, todos[i]);
}

// (A) - maior e menor acertos

for (i = 0; i < 10; i++){
    if (questoes[i] <= questoes[imenor]) imenor = i;
    if (questoes[i] >= questoes[imaior]) imaior = i;
}

printf ("\nA) A questao %d teve MAIS acertos\n   A questao %d teve MENOS acertos\n", imaior+1, imenor+1);

// (B) - os alunos que utilizaram
printf ("\nB) %d alunos utilizaram.", todosalunos);

// (C) - media de todas as notas
for (i = 0; i < todosalunos; i++){
    somanotas = somanotas + todos[i];
}

printf ("\nC) A media de todos os alunos foi: %.1f", somanotas/ todosalunos);

getch();
return 0;
}
