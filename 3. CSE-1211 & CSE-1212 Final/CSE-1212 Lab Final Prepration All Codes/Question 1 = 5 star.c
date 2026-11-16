#include<stdio.h>

struct Student
{
    int ID;
    char name[50];
    float cg;
};

struct Student s[50];
int count = 0;

void inputStudent()
{
    int n;
    printf("Input the number of students: ");
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        int id;
        float cg;
        char name[50];
        printf("Enter student %d's name: ", i+1);
        scanf("%s", s[count].name);
        while(1)
        {
            printf("Enter student %d's CGPA: ", i+1);
            scanf("%f", &cg);
            if(cg < 0.0 || cg > 4.0)
            {
                printf("Invalid CGPA!\nEnter again!!\n");
            }
            else
                break;
        }
        printf("Enter student %d's ID: ", i+1);
        scanf("%d", &id);
        s[count].ID = id;
        s[count].cg = cg;
        count++;
        printf("Student %d's info saved successfully!!\n", i+1);
    }
}

void displayAllStudents(){
    if(count == 0){
        printf("No student's info is saved!!");
    }
    else{
        printf("All students:\n");
        for(int i=0;i<count;i++){
            printf("Name: %s | ID: %d | CGPA: %.2f\n", s[i].name, s[i].ID, s[i].cg);
        }
    }
    return;
}

void displayTopper()
{
    if(count == 0)
    {
        printf("No student's info is saved!!");
    }
    else
    {
        int top = 0;
        for(int i=1;i<count; i++)
        {
            if(s[i].cg > s[top].cg)
            {
                top = i;
            }
        }
        printf("Topper:");
        printf("Name: %s | ID: %d | CGPA: %.2f\n", s[top].name, s[top].ID, s[top].cg);
    }

}

void showStudent(int ID)
{
    int d = 0, serial;
    for(int i=0;i<count; i++)
        {
        if(ID == s[i].ID)
        {
            d = 1;
            serial = i;
            break;
        }
    }
    if(d)
    {
        printf("Student with ID: %d\n", ID);
        printf("Name: %s | ID: %d | CGPA: %.2f\n", s[serial].name, s[serial].ID, s[serial].cg);
    }
    else
    {
        printf("There is no student with ID: %d!!!\n", ID);
    }
}

int main()
{
    int choice;
    while(1)
    {
        printf("-----------Student Database Management System----------\n\n\n");
        printf("1. Input students \n2. Display students \n3. Topper\n4. Search student by ID\n5. exit\n");
        printf("Enter the choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                inputStudent();
                break;
            case 2:
                displayAllStudents();
                break;
            case 3:
                displayTopper();
                break;
            case 4:
                int ID;
                printf("Enter student ID: ");
                scanf("%d", &ID);
                showStudent(ID);
                break;
            case 5:
                return 0;
            default:
                printf("Invalid Choice!!!!!\n");
                break;
        }
    }

    return 0;
}
