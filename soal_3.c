#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#include <stdio.h>

int is_prime(int n) {
    if (n <= 1) return 0; 
    if (n == 2) return 1;  
    if (n % 2 == 0) return 0;
    
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return 0;  
    }
    return 1;
}

int main() {
    int n;
    
    scanf("%d", &n);
    
    if (is_prime(n))
        printf("PRIMA\n");
    else
        printf("BUKAN\n");
    
    return 0;
}
