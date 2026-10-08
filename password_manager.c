#include<stdio.h>
#include<string.h>

struct Account{
    char username[25];
    char service[40];
    char password[36];
};


int main(void){

   int choice=1;
   char line[150];
   struct Account acc1;

   do {
   printf("\n---PASSWORD MANAGER---\n");
   printf("1. Add password\n");
   printf("2. View passwords\n");
   printf("3. Exit\n");
   printf("Choice: ");
   scanf("%d",&choice);
   getchar();
   
   switch (choice){
    // Adds a password.
    case 1:
         printf("Username :");
         fgets(acc1.username,sizeof(acc1.username),stdin);
         acc1.username[strcspn(acc1.username,"\n")]='\0';
         

        printf("\nService :");
        fgets(acc1.service,sizeof(acc1.service),stdin);
        acc1.service[strcspn(acc1.service,"\n")]='\0';
        printf("\nPassword :");
        fgets(acc1.password,sizeof(acc1.password),stdin);
        acc1.password[strcspn(acc1.password,"\n")]='\0';

        // This file contains password infos !

        FILE *fp=fopen("passwords.txt","a");
        if (fp==NULL){

            printf("Error passowrds not stored!");
            return 1;

        }
        fprintf(fp,"%s,%s,%s\n",acc1.username,acc1.service,acc1.password);
        fclose(fp);
        break;

    // reads and displays all the saved passwords.
    case 2:
        fp=fopen("passwords.txt","r");
        if (fp==NULL){
            printf("No passwords saved yet!\n");
            break;
        }
        while (fgets(line,sizeof(line),fp)!=NULL){

            printf("Write: %s",line);
    }
    fclose(fp);
    break;

    // Exit.  
    case 3:
        printf("Exit...\n");
    break;
    default:
        printf("Wrong choice!\n");
    }
}while(choice!=3);

   
    return 0;
   }
