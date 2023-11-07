#include <iostream>
#include <cmath>

int main() {
    printf("Triples pitagoricos:\n");

    for(int a=1; a<=20; a++) {
        for(int b=a; b<=20; b++) {
            int c = sqrt(a*a + b*b);

            if(c*c == a*a + b*b && a+b+c <= 100 && a+b > c) {
                printf("%d - %d - %d\n", a, b, c);
            }
        }
    }

    return 0;
}
