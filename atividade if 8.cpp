#include <stdio.h>

int main(){
	 float n1, n2;
	 
	 printf("adicione sua 1 nota: ");
	 scanf("%f", &n1);
	 
	 printf("adicione sua 2 nota: ");
	 scanf("%f", &n2);
	 
	 if (n1 >= 0 && n1 <= 10 && n2 >= 0 && n2 <= 10) {
	 	printf ("\nsuas notas foram:%.2f, %.2f\n\nMedia: %.2f", n1, n2, (n1 + n2)/2);
	 }else {
	 	printf("\n\nsua nota deve ser um numero entre 0 e 10");
	 }
}
