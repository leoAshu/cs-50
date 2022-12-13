#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    string names[] = {"Bill", "Charlie", "Fred", "George", "Ginny", "Percy", "Ron"};
    int size = sizeof(names)/sizeof(names[0]);
    
    for(int i=0; i<size; i++) {
        if(strcmp(names[i], "Ron")) {
            printf("Found!\n");
            return 0;
        }
    }
    printf("Not Found!\n");
    return 1;
}