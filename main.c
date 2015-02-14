#include <stdio.h>
#include <stdlib.h>

int potenzaIterativa(int base, int esponente);
int potenzaRicorsiva(int base, int esponente);

int main(int argc, char** argv) {
    int base,esponente;
    int rIterativo, rRicorsivo;
    
    printf("Inserisci la base (intera): ");
    scanf("%d", &base);
    printf("Inserisci l'esponente (intero non ngeativo): ");
    scanf("%d", &esponente);
    
    rIterativo = potenzaIterativa(base, esponente);
    rRicorsivo = potenzaRicorsiva(base, esponente);
    
    printf("%d^%d = %d (formulazione iterativa)\n", base, esponente, rIterativo);
    printf("%d^%d = %d (formulazione ricorsiva)\n", base, esponente, rRicorsivo);
    return (EXIT_SUCCESS);
}

int potenzaIterativa(int base, int esponente) {
    int risultatoPotenzaI;
    risultatoPotenzaI=1;
    while(esponente>0){
        risultatoPotenzaI=risultatoPotenzaI*base;
        esponente--;
}
    return risultatoPotenzaI;
}
int potenzaRicorsiva(int base, int esponente) {
    int risultatoPotenzaR;
    risultatoPotenzaR=1;
    if (esponente==0){
        return 1;
    }
    
    else {
        risultatoPotenzaR=base*potenzaRicorsiva(base,esponente-1);
        }
    return risultatoPotenzaR;
}