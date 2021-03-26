/* statheres.c: Programma pou deixnei tin xrisi statherwn */

#include <stdio.h> // 1.grafoume ta arxeia kefalidas

#define N 100      // 2.grafoume odigies define statherwn, afto simainei to N exei timi 100

// 3. edw mporoume na orisoume katholikes metavlites (global), tha tis apofevgoume

// 4. edw mporoume na orisoume prwtotipa sinartisewn 

main()
{
    // 5.1 dilwsi statherwn kai metavlitwn tis main
    int i,sum;             // metavlites
    const int number=10;   // statheres - sos otan dilwnw kati me "const" paw epitopou kai dilwnw kai tin timi tou
    
    // 5.2 entoles tis main
    sum=0;
    for (i=number; i<=N; i++)
        sum=sum+i;
        
    printf("To athroisma twn arithmwn [%d..%d] einai %d", number, N, sum);
        
}
// 6. edw tha exoume ta swmata twn sinartisewn