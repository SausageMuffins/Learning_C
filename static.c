// static variables and functions
#include<stdio.h>

// static function - confined to this file
static void func(void)
{
    printf("static function\n");
}

void main() {
    // declare static variable count
    printf("count = %d\n", add_count()); // init static var count and add 1
    printf("count = %d\n", add_count()); // add 1 to count
    return;

}

int add_count(){
    static int n = 0; // static variable - init once for this file
    n += 1;
    return n;
}