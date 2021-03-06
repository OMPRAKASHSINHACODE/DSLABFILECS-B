#include<stdio.h>
#include<stdlib.h>

int a[10], pos, elem, n = 0;
void create();
void display();
void insert();
void del();

void main()
{
    int choice;
    while(1)
    {
        printf("\n*********** MAIN MENU ***********\n");
        printf("\n\tArray Opration\n");
        printf("\n=================================\n");
        printf("\n1. Create ");
        printf("\n2. Display ");
        printf("\n3. Insert (Pos. as Index) ");
        printf("\n4. Delete(Pos. as Index) ");
        printf("\n5. Exit \n");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch(choice)
        {
        case 1: create();
            break;
        case 2: display();
            break;
        case 3: insert();
            break;
        case 4:del();
            break;
        case 5:exit(1);
            break;
        default:printf("\nPlease enter a valid choice : ");
        }
    }
}

void create()
{
    int i;
    printf("\nEnter the number of elements : ");
    scanf("%d", &n);
    printf("\nEnter the elements : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
}

void display()
{
    int i;
    if(n == 0)
    {
        printf("\nNo elements to display.");
        return;
    }
    printf("\nArray elements are : ");
    for(i=0; i<n;i++)
        printf("%d ", a[i]);
    printf("\n");
}

void insert()
{
    int i;
    if(n == 5)
    {
    printf("\nArray is full. Insertion is not possible"); return;
    }
    do
    {
        printf("\nEnter a valid position where element to be inserted : ");
        scanf("%d", &pos);
    }while(pos > n);
    printf("\nEnter the value to be inserted : ");
    scanf("%d", &elem);
    for(i=n-1; i>=pos ; i--)
    {
                a[i+1] = a[i];
    }
    a[pos] = elem;
    n = n+1;
    display();
}

void del()
{
    int i;
    if(n == 0)
    {
        printf("\nArray is empty and no elements to delete.");
        return;
    }
    do
    {
        printf("\nEnter a valid position from where element to be deleted : ");
        scanf("%d", &pos);
    }while(pos>=n);
    elem = a[pos];
    printf("\nDeleted element is : %d \n", elem);
    for( i = pos; i< n-1; i++)
    {
        a[i] = a[i+1];
    }
    n = n-1;
    display();
} 