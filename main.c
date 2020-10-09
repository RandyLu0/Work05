#include <stdio.h>
int main(){
    int a;
    
    char c = 'c';
    int i = 10;
    long l = 4520;

    char *cp = &c;
    int *ip = &i;
    long *lp = &l;

    unsigned int ui = 65536;
    int *u1 = &ui;
    char *u2 = &ui;

    printf("&c in hex: %p\n",&c);
    printf("&c in dec: %ul\n",&c);
    printf("&i in hex: %p\n",&i);
    printf("&i in dec: %ul\n",&i);
    printf("&l in hex: %p\n",&l);
    printf("&l in dec: %ul\n",&l);

    printf("cp: %p\n",cp);
    printf("ip: %p\n",ip);
    printf("lp: %p\n",lp);

    *cp = 'b';
    *ip = 11;
    *lp = 150;

    printf("c: %c\n",c);
    printf("i: %i\n",i);
    printf("l: %ld\n",l);

    printf("u1: %p u1 points to: %u\n",u1,*u1);
    printf("u2: %p u2 points to: %u\n",u2,*u2);

    printf("ui in dec: %u\n",ui);
    printf("ui in hex: %x\n",ui);

    for(a = 0; a < 4; a++){
        printf("%d: %hhu\n",a+1,*u2);
        u2++;
    }

    u2 = &ui;
    for(a = 0; a < 4; a++){
        ++*u2;
        u2++;
        printf("ui in dec: %u\n",ui);
        printf("ui in hex: %x\n",ui);
    }

    u2 = &ui;
    for(a = 0; a < 4; a++){
        printf("%d: %hhu\n",a+1,*u2);
        u2++;
    }

    u2 = &ui;
    for(a = 0; a < 4; a++){
        *u2 += 16;
        u2++;
        printf("ui in dec: %u\n",ui);
        printf("ui in hex: %x\n",ui);
    }

    return 0;
}
