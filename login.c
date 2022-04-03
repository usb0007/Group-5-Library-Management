#include<stdio.h>

#include<string.h>
#include "sprint.c"
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
	fptr=fopen("log.txt","r");
	int n=1;
	char userId[25], password[25], id[25], p[25];
	fscanf(fptr,"%s %s",userId,password);
	
	do
	{
    		printf("\nEnter UserId : ");
        	gets(id);

        	printf("\nEnter Password : ");
        	gets(p);
        
        	if((strcmp(userId,id)==0)&&(strcmp(password,p)==0))
        	{
        		printf("\nSucessfully Logged In");
           		display();
        	}
        	else 
        	{
           		printf("\nWrong Password, try again later\n",5-n);
            		n++;
         	}
         	if(n>5)
         	{
          		printf("\nAccess Denied\n");
  	
          	}

       }while (n<=5);

return 0;
}
