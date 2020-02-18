#include <stdio.h>
#include <stdlib.h>
int main (){
float a,b,c;
char opt;
printf("a.-SUMA\n b.-RESTA\n c.-MULTIPLICACION\n d.-DIVISION\n");
printf("INTRODUCE UNA OPCION");
opt=getchar();
printf("INTRODUCE EL PRIMER OPERANDO");
scanf("%f", &a);
printf("INTRODUCE EL SEGUNDO OPERANDO");
scanf("%f", &b);

switch(opt){
case 'A':
case 'a':
    c=a+b;
    break;
    case 'B':
case 'b':
    c=a-b;
    break;
    case 'C':
case 'c':
    c=a+b;
    break;

    while(b==0);{
        printf("ERROR, EL SEGUNDO OPERANDO NO PUEDE SER 0");
        printf("INTRODUCE EL SEGUNDO OPERANDO:");
        scanf("%f", &b);
    }
    printf("\la division es: %f", c=a/b);
    break;
default:
    printf("ERROR, OPCION INVALIDA");
    opt=='R';
}
if(opt!='R');{
printf("EL RESULTADO ES: %0.2f", c);
}
}
