
/*
library system
dan
Last update on 15march ,2021
C89 Compiler
MIT LICENCE
*/

#include <stdio.h>
#include <stdlib.h>

struct patron{
    char name {100};
    char email{50};
    char password{30};
    int is staff


};

void add patron() {
    struct Patron patron;
    printf("Enter name:");
    getchar ();
    gets (patron.name);
    printf("Enter Email:");
    gets(patron.email);
    printf("Enter 1 if staff 0 otherwise");
    scanf("%d",& patron.is staff);
    printf("%s added\n",patron .name);
}
int menu () {
    int action;
    printf("select new action below\n");
    printf("1. Add new patron\n");
    printf("2. view all patron\n");
    printf("3. view all books\n");
    printf("4. Add new book\n");
    printf("Your action:\n");
    scanf("%d",& action);
    if(action< 1,|| action > 4){
