#include <stdio.h>

int main(void)
{
  char nome, sesso;
  printf ("digiti il suo nome e sesso (digiti 1 se e' uomo, 2 se e' donna): ");
  scanf("%c, %c", &nome, &sesso);
  if (sesso == 1)
  {
    printf ("Egregio Signor %c",nome);
  }
  if (sesso == 2)
  {
    printf ("Gentilissima signora %c",nome);
  }
  return 0;
}
