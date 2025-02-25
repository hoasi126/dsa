#include<stdio.h>
int main(){
  float time;
  float count = 0;
  float s;
  printf("Nhập quãng đường cần đi(km)\n");
  scanf("%f",&s);
 printf("Nhập thời gian chờ(phút)\n");
  scanf("%f",&time);
  if(s > 2){
    count =count + 5 + 0.15 *( (s - 2) / 0.1);
  }else {
    count += 5;
  }
  if(time > 30){
    count = count + 3 + 0.5 *( (time - 30) / 10);
  }else{
    count += 3;
  }
printf("Tổng số tiền cần trả là: %0.2f ",count);
}