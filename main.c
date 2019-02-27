#include <stdio.h>
#include <stdlib.h>

int plus(int a, int b) { return a + b; }
int minus(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divided(int a, int b) { return a / b; }
int (*p[4]) (int a,int b);
int main()
{
  	p[0] = plus;
        p[1] = minus;
        p[2] = multiply;
        p[3] = divided;
	int a, c;
	short d=0;
	char b;
	printf("key a Function \nEX: 1 + 1\n");
	scanf("%i %c %i", &a, &b, &c);
	switch(b){
		case '+':
			d=0;
			break;
		case '-':
			d=1;
			break;
		case '*':
			d=2;
			break;
		case '/':
			d=3;
			break;
		default :
			d=0;
			break;
	}
	printf("%d %c %d = %d\n", a, b, c,(*p[d]) (a, c));
	return 0;
}
