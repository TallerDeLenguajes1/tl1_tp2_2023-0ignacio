#include <stdio.h>
#include <time.h>
#include <string.h>

struct compu{
   int velocidad;
   int anio;
   int cantidad;
   char tipo_cpu[10];
}typedef compu;

void mostraPcs(compu pcs[]);
void masVieja(compu pcs[]);
void masVeloz(compu pcs[]);

int main() {
   char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
   int i, aux = 0;
   compu pcs[5];

   printf("Entrada de pcs:\n");
   for(i = 0; i < 5; i++){
      printf("Ingrese los datos para la pc %d\n", ++i);
      i--;
      printf("Velocidad del procesador: ");
      scanf("%d", &pcs[i].velocidad);
      printf("\nAnio de fabricacion: ");
      scanf("%d", &pcs[i].anio);
      printf("\nCantidad de pcs: ");
      scanf("%d", &pcs[i].cantidad);
      printf("\n0 - Intel\n1 - AMD\n2 - Celeron\n3 - Athlon\n4 - Core\n5 - Pentium\nElija de una de las opciones para el tipo de procesador: ");
      scanf("%d", &aux);
      strcpy(pcs[i].tipo_cpu, tipos[aux]);
   }

   mostraPcs(pcs);
   masVeloz(pcs);
   masVieja(pcs);

   return 0;
}

void mostraPcs(compu pcs[]){
   int i;
   printf("Pcs disponibles:\n");
   for(i = 0; i < 5; i++){
      printf("Datos de la pc %d\n", ++i);
      i--;
      printf("Velocidad del procesador: %d Hz", pcs[i].velocidad);
      printf("\nAnio de fabricacion: %d", pcs[i].anio);
      printf("\nCantidad de pcs: %d", pcs[i].cantidad);
      printf("\nTipo de procesador: ");
      puts(pcs[i].tipo_cpu);
      printf("\n");
   }
}

void masVieja(compu pcs[]){
   int aux = 3000, cont = 0;
   for (int i = 0; i < 5; i++){
      if(pcs[i].anio < aux){
         aux = cont;
      }
      cont++;
   }
   printf("Datos de la pc mas vieja:\n");
   printf("Velocidad del procesador: %d Hz", pcs[cont].velocidad);
   printf("\nAnio de fabricacion: %d", pcs[cont].anio);
   printf("\nCantidad de pcs: %d", pcs[cont].cantidad);
   printf("\nTipo de procesador: ");
   puts(pcs[cont].tipo_cpu);
}

void masVeloz(compu pcs[]){
   int aux = 0, cont = 0;
   for (int i = 0; i < 5; i++){
      if(pcs[i].velocidad > aux){
         aux = cont;
      }
      cont++;
   }
   printf("Datos de la pc mas veloz:\n");
   printf("Velocidad del procesador: %d Hz", pcs[cont].velocidad);
   printf("\nAnio de fabricacion: %d", pcs[cont].anio);
   printf("\nCantidad de pcs: %d", pcs[cont].cantidad);
   printf("\nTipo de procesador: ");
   puts(pcs[cont].tipo_cpu);
}
