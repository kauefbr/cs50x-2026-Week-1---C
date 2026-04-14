#include <stdio.h>
#include <cs50.h>

int main() {
    string n = get_string("What\'s your name ? \n");
    printf("hello, %s!\n", n);
}
