/**********************************************************
 * @author Carlos Almeraz, Edgar Ortiz, Fernando Gonzalez *
 * Calculadore de Stack                                   *
 * @date 27/10/2016                                       *
 * @version 1.0.1                                         *
 **********************************************************
 * @brief Este archivo contiene las funciones de una      *
 * calculadora de stack.                                  *
 **********************************************************/

#include <stdio.h>
#include <stdlib.h>


void push (int * stack, int pos, int val){
  stack[pos] = val;
  return;
}

int pop (int * stack, int pos){
  int val = stack[pos];
  stack[pos] = -9999;
  return val;
}

int peek (int * stack, int pos){
  int val = stack[pos];
  return val;
}

void print (int * stack){
  int i;
  for(i=4; i>=0; i--){
    if(stack[i] == -9999)
      printf("\n[   ]");
    else
      printf("\n[ %d  ]",stack[i]);
  }
}

int suma(int a, int b){

  int res;

  res = a + b;

  return res;
}

int resta(int a, int b){

  int res;

  res = a - b;

  return res;
}

int multiplicacion(int a, int b){

  int res;

  res = a * b;

  return res;
}

int division(int a, int b){

  int res;

  res = a / b;

  return res;
}
