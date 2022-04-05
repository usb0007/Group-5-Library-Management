#ifndef SP1_H
#define SP1_H
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <string.h>

struct books{
    int id;
    char bookName[50];
    char authorName[50];
    char date[12];
};

struct student{
    int id;
    char sName[50];
    char sClass[50];
    int sRoll;
    char bookName[50];
    char date[12];
};

void addBook();
void booksList();
void del();
void issueBook();
void issueList();

FILE *fp;
struct books b;
struct student s;

void addBook(){

    	system("clear");
    	printf("\n\n");
     	printf("---------------------------------------------------------------------------------------\n");
    	printf("<================================= Add New Book Book =================================>\n");
   	printf("---------------------------------------------------------------------------------------\n\n");
    	
    	char myDate[12];
    	//char bookName[50], authorName[50];
    	time_t t = time(NULL);
    	struct tm tm = *localtime(&t);
    	sprintf(myDate, "%d/%d/%d", tm.tm_mday, tm.tm_mon+1, tm.tm_year + 1900);
    	strcpy(b.date, myDate);

    	fp = fopen("books.txt", "ab");
    	
    	printf("\nEnter book id : ");
    	scanf("%d", &b.id);

      	printf("\nEnter book name : ");
    	scanf("%s",b.bookName);
    	
    	
    	//scanf("%[^\t\n]",bookName);
    	//fgets( b.bookName, sizeof( b.bookName ), stdin );
    	//gets(b.bookName);

    	printf("\nEnter author name : ");
    	scanf("%s",b.authorName);
    	
    	
    	//scanf("%[^\t\n]",authorName);
    	//fgets( b.authorName, sizeof( b.authorName ), stdin );

    	printf("\n Book Added Successfully\n");

    	fwrite(&b, sizeof(b), 1, fp);
    	fclose(fp);
}


void booksList(){

	system("clear");
	printf("\n\n");
     	printf("---------------------------------------------------------------------------------------\n");
    	printf("<================================== Available Books ==================================>\n");
   	printf("---------------------------------------------------------------------------------------\n\n");
    	printf("%-15s %-20s %-30s %-10s\n\n", "Book id" , "Book Name" , "Author" , "Date" );
    	
    	fp = fopen("books.txt", "r+");
    	while(fread(&b, sizeof(b), 1, fp) == 1)
    	{
        	printf("%-15d %-20s %-30s %-10s\n", b.id , b.bookName , b.authorName , b.date );
    	}

    	fclose(fp);
    
}

void del()
{
	system("clear");
        int id, f=0;
	    
	printf("\n\n");
	printf("---------------------------------------------------------------------------------------\n");
    	printf("<==================================== Remove Books ===================================>\n");
   	printf("---------------------------------------------------------------------------------------\n\n");
	printf("Enter Book id to remove : ");
    	scanf("%d", &id);

    	FILE *ft;

    	fp = fopen("books.txt", "r+");
    	ft = fopen("temp.txt", "w+");

    	while(fread(&b, sizeof(b), 1, fp) == 1)
    	{
        	if(id == b.id)
        	{
            		f=1;
        	}else
        	{
            		fwrite(&b, sizeof(b), 1, ft);
        	}
    	}

    	if(f==1)
    	{
        	printf("\n\nDeleted Successfully.");
    	}
    	else
    	{
        	printf("\n\nNo Record Found, With Provided Book Id %d. Please Provide Valid Book Id, and try again later.",id);
    	}

    	fclose(fp);
    	fclose(ft);

    	remove("books.txt");
    	rename("temp.txt", "books.txt");

}


void issueBook()
{
	system("clear");
    	char myDate[12];
    	time_t t = time(NULL);
    	struct tm tm = *localtime(&t);
    	sprintf(myDate, "%d/%d/%d", tm.tm_mday, tm.tm_mon+1, tm.tm_year + 1900);
    	strcpy(s.date, myDate);

    	int f=0;
   
	printf("\n\n");
	printf("---------------------------------------------------------------------------------------\n");
    	printf("<==================================== Issue Books ====================================>\n");
   	printf("---------------------------------------------------------------------------------------\n\n");
    	printf("Enter Book id to issue: ");
    	scanf("%d", &s.id);
   

    	//Check if we have book of given id
    	fp = fopen("books.txt", "r+");

    	while(fread(&b, sizeof(b), 1, fp) == 1)
    	{
        	if(b.id == s.id)
        	{
        		strcpy(s.bookName, b.bookName);
            		f=1;
            		break;
        	}
    	}

    	if(f==0)
    	{
        	printf("No book found with this id\n");
        	printf("Please try again...\n\n");
        	return;
    	}

    	fp = fopen("issue.txt", "ab");

    	printf("Enter Student Name: ");
   
    	scanf("%s",s.sName);

    	printf("Enter Student Class: ");
    
    	scanf("%s",s.sClass);

    	printf("Enter Student Roll: ");
    	scanf("%d", &s.sRoll);

    	printf("Book Issued Successfully!!!\n\n");

    	fwrite(&s, sizeof(s), 1, fp);
    	fclose(fp);

}

void issueList()
{
	system("clear");
    	printf("\n\n");
	printf("---------------------------------------------------------------------------------------\n");
    	printf("<================================== Issued Book List =================================>\n");
   	printf("---------------------------------------------------------------------------------------\n\n");

    	printf("%-10s %-30s %-20s %-10s %-30s %s\n\n", "B.id", "Name", "Class", "Roll", "Book Name", "Date");

    	fp = fopen("issue.txt", "r+");
    	while(fread(&s, sizeof(s), 1, fp) == 1)
    	{
        	printf("%-10d %-30s %-20s %-10d %-30s %s\n", s.id, s.sName, s.sClass, s.sRoll, s.bookName, s.date);
    	}

    	fclose(fp);
    
}

#endif
