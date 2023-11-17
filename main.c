#include "hackathon.c"

int main()
{
    int choice;
    signup_t user[20];

    do{
        printf("0.Exit\n 1.Sign In\n 2.Sign Up\n");
        printf("Enter your choice:");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1 : sign_in(user);
                    break;
            case 2 : //sign_up(user);  
                    break;
            default : printf("Invalid choice :");
                    break;
                          
        }
    }while(choice!=0);
    return 0;
    }