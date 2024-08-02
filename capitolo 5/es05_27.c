// Es. 5.27: es05_27.c
// Numeri primi
// Un intero è un numero primo se è divisibile solo per 1 e per se stesso.
// Ad esempio, 2, 3, 5 e 7 sono numeri primi, ma 4, 6 e 9 non lo sono.
// a) Scrivere una funzione che determini se un numero è primo.
// b) Usate questa funzione in un programma che determini e stampi tutti i
//    numeri primi tra 1 e 10.000. Quanti di questi 10.000 numeri dovete
//    realmente provare prima di essere sicuri di aver trovato tutti i
//    numeri primi?
// c) Inizialmente potreste pensare che n/2 è il limite superiore dei test
//    per verificare se un numero è primo, ma in realtà dovete solo spingervi
//    sino alla radice quadrata di n. Riscrivete il programma e fatelo
//    eseguire in tutti e due i modi. Valutate il miglioramento delle prestazioni.

int prime(num);

int main(void)
{
    for(int i = 1; i <= 10000; i++){
        if (prime(i))
	    printf("%d is a prime number\n", i);
    }
}

int prime(num)
{
    int divisor;

    for(divisor = 2; divisor <= (int) floor(sqrt(num)); divisor++){
	if (num % divisor == 0)
	    return 0;
    }

    return 1;

}