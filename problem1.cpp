#include <iostream>
#include <fstream>
#include <string>
#include <iostream>
using namespace std;
ofstream os("StudenList.txt", ios::binary);
struct Student
{
    char name[30];
    int day, month, year;
    float mathMarks;
    float physicsMarks;
    float languageMarks;
};
struct Node
{
    Student *data;
    Node *next;
};
struct StudentList
{
    Node *pHead;
};
void list(StudentList *&list)
{
    list = new StudentList;
    list->pHead = NULL;
}

Student *add()
{
    Student *std = new Student;
    cout << "Enter name:";
    gets(std->name);
    cout << "Enter date of birth:";
    cin >> std->day >> std->month >> std->year;
    cout << "Enter math marks:";
    cin >> std->mathMarks;
    cout << "Enter physics math:";
    cin >> std->physicsMarks;
    cout << "Enter language math:";
    cin >> std->languageMarks;
    cin.ignore();
    return std;
}
void Initialize(StudentList *&list)
{
    list = new StudentList;
    list->pHead = NULL;
}
Node *createNode(Student *std)
{
    Node *node = new Node;
    if (node != NULL)
    {
        node->data = std;
        node->next = NULL;
    }
    return node;
}
void insert(StudentList *&list, Student *std)
{
    Node *node = createNode(std);
    if (list->pHead == NULL)
    {
        list->pHead = node;
    }
    else
    {
        Node *pTmp = list->pHead;

        while (pTmp->next != NULL)
        {
            pTmp = pTmp->next;
        }
        pTmp->next = node;
    }
}
void print(StudentList *list)
{
    Node *tmpNode = list->pHead;
    if (tmpNode == NULL)
    {
        cout << "Danh sach rong";
        return;
    }
    while (tmpNode != NULL)
    {
        Student *std = tmpNode->data;
        cout << std->name << "\n";
        cout << std->day << "/" << std->month << "/" << std->year << endl;
        cout << std->mathMarks << "\n";
        cout << std->physicsMarks << "\n";
        cout << std->languageMarks << "\n";

        tmpNode = tmpNode->next;
    }
}
void check(string name)
{
    Node *tmp;
}
void DeleteStudent(string name, StudentList &list)
{

    for (Node *i = list.pHead; i != NULL; i = i->next)
    {
    }
}
void writeFile(StudentList *list, Student *n)
{
    Node *tmp = new Node;
    tmp->data = n;
    tmp->next = tmp;
    os.write(reinterpret_cast<char *>(tmp), sizeof(tmp));
}
int main()
{
    StudentList *list;
    Initialize(list);
    Student *dat = add();
    insert(list, dat);
    Student *phung = add();
    insert(list, phung);
    Student *newStudent;
    cout << endl;
    print(list);
}