#include <stdio.h>
#include <string.h>

int main() {
    char str1[101], str2[101];
    
    scanf("%s %s", str1, str2);
    
    if (strlen(str1) != strlen(str2)) {
        printf("BERBEDA\n");
    } else {
        if (strcmp(str1, str2) == 0) {
            printf("IDENTIK\n");
        } else {
            printf("MIRIP\n");
        }
    }
    
    return 0;
}