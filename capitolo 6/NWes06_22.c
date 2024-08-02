// Es. 6.22: es06_22.c
// Totale delle Vendite
#include <stdio.h>
#define AGENT 4
#define PRODUCT 5

int main(void)
{
    int sales[AGENT][PRODUCT] = {{0}, {0}};

    int agentCode;
    int productCode;
    int sold;


    printf("Enter agent's code(-1 to exit): ");
    scanf("%d", &agentCode);


    while(agentCode != -1){

    printf("Enter product code: ");
	scanf("%d", &productCode);

	printf("Enter number of sold products for seller %d, product %d: ", agentCode, productCode);
	scanf("%d", &sold);

	sales[agentCode][productCode] += sold;

    printf("Enter agent's code(-1 to exit): ");
    scanf("%d", &agentCode);

    }

    int oneone = sales[1][1];
    int onetwo = sales[1][2];
    int onethree = sales[1][3];
    int onefour = sales[1][4];
    int onefive = sales[1][5];
    int totrow1 = oneone + onetwo + onethree + onefour + onefive;
    int twoone = sales[2][1];
    int twotwo =sales[2][2];
    int twothree =sales[2][3];
    int twofour = sales[2][4];
    int twofive = sales[2][5];
    int totrow2 = twoone + twotwo + twothree + twofour + twofive;
    int threeone = sales[3][1];
    int threetwo = sales[3][2];
    int threethree = sales[3][3];
    int threefour = sales[3][4];
    int threefive = sales[3][5];
    int totrow3 = threeone + threetwo + threethree + threefour + threefive;
    int fourone = sales[4][1];
    int fourtwo = sales[4][2];
    int fourthree = sales[4][3];
    int fourfour = sales[4][4];
    int fourfive = sales[4][5];
    int totrow4 = fourone + fourtwo + fourthree + fourfour + fourfive;
    int totrow = totrow1 + totrow2 + totrow3 + totrow4;
    int totcol1 = oneone + twoone + threeone + fourone;
    int totcol2 = onetwo + twotwo + threetwo + fourtwo;
    int totcol3 = onethree + twothree + threethree + fourthree;
    int totcol4 = onefour + twofour + threefour + fourfour;
    int totcol5 = onefive + twofive + threefive + fourfive;
    int totcol = totcol1 + totcol2 + totcol3 + totcol4 + totcol5;

    puts("");
    puts("");

    printf("\tP1\tP2\tP3\tP4\tP5\tTOT\n");

    printf("%s\t%d\t%d\t%d\t%d\t%d\t%d\n", "A1", sales[1][1], sales[1][2], sales[1][3], sales[1][4], sales[1][5], totrow1);
    printf("%s\t%d\t%d\t%d\t%d\t%d\t%d\n", "A2", sales[2][1], sales[2][2], sales[2][3], sales[2][4], sales[2][5], totrow2);
    printf("%s\t%d\t%d\t%d\t%d\t%d\t%d\n", "A3", sales[3][1], sales[3][2], sales[3][3], sales[3][4], sales[3][5], totrow3);
    printf("%s\t%d\t%d\t%d\t%d\t%d\t%d\n", "A4", sales[4][1], sales[4][2], sales[4][3], sales[4][4], sales[4][5], totrow4);
    printf("%s\t%d\t%d\t%d\t%d\t%d\t%d\n", "Tot", totcol1, totcol2, totcol3, totcol4, totcol);
}
