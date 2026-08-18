#include <stdio.h>
#include <string.h>

int main(void) {
    char Fname[50];
    char Mname[50];
    char Lname[50];
    printf("Please type your name: ");
    scanf("%s %s %s", Fname, Mname, Lname);

    char Fullname[150] = "";
    strcat(Fullname, Fname);
    strcat(Fullname, " ");
    strcat(Fullname, Mname);
    strcat(Fullname, " ");
    strcat(Fullname, Lname);

    printf("\nYour name is: %s\n", Fullname);
    return 0;
}