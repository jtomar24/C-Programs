/*
-------------------------------------------------------
Name         : Structure 
Author       : Kushal Singh Rathore
Discription  : Structure Problem
-------------------------------------------------------
*/

#include<stdio.h>
struct abc {
    short s[5];
    union {
        float y;
        long z;
    }u;
} t;
int main()
{
    printf("%d",sizeof(t.u));
    printf("%d",sizeof(long));
}