/* sizes.c: Provallei stin othoni ta megethi se bytes twn tipwn dedomenwn */

// o telestis "sizeof" epistrefei ta bytes tou typoy pou dexetai ws orisma
#include <stdio.h>

main()
{
    printf("\nTa bytes enos char einai: %d", sizeof(char)); //to "%d" tha antikatastathi apo tin timi tou sizeof(char)
    printf("\nTa bytes enos short einai: %d", sizeof(short));
    printf("\nTa bytes enos int einai: %d", sizeof(int));
    printf("\nTa bytes enos long einai: %d", sizeof(long));
    
    printf("\nTa bytes enos unsigned short einai: %d", sizeof(unsigned short));
    printf("\nTa bytes enos unsigned int einai: %d", sizeof(unsigned int));
    printf("\nTa bytes enos unsigned long einai: %d", sizeof(unsigned long));
    
    printf("\nTa bytes enos float einai: %d", sizeof(float));
    printf("\nTa bytes enos double einai: %d", sizeof(double));

}