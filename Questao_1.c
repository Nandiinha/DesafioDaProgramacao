#include <stdio.h>
#include <locale.h>

void Escada(int degraus);

int main()
{
  setlocale(LC_ALL, "ptb");
  int degraus;

  printf("=*=*=*=*=*=*=ESCADA=*=*=*=*=*=*=\n\n");
  printf("Número de degraus da escada: ");
  scanf("%d", &degraus);
  printf("\n");
  Escada(degraus);

  return 0;
}

void Escada(int degraus)
{
  int aux, espaco, estrela;

  for (aux = 1; aux <= degraus; aux++)
  {
    for (espaco = aux; espaco <= degraus; espaco++)
      printf(" ");
    for (estrela = 1; estrela <= aux; estrela++)
      printf("*");
    printf("\n");
  }
}