#include <stdio.h>
#include <limits.h>

int main(void) {

    printf("Minimal-Wert des Typs CHAR  = %d\n", CHAR_MIN);
    printf("Maximal-Wert des Typs CHAR  =  %d\n", CHAR_MAX);
    printf("Minimal-Wert des Typs SHORT = %d\n", SHRT_MIN);
    printf("Maximal-Wert des Typs SHORT =  %d\n", SHRT_MAX);
    printf("Minimal-Wert des Typs INT   = %d\n", INT_MIN);
    printf("Maximal-Wert des Typs INT   =  %d\n", INT_MAX);
    printf("=================================================\n");
    //printf("Minimal-Wert des Typs UNSIGNED CHAR = 0 bzw. existiert nicht\n");
    printf("Maximal-Wert des Typs UNSIGNED CHAR  = %d\n", UCHAR_MAX);
    //printf("Minimal-Wert des Typs UNSIGNED SHORT = 0 bzw. existiert nicht\n");
    printf("Maximal-Wert des Typs UNSIGNED SHORT = %d\n", USHRT_MAX);
    //printf("Minimal-Wert des Typs UNSIGNED INT = 0 bzw. existiert nicht\n");
    printf("Maximal-Wert des Typs UNSIGNED INT   = %u\n", UINT_MAX);
    printf("\n");
    printf("UNSIGNED CHAR, UNSIGNED SHORT und UNSIGNED INT existieren\n");
    printf("als solche nicht. Ihr Startwert ist jeweils 0.\n");

    return 0;
}