// Es. 3.46: es.03_46.c
// Calcolare la crescita della popolazione mondiale
// Usate il web per conoscere l'attuale popolazione mondiale e la stima
// della sua crescita annuale. Scrivete un'applicazione che legga questi
// valori, poi stampi la popolazione mondiale stimata dopo uno, due, tre,
// quattro e cinque anni.
#include <stdio.h>

int main(void)
{
    float popolazione2024 = 7.888;
    float crescitaAnnua = 0.9;
    float _1anno, _2anni, _3anni, _4anni, _5anni;

    printf("La popolazione mondiale al 2024 è di %f miliardi di persone.\n", popolazione2024);
    printf("La crescita annua è del: %f percento\n", crescitaAnnua);

    _1anno = popolazione2024 * crescitaAnnua;
    _2anni = _1anno * crescitaAnnua;
    _3anni = _2anni * crescitaAnnua;
    _4anni = _3anni * crescitaAnnua;
    _5anni = _4anni * crescitaAnnua;
    printf("La popolazione mondiale al 2025 sarà di %f miliardi di persone.\n", _1anno);
    printf("La popolazione mondiale al 2026 sarà di %f miliardi di persone.\n", _2anni);
    printf("La popolazione mondiale al 2027 sarà di %f miliardi di persone.\n", _3anni);
    printf("La popolazione mondiale al 2028 sarà di %f miliardi di persone.\n", _4anni);
    printf("La popolazione mondiale al 2029 sarà di %f miliardi di persone.\n", _5anni);
}