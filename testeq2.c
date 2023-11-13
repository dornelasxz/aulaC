#include <stdio.h>

#define NUM_JOGADORES 11

typedef struct {
    char nome[31];  // Aumentei o tamanho para 31 para acomodar até 30 caracteres
    char posicao;
    int forca;
} Jogador;

double calcularForcaPonderada(Jogador time[]) {
    int forca_goleiro = 0;
    int forca_laterais = 0;
    int forca_zagueiros = 0;
    int forca_volantes = 0;
    int forca_meias = 0;
    int forca_atacantes = 0;

    for (int i = 0; i < NUM_JOGADORES; i++) {
        Jogador jogador = time[i];
        switch (jogador.posicao) {
            case 'G':
                forca_goleiro = jogador.forca;
                break;
            case 'L':
                forca_laterais += jogador.forca;
                break;
            case 'Z':
                forca_zagueiros += jogador.forca;
                break;
            case 'V':
                forca_volantes += jogador.forca;
                break;
            case 'M':
                forca_meias += jogador.forca;
                break;
            case 'A':
                forca_atacantes += jogador.forca;
                break;
        }
    }

    double forca_total = (8 * forca_goleiro + 10 * (forca_laterais) + 5 * (forca_zagueiros) + 8 * (forca_volantes) + 11 * (forca_meias) + 12 * (forca_atacantes)) / 100.0;
    return forca_total;
}

int main() {
    Jogador times[2][NUM_JOGADORES];
    char nome_time[2][31];  // Aumentei o tamanho para 31 para acomodar até 30 caracteres

    for (int i = 0; i < 2; i++) {
        scanf("%s", nome_time[i]);
        for (int j = 0; j < NUM_JOGADORES; j++) {
            scanf("%s %c %d", times[i][j].nome, &times[i][j].posicao, &times[i][j].forca);
        }
    }

    double forca_time1 = calcularForcaPonderada(times[0]);
    double forca_time2 = calcularForcaPonderada(times[1]);

    printf("%s: %.2lf de forca\n", nome_time[0], forca_time1);
    printf("%s: %.2lf de forca\n", nome_time[1], forca_time2);

    if (forca_time1 > forca_time2) {
        printf("%s eh mais forte\n", nome_time[0]);
    } else if (forca_time2 > forca_time1) {
        printf("%s eh mais forte\n", nome_time[1]);
    } else {
        printf("Os times tem a mesma forca\n");
    }

    return 0;
}
