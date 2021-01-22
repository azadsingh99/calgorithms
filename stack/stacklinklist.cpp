#include<iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node *next;
};

class Stack
{
    private:
        Node *head;
    
    public:
        Stack() { head = NULL;}
        void push(int x);
        int pop();
        void display();
        int peak(int index);
};

void Stack :: push(int x)
{
    Node *temp = new Node;
    if(temp == NULL)
    {
        cout << "Stack Overflow" << endl;
    }

    else
    {
        temp->data = x;
        temp->next = head;
        head = temp;
    }
}

int Stack ::pop()
{
    int x;
    if(head == NULL)
    {
        cout << "Stack Underflow" << endl;
    }

    else
    {
        x = head->data;
        Node *temp = new Node;
        temp = head->next;
        delete head;
        head = temp;
    }

    return x;
}

void Stack :: display()
{
    Node *temp = new Node;

    temp = head;
    while(temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int Stack :: peak(int index)
{
    Node *temp = new Node;
    temp = head;

    int count = 0;

    while(temp) {
        temp = temp->next;
        count++;
    }

    if(index > count)
    {
        return 0;
    }

    int i=0;
    temp = head;

    while(i < (index-1))
    {
        temp = temp->next;
        i++;
    }

    return (temp->data);


}
int main()
{
    Stack st;
    int option, x, index;
    while(1)
    {
        printf("\n");
        printf("Operations to perform :\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peak\n");
        printf("4. Traverse\n");
        printf("5. Exit\n");
        printf("\n");

        cin >> option;

        switch(option)
        {
            case 1: 
                    cout << "Enter the element to be pushed into the stack" << endl;
                    cin >> x;    
                    st.push(x);
                    break;

            case 2:
                    x = st.pop();
                    if(x != 0)
                    {
                        cout << "Poped Element is ::: " << x << endl;
                    }
                    else
                    {
                        cout << "Stack Underflow" << endl;
                    }
                    break;
            
            case 3:
                    cout << "Enter the index to see the element" << endl;
                    cin >> index;
                    x = st.peak(index);
                    if(x != 0)
                    {
                        cout << "Element is ::: " << x << endl;
                    }
                    else
                    {
                        cout << "Stack Underflow or invalid index" << endl;
                    }
                    break;

            case 4:
                    st.display();
                    break;

            case 5:
                    exit(0);

            default:
                    cout << "Invalid Option" << endl;
        }
    }
}