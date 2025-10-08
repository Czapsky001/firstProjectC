#include <stdio.h>
#include <stdlib.h>

int main() {
    system("chcp 65001 > NUL");
    printf("Hello World\n");
    printf("Witaj Świecie\u263B\n");
    printf("Naciśnij Enter, aby zakończyć...");
    getchar();
    return 0;
}
