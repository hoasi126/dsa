
#include <math.h>
#include<stdio.h>
    int main(){
        int a, b, c;
        float delta, x1, x2;
        printf("nhập vào giá trị của a\n");
        scanf("%d", &a);
        while (a == 0) {
            printf("giá trị nhập vào không hợp lệ\n");
            printf("nhập vào giá trị của a\n");
            scanf("%d", &a);
        }
        printf("nhập vào giá trị của b\n");
        scanf("%d", &b);
        printf("nhập vào giá trị của c\n");
        scanf("%d", &c);
        delta = b * b - 4 * a * c;
        if (delta < 0) {
            printf("phương trình đã cho vô nghiệm");
        }
        else if (delta == 0) {
            x1 = -b / (2 * a);
            printf("phương trình đã cho có nghiệm kép x1 = x2 = %0.2f", x1);
        }
        else {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("phương trình đã cho có 2 nghiệm nghiệm phân biệt là x1 =%0.2f x2 = %0.2f\n", x1, x2);
        }
      return 0;
}
