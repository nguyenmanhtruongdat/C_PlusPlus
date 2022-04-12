#include <iostream>
#include <fstream>
#include <string>
using namespace std;
// ofstream os("StudenList.txt", ios::binary);
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
    cout << "Enter date of birth(dd-MM-YYYY)):";
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
        cout << "Name: " << std->name << "\n";
        cout << "Date of birth: " << std->day << "/" << std->month << "/" << std->year << endl;
        cout << "Math: " << std->mathMarks << "\n";
        cout << "Physics: " << std->physicsMarks << "\n";
        cout << "Language: " << std->languageMarks << "\n";

        tmpNode = tmpNode->next;
    }
}
void check(string name)
{
    Node *tmp;
}
//Delete a student from the list by a given name x
void DeleteStudent(string name, StudentList *list)
{
    Node *tmp = list->pHead;
    if (tmp == NULL)
    {
        cout << "Danh sach rong";
        return;
    }
    if (tmp->data->name == name)
    {
        list->pHead = tmp->next;
        delete tmp;
        return;
    }
    while (tmp->next != NULL)
    {
        if (tmp->next->data->name == name)
        {
            Node *p = tmp->next;
            tmp->next = p->next;
            delete p;
            return;
        }
        tmp = tmp->next;
    }
}
int countStudentbyYear(StudentList *list, int year)
{
    int count = 0;
    Node *tmpNode = list->pHead;
    Student *std = tmpNode->data;
    
    if (tmpNode == NULL)
    {
        cout << "Danh sach rong";
        return 1;
    }
    while (tmpNode != NULL)
    {
        if (std->year == year)
        {
            count++;
        }
            tmpNode = tmpNode->next;
    }
    return count;
}

void writeFile(StudentList *list, Student *n)
{
    ofstream os("StudentList.txt", ios::binary);
    Node *tmpNode = list->pHead;
    Student *std = tmpNode->data;
    if (tmpNode == NULL)
    {
        cout << "Danh sach rong";
        return;
    }
    while (tmpNode != NULL)
    {
        os.write(reinterpret_cast<char *>(std), sizeof(std));
        tmpNode = tmpNode->next;
    }
    os.close();
}

void less5(StudentList *list)
{
    Node *tmpNode = list->pHead;
    if (tmpNode == NULL)
    {
        cout << "Danh sach rong";
        return;
    }
    cout << "Student have the math marks less than 5: \n";
    while (tmpNode != NULL)
    {
        Student *std = tmpNode->data;
        if (std->mathMarks < 5)
        {

            cout << "Name:";
            cout << std->name << "\n";
            cout << "Date of birth: ";
            cout << std->day << "/" << std->month << "/" << std->year << endl;
            cout << "Math Marks: ";
            cout << std->mathMarks << "\n";
            cout << "Physics Marks: ";
            cout << std->physicsMarks << "\n";
            cout << "Languague Marks: ";
            cout << std->languageMarks << "\n";
        }

        tmpNode = tmpNode->next;
    }
}
void bestAvg(StudentList *list)
{
    float max;
    float avg;
    Node *tmpNode = list->pHead;
    Student *std = tmpNode->data;
    Student *tmpStd = tmpNode->data;
    if (tmpNode == NULL)
    {
        cout << "Danh sach rong";
        return;
    }
    max = ((std->mathMarks) + (std->physicsMarks) + (std->languageMarks)) / 3;
    while (tmpNode != NULL)
    {

        avg = ((std->mathMarks) + (std->physicsMarks) + (std->languageMarks)) / 3;
        if (avg > max)
        {
            max = avg;
            tmpStd = std;
        }

        tmpNode = tmpNode->next;
    }
    cout<<"Student have the best average: \n";
    cout << tmpStd->name;
}
void deleteStudent(string name, StudentList *list){
    Node *tmpNode = list->pHead;
    Student *std = tmpNode->data;
    if (tmpNode == NULL)
    {
        cout << "Danh sach rong";
        return;
    }
    while (tmpNode != NULL)
    {
        if (std->name == name)
        {
            tmpNode->next = tmpNode->next->next;
            delete std;
        }
        tmpNode = tmpNode->next;
    }
}
void deleteStudent(StudentList *&list)
{
    string name;
    cout << "Enter name of student: ";
    cin >> name;
    deleteStudent(name, list);
}
//Add a new student to the list
int main()
{ // a,b,c,h;
    StudentList *list;
    Initialize(list);
    Student *dat = add();
    insert(list, dat);
    Student *phung = add();
    insert(list, phung);
    Student *hung = add();
    insert(list, hung);
    Student *newStudent;
    cout << endl;
    print(list);
    // countStudent(list);
    // PrintMathLessThan5(list);
    less5(list);
    cout << "Best avg:";
    bestAvg(list);
}