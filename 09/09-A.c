#include <stdio.h>
#include <string.h>

int main() {
    char s1[50], s2[50], s3[100];
    int i, ind;
    printf("Enter the original string and substring: ");
    scanf("%s %s", s1, s2);
    printf("Where to insert the substring: ");
    scanf("%d", &ind);
    for (i = 0; i < ind && s1[i] != '\0'; i++) {
        s3[i] = s1[i];
    }
    strcat(s3, s2);
    strcat(s3, s1 + ind);
    printf("The modified string is: %s\n", s3);
    return 0;
}
