#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};

class Linklist
{
    private:
        Node *head;
    
    public:
        Linklist(){head = NULL;}

        void display();
        void insert();
        void deletee();
};

int main()
{
    
}