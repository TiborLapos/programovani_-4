#include <stdio.h>

int main() {
    int a, b;
    printf("Zadaj dve cisla:\n");
    scanf("%d %d",&a, &b);
    if ((a % 2 == 0) || (b % 2 == 0)){
        printf(" Zadali ste parne cislo prosim zadajate neparne cislo!\n");
    } else{
        for( int c=0; c < a; c++){
            for (int g=0; g < b; g++){
                if (g == b/2){
                    printf(" * ");
                }
                else if (c == a/2){
                    printf(" * ");
                } else{
                    printf("   ");
                }
            }
            printf("\n");
        }
        return 0;
    }
    return main();
}
