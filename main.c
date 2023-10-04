#include <stdio.h>
#define MAX 10

void ordenaBolha(int *vetor) {
  int aux;
  for (int i = (MAX - 1); i > 1; i--) {
    for (int j = 0; j < i; j++) {
      if (vetor[j] > vetor[j + 1]) {
        aux = vetor[j];
        vetor[j] = vetor[j + 1];
        vetor[j + 1] = aux;
      }
    }
  }
}

void imprimeVetor(int *vetor) {
  for (int i = 0; i < MAX; i++)
    printf("%d  ", vetor[i]);
  printf("\n");
}

void main() {
  int vet[10] = {2, 3, 7, 9, 0, 1, 4, 8, 6, 5};
  ordenaBolha(vet);
  imprimeVetor(vet);
}
