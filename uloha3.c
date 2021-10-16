#include <stdio.h>
int main(){
    char s[100];
    int c = 0;
    /*              A   E   I   O   U   Y   */
    int check[6] = {97,101,105,111,117,121};
    int a=0,e=0,i=0,o=0,u=0,y=0;
    scanf("%s",&s);
    do{
        for (int g=0; g<6; g++){
            if (s[c] == check[g]){
                if(check[g] == 'a'){
                    a++;
                }
                if(check[g] == 'e'){
                    e++;
                }
                if(check[g] == 'i'){
                    i++;
                }
                if(check[g] == 'o'){
                    o++;
                }
                if(check[g] == 'u'){
                    u++;
                }
                if(check[g] == 'y'){
                    y++;
                }
            }
        }
        c++;
    }while(s[c] != '\0');
    printf(" a - %d" "\n e - %d" "\n i - %d""\n o - %d""\n u - %d""\n y - %d",a,e,i,o,u,y);
    return 0;
}
