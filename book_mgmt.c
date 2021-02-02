#include <stdio.h>
#include <stdlib.h>

typedef struct books
{
    int book_id;
    struct books * next;
}BOOK;

BOOK *head;

BOOK * createBookList()
{
    int book_counter;
    head = (BOOK*)malloc(sizeof(BOOK));
    head->book_id = 0;
    head->next = NULL;
    printf("**created\n");
    return head;
}

void append(int id)
{
    BOOK *temp, *newNode;
    newNode = (BOOK*)malloc(sizeof(BOOK));
    newNode->book_id = id;
    newNode->next = NULL;
    
    for(temp = head; temp->next!=NULL; temp=temp->next);
    temp->next = newNode;
    
    printf("**appended\n");
}

void printList()
{
    BOOK *temp;
    for(temp=head;temp!=NULL;temp=temp->next)
    {
        printf("%d->",temp->book_id);
    }
    printf("NULL\n");
}

void insertBook(int bookPosition)
{
    BOOK *temp, *newNode;
    int newBookID,positionCounter=0;
    
    printf("Enter book ID: ");
    scanf("%d", &newBookID);
    
    newNode = (BOOK*)malloc(sizeof(BOOK));
    newNode->book_id = newBookID;
    
    for(temp=head; temp->next!=NULL,positionCounter<(bookPosition-1); temp=temp->next,positionCounter++);
    newNode->next = temp->next;
    temp -> next = newNode;
}

void searchBook()
{
    int bookId, bookPosition=1;
    BOOK *temp;
    
    printf("Enter ID to search: ");
    scanf("%d",&bookId);
    
    for(temp=head;temp!=NULL;temp=temp->next,bookPosition++)
    {
        if(temp->book_id==bookId)
        {
            printf("BOOK FOUND AT POSITION %d!",bookPosition);
            return;
        }
    }
    printf("BOOK NOT FOUND!");
}

void deleteBook()
{
    int bookId, bookPosition=1;
    BOOK *prev,*temp;
    
    printf("Enter ID to delete: ");
    scanf("%d",&bookId);
    
    for(prev=head,temp=head->next;prev->next->next!=NULL;prev=prev->next,temp=temp->next,bookPosition++)
    {
        if(temp->book_id==bookId)
        {
            printf("BOOK FOUND AT POSITION %d!",bookPosition);
            prev->next = temp->next;
            free(temp);
            printf("\nDELETED!!");
            return;
        }
    }
    printf("BOOK NOT FOUND!");
}

int main()
{
    int position_to_insert_book, choice, newBookID;
    createBookList();

    while(1)
    {
        printf("\n1.Append\t2.Insert at position\t3.Print list\t4.Search by ID\t5.Delete by position\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1: 
                printf("\nEnter book ID to append:\t");
                scanf("%d", newBookID);
                append(newBookID);
            break;

            case 2:
                printf("\nEnter position to insert:\t");
                scanf("%d", newBookID);
                insertBook(newBookID);
            break;

            case 3:
                printList();
                break;

            case 4:
                searchBook();
                break;

            case 5:
                deleteBook();
                break;

            default: printf("\nWRONG CHOICE!!");
            break;

        }
    }
    return 0;
}
