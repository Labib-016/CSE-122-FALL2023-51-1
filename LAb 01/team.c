#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);
 
    int problems_solved = 0;
    for (int i = 0; i < n; i++) {
        int petya, vasya, tonya;
        scanf("%d %d %d", &petya, &vasya, &tonya);
        int sum = petya + vasya + tonya;
        if (sum >= 2) {
            problems_solved++;
        }
    }
 
    printf("%d\n", problems_solved);
    return 0;
}