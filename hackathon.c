#include "hackathon.h"

void sign_in(signup_t *user)
{
    char email[20];
    char pass[20];
    printf("Enter email id :");
    scanf("%*c%[^\n]s",email);
    printf("Enter your Password :");
    scanf("%*c%[^\n]s",pass);
    signup_t temp;
    int temp_id;

    FILE *fptr=fopen("user.txt","a");
    if(fptr==NULL)
    {
        printf("failed to open file\n");
        exit(1);
    }
    while(fread(&temp,sizeof(signup_t),1,fptr)!=0)
    {
        if(strcmp(temp.email,email)==0 && strcmp(temp.pass,pass)==0)
        {
            temp_id=temp.userid;
            printf("Matched user id \n");
            return ;
        }
    }
}

