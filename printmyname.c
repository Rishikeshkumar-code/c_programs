#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head = NULL;
// Insert at beginning
void insertBeginning()
{
    struct Node *newNode;
    int value;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter value: ");
    scanf("%d", &value);
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

void insertEnd()
{
    struct Node *newNode, *temp;
    int value;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter value: ");
    scanf("%d", &value);
    newNode->data = value;
    newNode->next = NULL;
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
void deleteBeginning()
{
    struct Node *temp;
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    temp = head;
    head = head->next;
    free(temp);
}
void deleteEnd()
{
    struct Node *temp, *prev;
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    if (head->next == NULL)
    {
        free(head);
        head = NULL;
        return;
    }
    temp = head;
    while (temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }
    prev->next = NULL;
    free(temp);
}
void display()
{
    struct Node *temp;
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    temp = head;
    printf("List: ");
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    int choice;
    while (1)
    {
        printf("\n--- Singly Linked List ---\n");
        printf("1. Insert Beginning\n");
        printf("2. Insert End\n");
        printf("3. Delete Beginning\n");
        printf("4. Delete End\n");
        printf("5. Display\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insertBeginning();
            break;
        case 2:
            insertEnd();
            break;
        case 3:
            deleteBeginning();
            break;
        case 4:
            deleteEnd();
            break;
        case 5:
            display();
            break;
        case 6:
            exit(0);
        default:
            printf("Invalid choice\n");
        }
    }
    return 0;
}
 