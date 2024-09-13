#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
}
node;

// int main(int argc, char *argv[])
int main(void)
{
    node *list = NULL;
    // for (int i = 1 ; i <argc; i++)
    for (int i = 0 ; i <3; i++)
    {
        // int number = atoi(argv[i]);
        int num[3];
        num[0] = 1;
        num[1] = 2;
        num[2] = 3;
        int number =num[i];


        node *n = malloc(sizeof(node));
        if (n==NULL)
        {
            return 1;
        }
        n->number = number;
        n->next = NULL;

        n->next = list;

        list = n;
    }

    node *ptr = list;

    while (ptr != NULL)
    {
        printf("%i\n", ptr->number);
        ptr = ptr->next;
    }

    ptr = list;

    while (ptr != NULL)
    {
        node *next = ptr->next;
        free(ptr);
        ptr = next;
    }
}