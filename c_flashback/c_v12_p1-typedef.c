/* typedef.c: Paradeigma xrisis tis entolis typedef */

//Me tin entoli "typedef" orizoume oti o tupos dedomenwn me onoma "neo_onoma_TD" tha exei akribws tin idia
//simperifora me ton iparxonta typo dedomenwn me onoma "palio_onoma_TD"

//paradeigma: typdef int akeraios;
//to "akeraios" mporei na xrisimopoiithei anti tou "int" pleon

//to "typedef"  prepei na vrisketai akrivws meta tis odigies "#include"

#include <stdio.h>

typedef int akeraios;

int main()
{
    akeraios x,y,z;
    
    printf("Dwste enan akeraio: ");
    scanf("%d", &x);
    printf("Dwste akomi enan akeraio: ");
    scanf("%d", &y);
    z=x+y;
    printf("To athroisma tous einai: %d", z);
    
    return 0;
}
