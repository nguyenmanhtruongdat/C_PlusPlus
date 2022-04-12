#include <iostream>
using namespace std;
struct List
{
    List *next;
    int data;
};
List *insertFirst(int item, List *ptr)
{
    List *temp = new List;
    temp->data = item;
    temp->next = ptr;
    return temp;
}
void print(List *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << "\n";
        ptr = ptr->next;
    }
}
// Add a node at the end of p 

void *insertLast(List *ptr,int item){
    
        List *temp = new List;
        temp->data=item;
        temp->next=NULL;
    if (!temp)
    {
        return temp;
    }else{
        List *p = ptr;
        while(p->next)
        {
            p=p->next;
            p->next=temp;
            return ptr;
        }
    }
    
   

}
// List *createNode()
// {
//     List *list = new List;
//     if (list != NULL)
//     {
//         list->data = 5;
//         list->next = NULL;
//     }
//     return list;
// }
List *deleteFirst(List *&ptr)
{
    if (ptr != NULL)
    {
        List *tmp = ptr;
        List *p = ptr->next;
        delete tmp;
        return p;
    }
    return;
}
int main()
{
    List *list;
    insertFirst(5, list);

    print(list);
}