#include <iostream>

using namespace std;

void init(ForwardList *list)
{
    list->head = nullptr;
    list->tail = nullptr;
}

typedef struct node
{
    int value;
    struct node *next_item;
};

typedef struct ForwardList
{
    node *head;
    node *tail;

    ForwardList *PushFront(ForwardList *list, int value)
    {
        node *tmp =  new node;
        tmp->next_item = list->head;
        tmp->value = value;
        if (list->head != nullptr)
        {
            list->head = tmp;
        }
        else
        {
            list->head = list->tail = tmp;
        }
    }

    void Append(ForwardList *list, int value)
    {
        node *tmp = new node;
        tmp->next_item = nullptr;
        tmp->value = value;
        if (list->tail != nullptr)
        {
            list->tail->next_item = tmp;
            list->tail = tmp;
        }
        else
        {
            list->head = list->tail = tmp;
        }
    }
};

void DestroyList(ForwardList *list)
{
    while (list->head)
    {
        delete_front(list);
    }
}

int main()
{
    ForwardList list;
    init(&list);

    return 0;
}
