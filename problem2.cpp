#include<iostream>
using namespace std;

/*A polynomial is represented as follows:
struct node 
{
int num; 
int coeff; 
struct node *next; 
};
Write a program to store a polynomial using linked list and the following functions:
a) Input a polynomial and store it in a linked list.
b) Print the polynomial.
c) Perform addition on two polynomials.
d) Perform subtraction on two polynomials */
struct node
    {
        int num;
        int coeff;
        node *next;
    };


int main(){
    
    
}

void input(node *&ptr)
{
    int num, coeff;
    ptr = NULL;
    cout << "Enter the number of terms: ";
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cout << "Enter the coefficient and power of x: ";
        cin >> coeff >> num;
        ptr = insertLast(ptr, coeff);
    }
}

void print(node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->num << "x^" << ptr->coeff << " + ";
        ptr = ptr->next;
    }
}

node *insertLast(node *ptr, int item)
{
    node *temp = new node;
    temp->num = item;
    temp->coeff = item;
    temp->next = NULL;
    if (!temp)
    {
        return temp;
    }
    else
    {
        node *p = ptr;
        while (p->next)
        {
            p = p->next;
            p->next = temp;
            return ptr;
        }
    }
}