#include <stdio.h>
int main(){
  int n[] ={1,2,3,4,5,6,7,8,9};
  int number = 0;
  int b[100];
  int length = sizeof(n) / sizeof(n[0]);
  for(int i = 0;i < length ;i++) {
    if(n[i]%2==0){
      b[number] = n[i];
      number++;
    }
  }
    printf("Số chẵn trong dãy là ");
    for(int j = 0;j < number;j++) {
      printf("%d ",b[j]);
    }
  }
