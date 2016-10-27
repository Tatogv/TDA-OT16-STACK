/**********************************************************
 * @author Carlos Almeraz, Edgar Ortiz, Fernando Gonzalez *
 * Calculadore de Stack                                   *
 * @date 27/10/2016                                       *
 * @version 1.0.1                                         *
 **********************************************************
 * @brief Este archivo contiene la interfaz de una        *
 * calculadora de stack.                                  *
 **********************************************************/

#include <stdio.h>
#include <stdlib.h>

extern int push(int *stack, int pos, int val);
extern int pop(int *stack, int pos);
extern int peek(int *stack, int pos);
extern void print(int *stack);
extern int suma(int a, int b);
extern int resta(int a, int b);
extern int multiplicacion(int a, int b);
extern int division(int a, int b);

int main(void){
  int stack[5], pos = -1, opt = -1, val = 0, in = 0, a, b, res, x;
  printf("***BIENVENIDO AL STACK***\n");
  while (in == 0){
    printf("      ¿Que desea hacer?\n1) Insertar al Stack\n2) Sacar del Stack\n3) Ver el ultimo valor insertado\n4) Imprimir el Stack\n5) Suma\n6) Resta\n7) Multiplicacion\n8) Division\n9) Salir\n$ ");
    scanf("%d",&opt);
    switch(opt){

      case 1:
      pos++;
      printf("Que valor desea ingresar?\n$ ");
      x = scanf("%d",&val);
      if(x == 0)
      {
        printf("ERROR.\n");
        exit(0);
      }
      else
      {
        push(stack, pos, val);
        printf("\nSe ingreso el valor -> %d\n", val);
      }
      break;

      case 2:
      val=pop(stack, pos);
      pos--;
      printf("\nSe saco el valor-> %d\n", val);
      break;

      case 3:
      val=peek(stack, pos);
      printf("\nEl ultimo valor agregado es -> %d\n", val);
      break;

      case 4:
      print(stack);
      break;

      case 5:
      a = pop(stack, pos);
      printf("%d\n", a);
      pos--;
      b = pop(stack, pos);
      printf("%d\n", b);
      pos --;
      res = suma(a, b);
      printf("%d\n", res);
      pos ++;
      push(stack, pos, res);
      break;

      case 6:
      a = pop(stack, pos);
      printf("%d\n", a);
      pos--;
      b = pop(stack, pos);
      printf("%d\n", b);
      pos --;
      res = resta(a, b);
      printf("%d\n", res);
      pos ++;
      push(stack, pos, res);
      break;

      case 7:
      a = pop(stack, pos);
      printf("%d\n", a);
      pos--;
      b = pop(stack, pos);
      printf("%d\n", b);
      pos --;
      res = multiplicacion(a, b);
      printf("%d\n", res);
      pos ++;
      push(stack, pos, res);
      break;

      case 8:
      a = pop(stack, pos);
      printf("%d\n", a);
      pos--;
      b = pop(stack, pos);
      printf("%d\n", b);
      pos --;
      res = division(a, b);
      printf("%d\n", res);
      pos ++;
      push(stack, pos, res);
      break;

      case 9:
      in=1;
      break;

      default:
      printf("\nERROR... opcion invalida, vuelva a intentar...\n");
      break;
    }
  }
  return 0;
}
