#include"bank.h"
typedef student eletype;

eletype scan()
{
    eletype s;
    printf("\nEnter Name:\t");
    scanf("%s",s.sname);
    printf("Enter age:\t");
    scanf("%d",&s.age);
    printf("Enter sport:\t");
    scanf("%s",s.sport);
    return s;
}

int print(eletype d)
{
    printf("\nName:\t%s",d.sname);
    printf("\nAge:\t%d",d.age);
    printf("\nSport:\t%s\n",d.sport);
    return 0;
}
int main()
{
    node* root=NULL,*temp=NULL;
    int limit,i;
    eletype s;
    strcpy(s.sname,"Sherlock");
    s.age=35;
    strcpy(s.sport,"Cricket");
    root=create_node(s);
    printf("Enter number of record you want to insert:\t");
    scanf("%d",&limit);
    eletype st[limit];
    for(i=0;i<limit;i++)
    {
        st[i]=scan();
        insert(root,st[i]);
    }
    display(root);
    int ch;
    printf("\n1.List the students under 17(Age from 15-17)\n2.List the students for under 19 category(Age from 17-19)\n\nEnter your choice:\t");
    scanf("%d",&ch);
    if(ch==1)
        printrange(root,15,17);
    else if(ch==2)
        printrange(root,17,19);
    else
        printf("Wrong choice");
    return 0;
}

