// Es. 6.10: es06_10.c
// Commissioni sulle vendite
// Usate un array unidimensionale per risolvere il seguente problema. Una compagnia paga i
// suoi agenti di vendita su commissione. Gli agenti di vendita ricevono $200 alla settimana
// più il 9% delle loro vendite lorde per quella settimana. Ad esempio, un agente di vendita
// che ottiene un introito lordo sulle vendite di $3000 in una settimana riceve $200 più il
// 9% di $3000, ovvero un totale di $470. Scrivete un programma in C (usando un array di
// contatori) che determini quanti agenti di vendita hanno avuto i loro guadagni in ognuno
// dei seguenti intervalli (supponete che il guadagno di ogni agente di vendita sia troncato
// a una quantità intera):
// a) $200-299
// b) $300-399
// c) $400-499
// d) $500-599
// e) $600-699
// f) $700-799
// g) $800-899
// h) $900-999
// i) $1000 e oltre
#include <stdio.h>
#define STAFF 20

void calculateWages(int[], int[], size_t);
void calculateRange(int[], size_t);

int main(void)
{
    int sales[STAFF] = { 2000, 2400, 1500, 10600, 1552, 2120,
                         1875, 7500, 4690,  9000, 2130, 4000,
       		             5800,   500, 1250, 3000 };
				   
    int wages[STAFF] = { 0 };
	
    calculateWages( sales, wages, STAFF );
    calculateRange( wages, STAFF );
}

void calculateWages( int sales[], int wages[], size_t employees)
{
    int i, pay;
	
    for(i = 0; i <= employees - 1; i++){
        pay = 200;
	    pay += sales[i] * 0.09;
	    wages[i] = pay;
    }	
}


void calculateRange( int wages[], size_t employees)
{
    int range[10] = { 0 };
    int i;
	
    for( i=0; i<=employees-1; i++ )
    {
        if(wages[i] >= 1000)
            ++range[9];
        else if(wages[i] >= 900)
            ++range[8];
        else if(wages[i] >= 800)
            ++range[7];
        else if(wages[i] >= 700)
            ++range[6];
        else if(wages[i] >= 600)
            ++range[5];
        else if(wages[i] >= 500)
            ++range[4];
        else if(wages[i] >= 400)
            ++range[3];
        else if(wages[i] >= 300)
            ++range[2];
        else if(wages[i] >= 200)
            ++range[1];
    }
	
    int sum = 200;
	
    for(i = 1; i <= 9; i++){
	    if(i < 9)
            printf("%d. $%d-$%d\t\t %d\n",
	            i, sum, sum+99, range[i]);
	    else
    	    printf("%d. $%d and over \t %d\n", i, sum, range[i]);
	    sum += 100;
    }
}
