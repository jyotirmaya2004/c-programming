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
        scanf("%d",&e[i].id);
        getc(stdin);
        fflush(stdin);

        printf("Enter employees name : ");
        fgets(e[i].name,50,stdin);
        l=strlen(e[i].name);
        if(e[i].name[l-1]=='\n')
        e[i].name[l-1]='\0';
        fflush(stdin);

        printf("Enter employee base salary : ");
        scanf("%f",&e[i].bs);
        getc(stdin);
        fflush(stdin);

        printf("Enter employees adress: ");
        fgets(e[i].addr,50,stdin);
        l=strlen(e[i].addr);
        if(e[i].addr[l-1]=='\n')
        e[i].addr[l-1]='\0';
        fflush(stdin);

        printf("Enter employees department : ");
        fgets(e[i].depart,50,stdin);
        l=strlen(e[i].depart);
        if(e[i].depart[l-1]=='\n')
        e[i].depart[l-1]='\0';
        fflush(stdin);

        printf("Enter employees designation : ");
        fgets(e[i].desig,50,stdin);
        l=strlen(e[i].desig);
        if(e[i].desig[l-1]=='\n')
        e[i].desig[l-1]='\0';
        fflush(stdin);
    }