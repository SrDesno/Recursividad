#include <iostream>

int fibanacciIterative(int n){
  if (n==1 || n==2)  {
    return 1;
  }
  else{
    int f1=1;
    int f2=2;
    for (int i=3; i<n; i++){
      int aux=f2;
      f2=f2+f1;
      f1=aux;
    }
    return f2;
  }
}

int fibanacciRecursive(int n){
  if (n>2){
    return fibanacciRecursive(n-1)+fibanacciRecursive(n-2);
    }
  else{
    return 1;
  }
}

int bacteriasIterative(int days){
  int bacterias=1;
  for(int i=1; i<=days; i++){
    bacterias=bacterias*(1+1.44);
  }
  return bacterias;
}

int bacteriasRecursive(int days){
  if (days>1){
    return bacteriasRecursive(days-1)*(1+1.44);
    }
  else{
    return 1;
  }
}

float investmentIterative(float balance, int months){
  for (int i=1; i<=months; i++){
    balance=balance*(1+18.75/100);
  }
  return balance;
}

float investmentRecursive(float balance, int months){
  if (months>0){
    return investmentRecursive(balance, months-1)*(1+18.75/100);
  }
  else{
    return balance;
  }
  return balance;
}

int main(){
  std::cout<<"La secuencia Fibanacci es:"<<fibanacciIterative(10)<<std::endl;
  std::cout<<"La secuencia Fibanacci es:"<<fibanacciRecursive(10)<<std::endl;
  std::cout<<"El numero de bacterias es:"<<bacteriasIterative(6)<<std::endl;
}