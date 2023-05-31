#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int v1 = 0, v2 = 0, vb = 0;
  char v;

  system ("clear");
  
  do { //faz isso até o voto for F
    printf("1 - Voto para o candidato 1\n"); // "Menu"
    printf("2 - Voto para o candidato 2\n");
    printf("B - Voto em branco\n\n");
    
    printf("coloque seu voto: ");
    scanf("%c%*c",&v);

    system ("clear"); // apaga para a proxima pessoa não ver

    switch (v) { // qual o valor da variavel "v"
      case '1':
        v1++;
        break;
      case '2':
        v2++;
        break;
      case 'B':
        vb++;
        break;
      case 'F':
        break;        
      default:
        printf("valor errado, clique enter para votar");

        getchar(); 

        system ("clear");
    }
  } while (v != 'F');

  printf("Votos do Candidato 1: %i\n",v1);
  printf("Votos do Candidato 2: %i\n",v2);
  printf("Votos em Branco: %i\n\n",vb);

  if (v1 > v2){
    v1 = v1 + vb;
    printf("o Candidato 1 Ganhou com %i votos por causa dos votos em branco",v1);
  }
  else 
    if (v2 > v1){
      v2 = v2 + vb;
      printf("O Candidato 2 Ganhou com %i votos por causa dos votos em branco",v2);
    }
    else 
      printf("aconteceu um empate entre o Candidato 1 e 2");

  return 0;
}