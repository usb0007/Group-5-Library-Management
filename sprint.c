#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <string.h>
#include "sp1.h"

void display();
//int main(){
    	int ch;
 	
    	void display(){
    
    	while(1){
    
        //system("clear");
        printf("\n\n\n<===== Library Management System =====>\n");
        printf("1.Add Book\n");
        printf("2.Books List\n");
        printf("3.Remove Book\n");
        printf("4.Issue Book\n");
        printf("5.Issued Book List\n");
        printf("0.Exit\n\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch(ch){
        case 0:
            exit(0);

        case 1:
            addBook();
            break;

        case 2:
            booksList();
            break;

        case 3:
            del();
            break;

        case 4:
            issueBook();
            break;

        case 5:
            issueList();
            break;

        default:
            printf("Invalid Choice...\n\n");

        }
        //printf("Press Any Key To Continue...");
        
    }
}
    //return 0;
//}


