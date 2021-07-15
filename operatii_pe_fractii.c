#include <stdio.h>

int gcd(int n, int m)
{
    int divizor, rest;

    while (n != 0)
    {
        rest = m % n;
        m = n;
        n = rest;
    }

    divizor = m;

    return divizor;
}

int main () {
   
    int a_numar, b_numar, c_numar, d_numar, a_c_inmultite,b_d_inmultite,numitor_final,numarator_final;
    int a_numar_nou, b_numar_nou, c_numar_nou, d_numar_nou;
    int numitor_amplificat,numarator_amplificat,numitor_amplificat_simplificat,numarator_amplificat_simplificat;

    printf("introduceti o fractie: ");
    scanf("%d/%d %d/%d", &a_numar, &b_numar, &c_numar, &d_numar);

    
    a_numar_nou = a_numar / gcd(a_numar, b_numar);
    b_numar_nou = b_numar / gcd(a_numar, b_numar);
    c_numar_nou = c_numar / gcd(c_numar, d_numar);
    d_numar_nou = d_numar / gcd(c_numar, d_numar);

    a_c_inmultite = c_numar_nou*a_numar_nou;
    b_d_inmultite = b_numar_nou*d_numar_nou;

    numitor_final = a_c_inmultite / gcd(a_c_inmultite,b_d_inmultite);
    numarator_final = b_d_inmultite / gcd(a_c_inmultite,b_d_inmultite);

    numitor_amplificat = a_numar*d_numar+b_numar*c_numar;
    numarator_amplificat = b_numar*d_numar;

    numitor_amplificat_simplificat = numitor_amplificat / gcd(numitor_amplificat,numarator_amplificat);
    numarator_amplificat_simplificat = numarator_amplificat / gcd(numitor_amplificat,numarator_amplificat);
    



    printf("Inmultite arata asa: %d*%d/%d*%d",a_numar,c_numar,b_numar,d_numar);
    printf("\nSimplificata: %d/%d",numitor_final,numarator_final);
    printf("\nSuma fractiilor este: %d/%d ",numitor_amplificat,numarator_amplificat);
    printf("\nSuma simplificata este: %d/%d ",numitor_amplificat_simplificat,numarator_amplificat_simplificat);
    
    scanf("%d/%d si %d/%d", &a_numar, &b_numar, &c_numar, &d_numar);
}