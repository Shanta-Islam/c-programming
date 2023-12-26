/*
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int addCount = 0;

struct student {
    int roll;
    char name[40];
    float cse, eng, mat;
};

struct student s[100];

void add();
void edit();
void delete();
void showSpecific();
void showAllinfo();
void show();
void create(char *name, int roll, float cse, float mat, float eng);



void displayMenu() {
    printf("\nMenu:\n");
    printf("1. Add\n2. Edit\n3. Delete\n4. Show Specific\n5. Show All\n6. Exit\n");
    printf("Enter your choice: ");
}

int main() {
    while (1) {
        displayMenu();

        int choice;
        scanf("%d", &choice);
        fflush(stdin);

        switch (choice) {
            case 1:
                add();
                break;
            case 2:
                edit();
                break;
            case 3:
                delete();
                break;
            case 4:
                showSpecific();
                break;
            case 5:
                showAllinfo();
                break;
            case 6:
                return 0;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    }

    return 0;
}

void show(){

    for (int i = 0; i < addCount; i++) {
        printf("%d | %s - %d\n", i + 1, s[i].name, s[i].roll);
    }
}


void showAllinfo() {

    for (int i = 0; i < addCount; i++) {
        printf("%d | %s - %d\n", i + 1, s[i].name, s[i].roll);
        printf("CSE : %f\nMAT : %f\nENG : %f\n", s[i].cse, s[i].mat, s[i].eng);
    }
}


void create(char *name, int roll, float cse, float mat, float eng) {

    strcpy(s[addCount].name, name);
    s[addCount].roll = roll;
    s[addCount].cse = cse;
    s[addCount].mat = mat;
    s[addCount].eng = eng;

    addCount++;
}

void add() {
    int roll;
    char name[40];
    float cse, eng, mat;

    printf("Enter Student's Name: ");
    scanf("%[^\n]s", name);
    fflush(stdin);


    printf("Enter Student's Roll: ");
    scanf("%d", &roll);
    fflush(stdin);

    printf("Enter CSE Grade: ");
    scanf("%f", &cse);
    fflush(stdin);

    printf("Enter MAT Grade: ");
    scanf("%f", &mat);
    fflush(stdin);

    printf("Enter ENG Grade: ");
    scanf("%f", &eng);
    fflush(stdin);


    create(name, roll, cse, mat, eng);
}

void showSpecific(){

    int index;


    show();
    printf("Enter Student Index to Show Details :");
    scanf("%d",&index);
    fflush(stdin);

    index--;

    if(index+1>addCount || index<0){

        printf("Invalid Index\n");


    }else{

        printf("%d | %s - %d\n", index + 1, s[index].name, s[index].roll);

        printf(" CSE : %f\nMAT : %f\nENG : %f\n", s[index].cse, s[index].mat, s[index].eng);
    }
}


void delete(){

    int index;


    show();

    printf("Enter Student Index to Delete : ");
    scanf("%d",&index);
    fflush(stdin);

    index--;

    if(index+1>addCount || index<0){

        printf("Invalid Index");


    }else{

    strcpy(s[index].name, s[addCount-1].name);
    s[index].roll =s[addCount-1].roll;
    s[index].cse = s[addCount-1].cse;
    s[index].mat = s[addCount-1].mat;
    s[index].eng = s[addCount-1].eng;


    strcpy(s[addCount-1].name, "No name");
    s[addCount-1].roll = -1;
    s[addCount-1].cse = -1;
    s[addCount-1].mat = -1;
    s[addCount-1].eng = -1;

    addCount--;

    }
}

void edit(){

    int index,inp;

    show();

    printf("\nEnter Student Index to Edit : \n");
    scanf("%d", &index);
    fflush(stdin);

    printf("Enter what to edit : \n");
    printf("1.Name\n2.Roll\n3.CSE\n4.MAT\n5.ENG\n");
    scanf("%d", &inp);
    fflush(stdin);


    if(inp==1){

        char name[40];

        printf("Enter New Name :\n");
        scanf("%[^\n]s",name);
        fflush(stdin);
        strcpy(s[index-1].name, name);






    }else if(inp==2){
        int roll;

        printf("Enter New Roll :\n");
        scanf("%d",&roll);
        fflush(stdin);

        s[index-1].roll=roll;

    }else if(inp==3){
        float cse;

        printf("Enter New CSE Grade :\n");
        scanf("%f",&cse);
        fflush(stdin);
        s[index-1].cse=cse;

    }else if(inp==4){
        float mat;

        printf("Enter New MAT Grade :\n");
        scanf("%f",&mat);
        fflush(stdin);

        s[index-1].mat=mat;

    }else if(inp==5){
        float eng;

        printf("Enter New ENG Grade :\n");
        scanf("%f",&eng);
        fflush(stdin);

        s[index-1].eng=eng;

    }else{

       printf("Invalid Input\n");
    }



}
*/

/*
void add() {
    int n;

    printf("\n\tEnter no. of records you want to add: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\n\tEnter detail of student %d: ", i + 1);

        printf("\n\t\tEnter name of student: ");
        scanf(" %[^\n]s", s[addCount].name);
        printf("\t\tEnter roll no. of %s: ", s[addCount].name);
        scanf("%d", &s[addCount].roll);
        printf("\t\tEnter CSE Grade: ");
        scanf("%f", &s[addCount].cse);
        printf("\t\tEnter MAT Grade: ");
        scanf("%f", &s[addCount].mat);
        printf("\t\tEnter ENG Grade: ");
        scanf("%f", &s[addCount].eng);
        addCount++;
    }
    printf("\n\t***********RECORD ADDED SUCCESSFULLY***********\n");
}*/

void edit(){

 int r;
    int choice;
    int f = 0;  // flag to check if record found or not
    int j = addCount;

    printf("\n\tEnter roll no. of student whose record you want to modify:");  
    // ask for roll no. to modify its data
    scanf("%d", &r);
    for (int i = 0; j >= 0; i++) {  // loop to traverse in record
        if (s[i].roll == r) {  // check if we are at the required roll no.

            printf("\n\tEnter which data you want to modify of %s", s[i].name);
            printf("\n\t1)Name\n\t2)Roll No.\n\t3)CSE Marks\n\t4)Math Marks\n\t5)English Marks\n\t6)Everything\n");
              // Menu to modify certain details

            scanf("%d", &choice);
            switch (choice) {
                case 1:  // To modify name
                    printf("\n\tEnter new name of student:");
                    scanf("%s", s[i].name);
                    printf("\n\t***********RECORD SUCCESSFULLY MODIFIED***********");
                    break;

                case 2:  // To modify roll no.
                    printf("\tEnter new roll No. of student:");
                    scanf("%d", &s[i].roll);

                    printf("\n\t***********RECORD SUCCESSFULLY MODIFIED***********");
                    break;


                case 3:  // To modify Math marks

                      printf("\tEnter new CSE marks of student:");
                    scanf("%f", &s[i].cse);

                    printf("\n\t***********RECORD SUCCESSFULLY MODIFIED***********");
                    break;


                case 4:  // To modify English marks

                    printf("\tEnter new Math marks of student:");
                    scanf("%f", &s[i].mat);

                    printf("\n\t***********RECORD SUCCESSFULLY MODIFIED***********");
                    break;



                case 5:  // To modify CSE marks

                     printf("\tEnter new English marks of student:");
                    scanf("%f", &s[i].eng);

                    printf("\n\t***********RECORD SUCCESSFULLY MODIFIED***********");
                    break;

                case 6:  // To modify all data of student

                    printf("\n\tEnter new name of student:");
                    scanf("%s", s[i].name);
                    printf("\tEnter new roll No. of student:");
                    scanf("%d", &s[i].roll);
                    printf("\t\tEnter CSE Grade: ");
                    scanf("%f", &s[i].cse);
                    printf("\t\tEnter MAT Grade: ");
                    scanf("%f", &s[i].mat);
                    printf("\t\tEnter ENG Grade: ");
                    scanf("%f", &s[i].eng);

                    // Input for subject marks

                    printf("\n\t***********RECORD SUCCESSFULLY MODIFIED***********");
                    break;

                default:  // If wrong option pressed
                    printf("\n\tPlease enter the correct option");
            }

           showAllinfo();  // display record if we modified the required record

            return;
        }

        j--;
    }

    printf("\n\tStudent with roll no. %d not found.", r);  // if required roll no. not found
}