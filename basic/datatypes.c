#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int a;
    float b;
    double c;
    char d;
    long e;
    long long f;
    short g;
    unsigned int h;
    unsigned long i;
    unsigned long long j;
    unsigned short k;
    signed int l;
    signed long m;
    signed long long n;
    signed short o;
    signed char p;
    signed long long int q;
    unsigned long long int r;
    long double s;
    long long int t;
    double long u;
    unsigned char v;
    auto int w;

    printf("%d\n", a);

    printf("Size of int: %ld bytes\n", sizeof(a));
    printf("Size of float: %ld bytes\n", sizeof(b));
    printf("Size of double: %ld bytes\n", sizeof(c));
    printf("Size of char: %ld bytes\n", sizeof(d));
    printf("Size of long: %ld bytes\n", sizeof(e));
    printf("Size of long long: %ld bytes\n", sizeof(f));
    printf("Size of short: %ld bytes\n", sizeof(g));
    printf("Size of unsigned int: %ld bytes\n", sizeof(h));
    printf("Size of unsigned long: %ld bytes\n", sizeof(i));
    printf("Size of unsigned long long: %ld bytes\n", sizeof(j));
    printf("Size of unsigned short: %ld bytes\n", sizeof(k));
    printf("Size of signed int: %ld bytes\n", sizeof(l));
    printf("Size of signed long: %ld bytes\n", sizeof(m));
    printf("Size of signed long long: %ld bytes\n", sizeof(n));
    printf("Size of signed short: %ld bytes\n", sizeof(o));
    printf("Size of signed char: %ld bytes\n", sizeof(p));
    printf("Size of signed long long int: %ld bytes\n", sizeof(q));
    printf("Size of unsigned long long int: %ld bytes\n", sizeof(r));
    printf("Size of long double: %ld bytes\n", sizeof(s));
    printf("Size of long long int: %ld bytes\n", sizeof(t));
    printf("Size of double long: %ld bytes\n", sizeof(u));
    printf("Size of unsigned char: %ld bytes\n", sizeof(v));
    printf("Size of auto int: %ld bytes\n", sizeof(w));

    return EXIT_SUCCESS;
}
