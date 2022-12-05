#include <assert.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

void sousSuite(int *suite, int p) {
	// TODO: afficher la taille maximale d'une sous suite
}

int main(int argc, char** argv) {
	int p;
  scanf("%d", &p);
  int* suite = (int*)malloc(p * sizeof(int));
  for (int i = 0; i < p; ++i) {
    scanf("%d", &suite[i]);
	}
  sousSuite(suite, p);
}
