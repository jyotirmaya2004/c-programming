/*create an employee structure cosisting of fields employee id,name,base salary,
designation,department,adresses*/
#include<stdio.h>
#include<string.h>
struct emp
{
    int id;
    char name[50];
    char addr[50];
    char desig[50];
    char depart[50];
    float bs;//bs=base salary
};

int i,j,n;
int main()
{
    printf("Enter number of records : ");
    scanf("%d",&n);
    getc(stdin);
    fflush(stdin);
    struct emp e[n];
    int l;
    printf("\nEnter the employees records\n");
    for ( i = 0; i < n; i++)
    {
        fflush(stdin);
        printf("\nEnter employee ID %d : ",i+1);
        scanf("%d",&e->id);
        getc(stdin);
        fflush(stdin);

        printf("Enter employees name : ");
        fgets(e->name,50,stdin);
        l=strlen(e->name);
        if(e->name[l-1]=='\n')
        e->name[l-1]='\0';
        fflush(stdin);

        printf("Enter employee base salary : ");
        scanf("%d",&e->bs);
        getc(stdin);
        fflush(stdin);

        printf("Enter employees adress: ");
        fgets(e->addr,50,stdin);
        l=strlen(e->addr);
        if(e->addr[l-1]=='\n')
        e->addr[l-1]='\0';
        fflush(stdin);

        printf("Enter employees department : ");
        fgets(e->depart,50,stdin);
        l=strlen(e->depart);
        if(e->depart[l-1]=='\n')
        e->depart[l-1]='\0';
        fflush(stdin);

        printf("Enter employees designation : ");
        fgets(e->desig,50,stdin);
        l=strlen(e->desig);
        if(e->desig[l-1]=='\n')
        e->desig[l-1]='\0';
        fflush(stdin);
    }
    int op=0;
    while(op!=11)
        {
            printf("\nChoose any task to perform \n");
            printf("\t1.Display employee records.\n");
            printf("\t2.Search employee record using given employee ID.\n");
            printf("\t3.Print the employee record of a given department.\n");
            printf("\t4.Intsert a new records of a given department.\n");
            printf("\t5.Insert a record at a particular index position.\n");
            printf("\t6.Provide 10%% bonous to the employees of given department \n\t  and print the edited salary od the employees.\n");
            printf("\t7.Delete the employee record of given employee id.\n");
            printf("\t8.Delete the lowest paid employee of the given department.\n");
            printf("\t9.Print the record of the highest paid employees.\n");
            printf("\t10.Print the name and designation of the employee \n\t  who are coming from a give adress.\n");
            printf("\t11.EXIT\n\n");
            getc(stdin);
            fflush(stdin);
            printf("Choose any option from above option :");
            scanf("%d",&op);
            if(op==1)
            {
                getc(stdin);
                fflush(stdin);

            }
            else if(op==2)
            {
                getc(stdin);
                fflush(stdin);

            }
            else if(op==3)
            {
                getc(stdin);
                fflush(stdin);

            }
            else if(op==4)
            {
                getc(stdin);
                fflush(stdin);

            }
            else if(op==5)
            {
                getc(stdin);
                fflush(stdin);

            }
            else if(op==6)
            {
                getc(stdin);
                fflush(stdin);

            }
            else if(op==7)
            {
                getc(stdin);
                fflush(stdin);

            }
            else if(op==8)
            {
                getc(stdin);
                fflush(stdin);

            }
            else if(op==9)
            {
                getc(stdin);
                fflush(stdin);

            }
            else if(op==10)
            {
                getc(stdin);
                fflush(stdin);

            }
            else if(op==11)
            {
                printf("Exit");

            }
            else
            {
                printf("\nEnter valid option");
            }
        }
    
}

