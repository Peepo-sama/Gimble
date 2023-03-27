#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    float scommessa;
    char semi[4][10] = {"cuori", "picche", "fiori", "quadri"};
    int valore, scelta_seme, scelta_numero;
    char indovinato[10], seme[10], numero[10], scelta_si_no;

    // Inizializza il generatore di numeri casuali
srand(time(NULL));

// Chiedi al giocatore di scommettere una somma di denaro
printf("Inserisci la tua scommessa: ");
scanf("%f", &scommessa);

// Seleziona una carta casuale dal mazzo
valore = rand() % 13 + 1;
scelta_seme = rand() % 4;
if (rand() < RAND_MAX / 4) {
    // La probabilità è del 25%
    printf("La probabilità è del 25%%\n");
} else {
    // La probabilità è del 75%
    printf("La probabilità è del 25%%\n");
}

strcpy(seme, semi[scelta_seme]);

// Chiedi al giocatore di indovinare il seme della carta
printf("Indovina il seme della carta (1: cuori, 2: picche, 3: fiori, 4: quadri): ");
scanf("%d", &scelta_seme);

switch(scelta_seme) {
    case 1:
        strcpy(indovinato, "cuori");
        break;
    case 2:
        strcpy(indovinato, "picche");
        break;
    case 3:
        strcpy(indovinato, "fiori");
        break;
    case 4:
        strcpy(indovinato, "quadri");
        break;
    default:
        printf("Scelta non valida. Il gioco termina.\n");
        return 0;
}

// Verifica se il giocatore ha indovinato correttamente
if (strcmp(seme, indovinato) == 0) {
    printf("Hai indovinato il seme! Hai vinto %.2f$\n", scommessa * 2);
    printf("Vuoi continuare? (s/n) ");
    scanf(" %c", &scelta_si_no);

    if (scelta_si_no == 's') {
        // Richiedi la scommessa iniziale per continuare a giocare
        printf("Inserisci l'importo: ");
        scanf("%f", &scommessa);

        valore = rand() % 13 + 1;
        scelta_seme = rand() % 4;
        if (rand() < RAND_MAX / 13) {
            printf("La probabilità è del 7,7%%\n");
        } else {
            printf("La probabilità è del 7,7%%\n");
        }

        strcpy(numero, semi[valore]);

        // Chiedi al giocatore di indovinare il numero della carta
            printf("Indovina il numero della carta (1: Ass, 2, 3, 4, 5, 6, 7, 8, 9, 10 ,11: J, 12: Q, 13: K): ");
            scanf("%d", &scelta_numero);
            switch(scelta_numero) {
                case 1:
                    strcpy(indovinato, "Ass");
                    break;
                case 2:
                    strcpy(indovinato, "2");
                    break;
                case 3:
                    strcpy(indovinato, "3");
                    break;
                case 4:
                    strcpy(indovinato, "4");
                    break;
                case 5:
                    strcpy(indovinato, "5");
                    break;
                case 6:
                    strcpy(indovinato, "6");
                    break;
                case 7:
                    strcpy(indovinato, "7");
                    break;
                case 8:
                    strcpy(indovinato, "8");
                    break;
                case 9:
                    strcpy(indovinato, "9");
                    break;
                case 10:
                    strcpy(indovinato, "10");
                    break;
                case 11:
                    strcpy(indovinato, "J");
                    break;
                case 12:
                    strcpy(indovinato, "Q");
                    break;
                case 13:
                    strcpy(indovinato, "K");
                    break;
                default:
                    printf("Scelta non valida. Il gioco termina.");
                return 0;
                }
        if (valore == scelta_numero) {
            printf("Hai indovinato il numero! Hai vinto %.2f$\n", scommessa * 10 );
        } else {
            printf("Mi dispiace, hai perso.\n");
        }
    }
        } else {
    printf("Vuoi continuare? (s/n) ");
    scanf(" %c", &scelta_si_no);

    if (scelta_si_no == 's') {
        // Richiedi la scommessa iniziale per continuare a giocare
        printf("Inserisci l'importo: ");
        scanf("%f", &scommessa);

        valore = rand() % 13 + 1;
        scelta_seme = rand() % 4;
        if (rand() < RAND_MAX / 13) {
            printf("La probabilità è del 7,7%%\n");
        } else {
            printf("La probabilità è del 7,7%%\n");
        }

        strcpy(numero, semi[valore]);

        // Chiedi al giocatore di indovinare il numero della carta
            printf("Indovina il numero della carta (1: Ass, 2, 3, 4, 5, 6, 7, 8, 9, 10 ,11: J, 12: Q, 13: K): ");
            scanf("%d", &scelta_numero);
            switch(scelta_numero) {
                case 1:
                    strcpy(indovinato, "Ass");
                    break;
                case 2:
                    strcpy(indovinato, "2");
                    break;
                case 3:
                    strcpy(indovinato, "3");
                    break;
                case 4:
                    strcpy(indovinato, "4");
                    break;
                case 5:
                    strcpy(indovinato, "5");
                    break;
                case 6:
                    strcpy(indovinato, "6");
                    break;
                case 7:
                    strcpy(indovinato, "7");
                    break;
                case 8:
                    strcpy(indovinato, "8");
                    break;
                case 9:
                    strcpy(indovinato, "9");
                    break;
                case 10:
                    strcpy(indovinato, "10");
                    break;
                case 11:
                    strcpy(indovinato, "J");
                    break;
                case 12:
                    strcpy(indovinato, "Q");
                    break;
                case 13:
                    strcpy(indovinato, "K");
                    break;
                default:
                    printf("Scelta non valida. Il gioco termina.");
                return 0;
                }
        if (valore == scelta_numero) {
            printf("Hai indovinato il numero! Hai vinto %.2f$\n", scommessa * 25 );
        } else {
            printf("Mi dispiace, hai perso.\n");
        }
    }
    return 0;
        }
}
