#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct user_signup
{
    int userid;
    char fname[20];
    char lname[20];
    char email[20];
    char pass[20];
    char mobno[20];
    char dob[20];

}signup_t;

void sign_in(signup_t *user);