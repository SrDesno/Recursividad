#include <iostream>

int sumIterative(int n){
  int sum=0;
  for (int i=1; i<=n; i++){
    sum=sum+i;
  }
  return sum;
}

int sumRecursive(int n){
  if (n>1){
    return n+sumRecursive(n-1);
  }
  else{
    return 1;
  }
}

int sumFormula(int n){
  return n*(n+1)/2;
}

int main(){
  std::cout<<"La suma de los valores es de"<<sumIterative(4)<<std::endl;
  std::cout<<"La suma de los valores es de"<<sumRecursive(4)<<std::endl;
  std::cout<<"La suma de los valores es de"<<sumFormula(4)<<std::endl;
}

int fobiIterative(int n){
  int interval=1;
  int vector[n]={};
  for (int i=1; i<=n; i++){
    buffer=buffer+(buffer-interval);
    interval=buffer;
    std::cout<<buffer<<std::endl;
  }
}