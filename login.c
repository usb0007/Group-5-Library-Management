#include<stdio.h>
#include<string.h>
#include "sprint.c"

struct user{
    char userId[25];
    char password[25];
};

int main()
{
	system("clear");
	
    	printf("\n\t\t\t-------------------------------------------------------------------------------");
    	printf("\n\t\t\t| ########################################################################### |");
    	printf("\n\t\t\t| ############                                                   ############ |");
    	printf("\n\t\t\t| ############         Library Management System Project         ############ |");
    	printf("\n\t\t\t| ############                                                   ############ |");
    	printf("\n\t\t\t| ########################################################################### |");
    	printf("\n\t\t\t-------------------------------------------------------------------------------\n");
    	
    	printf("\n");
    	
    	printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**");
    	printf("\n\t\t\t  **                                                             **");
    	printf("\n\t\t\t  **    =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=    **");
    	printf("\n\t\t\t  **    =                    WELCOME TO                     =    **");
    	printf("\n\t\t\t  **    =             LIBRARY MANAGEMENT SYSTEM             =    **");
    	printf("\n\t\t\t  **    =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=    **");
    	printf("\n\t\t\t  **                                                             **");
    	printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    	
    	printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**");	
    	printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**");
    	printf("\n\t\t\t  **                                                             **");
    	printf("\n\t\t\t  **    =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=    **");
    	printf("\n\t\t\t  **    =-                                                 -=    **");
    	printf("\n\t\t\t  **    =-               TEAM MEMBERS                      -=    **");
    	printf("\n\t\t\t  **    =-              _______________                    -=    **");
    	printf("\n\t\t\t  **    =-                                                 -=    **");
    	printf("\n\t\t\t  **    =-              1.  Arjit Dubey                    -=    **");
    	printf("\n\t\t\t  **    =-              2.  Dinesh Jagtap                  -=    **");
    	printf("\n\t\t\t  **    =-              3.  Krishna Vishwakarma            -=    **");
    	printf("\n\t\t\t  **    =-              4.  Rahul Malik                    -=    **");
    	printf("\n\t\t\t  **    =-              5.  Ummed Singh                    -=    **");
    	printf("\n\t\t\t  **    =-                                                 -=    **");
    	printf("\n\t\t\t  **    =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=    **");
    	printf("\n\t\t\t  **                                                             **");
    	printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**");
    	printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    

    FILE *fptr;
    	struct user u;
	int n=1;
	char id[25], p[25];
	fptr=fopen("log.txt","r");
	fscanf(fptr,"%s %s",u.userId,u.password);
	printf("\n\n\n");
	printf ("--------------------------------------------------------------------------------------\n");
    	printf("\t\t\t\tWelcome to Login Page\n");
   	printf ("--------------------------------------------------------------------------------------\n\n");
	do
	{
    		printf("\nEnter UserId : ");
    		scanf(" %s", id);
        	//gets(id);
        	//fgets( id, sizeof( id ), stdin );

        	printf("\nEnter Password : ");
        	scanf(" %s", p);
        	//gets(p);
        	//fgets( p, sizeof( p ), stdin );
        	
        
        	if((strcmp(u.userId,id)==0)&&(strcmp(u.password,p)==0))
        	{
        		printf("\nSucessfully Logged In");
           		display();
        	}
        	else 
        	{
           		printf("\nWrong UserId or Password, try again...\n ");
           		printf("\nOnly %d attempts left. Please use Proper Login Credentials for Login.\n",5-n);
           		printf("\n===================================================================================");
            		n++;
            		printf("\n\n");
         	}
         	printf("\n\n");
         	if(n>5)
         	{
          		printf("\nAccess Denied... You have Exceeded the Maximum Login try Please Try again later.\n\n");
          		printf("\n\n");
  	
          	}

       }while (n<=5);
       
       fclose(fptr);

return 0;
}
