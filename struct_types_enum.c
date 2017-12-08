#include <stdio.h>

typedef enum marque_vago // maniere d'avoir des constantes enumerees (couleurs, oui/non, marques...)
{
  PEUGEOT, // VIRGULE
  RENAULT, // VIRGULE
  CITROEN, //VIRGULE
  TOYOTA  // PAS VIRGULE
} Marque;

int main()
{
  Marque voiture1 = TOYOTA;

  return 0;
}