#include <stdio.h>

//programa cargo-salário

registro(int cargo,int falta,int he){
  
  double sb; //salario base
  double sh; //salario hora
  double salario; //salario final
  double hef; //he efetiva que sera paga no mês
  double banco; //banco de horas extras
  
  switch(cargo){
    case 1:
      sb=10000;break;
    case 2:
      sb=8000;break;
    case 3:
      sb=5000;break;
    case 4:
      sb=3000;break;
    case 5:
      sb=2000;break;
  }
  
  switch(cargo){
    case 1:
      printf("Cargo: Diretor\n");break;
    case 2:
      printf("Cargo: Gerente\n");break;
    case 3:
      printf("Cargo: Engenheiro\n");break;
    case 4:
      printf("Cargo: Técnico\n");break;
    case 5:
      printf("Cargo: Operador\n");break;
  }
  
  sh=(sb/160);
  
  if(he>=40){hef=40;banco=(he-40);}//limete de 40 he no mês.
  else{hef=(double)he;}
  
  salario = sb-((double)falta*8*sh)+(hef*(sh+40));
  
  
  printf("# de faltas: %d\n",falta);
  printf("# de horas-extra: %d\n",he);
  printf("Desconto: %.2lf\n",(falta*8*sh));
  printf("Acrescimos: %.2lf\n",(hef*(sh+40)));
  if(salario>0){
  printf("Salário: %.2lf\n",salario);
  }
  else{
  printf("Salário: 0");
  }
}

int main() {
  int cargo;
  int falta;
  int he;
  printf("Bem-vindo ao terminal contra-cheque:\n");
  printf("Entre com um cargo:\n");
  printf("1 - Diretor:\n 2 - Gerente:\n 3 - Engenheiro \n 4- Técnico \n 5 - Operador");
  scanf("%d:",&cargo);
  printf("Entre com o número falta:\n");
  scanf("%d:",&falta);
  printf("Entre com o número he:\n");
  scanf("%d:",&he);
  registro(cargo,falta,he);
}