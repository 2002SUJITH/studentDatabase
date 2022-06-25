// simple student database management system
#include<stdio.h>
#include<conio.h>
#include<string.h>

void addStudent();
void studentRecord();
void studentSerach();
void delete();

struct student{
    char firstName[20];
    char lastName[20];
    int rollNo;
    int sem;
    char add[200];
    float per;
};
void main(){
    int choice;
    while(choice!=5){
        printf("\t\t\t\t____STUDENT DATABASE MANAGEMENT SYSTEM____");
        printf("\n\n\n\t\t\t\t 1.Add student record\n");
        printf("\t\t\t\t 2.Student record\n");
        printf("\t\t\t\t 3.Search student\n");
        printf("\t\t\t\t 4.Delete record\n");
        printf("\t\t\t\t 5.exit\n");
        printf("\t\t\t\t ___________________________\n");
        printf("\t\t\t\t\t ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                 //clrscr();
                 addStudent();
                 //clrscr();
                 break;

                    
                    
                            }




        
            }
}
void addStudent(){
    char another;
    FILE *fptr;
    struct student info;
    do{
        //clrscr();
        printf("\t\t\t_____ADD STUDENT INFO_______\n\n\n");
        fptr=fopen("studentInfo.txt","a");
        printf("\n\t\t\tenter first name : ");
        scanf("%s",info.firstName);
        printf("\n\t\t\tEnter last name : ");
        scanf("%s",info.lastName);
        printf("\n\t\t\tEnter Roll number: ");
        scanf("%d",&info.rollNo);   
        printf("\n\t\t\tEnter semester: ");
        scanf("%d",&info.sem); 
        printf("\n\t\t\tEnter address: ");
        //gets(info.add);
        scanf("%s",info.add);
        printf("\n\t\t\tEnter percentage : ");
        scanf("%f",&info.per);
        printf("\n\t\t\t__________________________________");
        if(fptr==NULL){
            printf("\t\t\tcant open the file");
        }else{
            printf("record stored successfully");
        }
        fwrite(&info,sizeof(struct student),1,fptr);
        fclose(fptr);
        
        printf("\n Do you want to add another record?(y/n) : ");
        scanf("%c",another);

        }while(another=='y'|| another=='Y');
           
           
            }
    