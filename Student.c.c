#include <stdio.h>
#include <string.h>

struct student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct student s[100];
    int i, n = 0, choice, search, found = 0;

    while(1) {
        printf("\n1. Add Student");
        printf("\n2. Display Students");
        printf("\n3. Search Student");
        printf("\n4. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

        case 1:
            printf("Enter Roll Number: ");
            scanf("%d", &s[n].roll);

            printf("Enter Name: ");
            scanf("%s", s[n].name);

            printf("Enter Marks: ");
            scanf("%f", &s[n].marks);

            n++;
            printf("Student Added Successfully!\n");
            break;

        case 2:
            for(i = 0; i < n; i++) {
                printf("\nRoll: %d", s[i].roll);
                printf("\nName: %s", s[i].name);
                printf("\nMarks: %.2f\n", s[i].marks);
            }
            break;

        case 3:
            printf("Enter Roll Number to Search: ");
            scanf("%d", &search);

            found = 0;

            for(i = 0; i < n; i++) {
                if(s[i].roll == search) {
                    printf("\nStudent Found:");
                    printf("\nName: %s", s[i].name);
                    printf("\nMarks: %.2f\n", s[i].marks);
                    found = 1;
                }
            }

            if(found == 0)
                printf("Student Not Found\n");

            break;

        case 4:
            return 0;

        default:
            printf("Invalid Choice\n");
        }
    }

    return 0;
}
