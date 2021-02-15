#include<iostream>
#include<fstream>
#include<map>
using namespace std;

class Item
{
    private:
        string name;
        int price;
        int quantity;
    
    public:
        Item(string s, int p, int q);
        void setName(string s);
        void setPrice(int p);
        void setQuantity(int q);
        string getName();
        int getPrice();
        int getQuantity();
        void display();
};

Item :: Item(string s, int p, int q)
{
    setName(s);
    setPrice(p);
    setQuantity(q);
}

void Item :: setName(string s)
{
    name = s;
}

void Item :: setPrice(int p)
{
    price = p;
}

void Item :: setQuantity(int q)
{
    quantity = q;
}
string Item :: getName()
{
    return name;
} 

int Item :: getPrice()
{
    return price;
}

int Item :: getQuantity()
{
    return quantity;
}

void Item :: display()
{
    cout << "Name      : " << name << endl;
    cout << "Price     : " << price << endl;
    cout << "Quanitity : " << quantity << endl;
}

// ofstream & operator<<(ofstream &ofs, Item &i)
// {
//     ofs << i.name << endl;
//     ofs << i.price << endl;
//     ofs << i.quantity << endl;

//     return ofs;
// }

// ifstream & operator>>(ifstream &ifs, Item &i)
// {
//     ifs >> i.name >> i.price >> i.quantity;
//     return ifs;
// }

int main()
{
    int num;
    
    cout << "Enter the Number of Items : ";
    cin >> num;

    Item *list[num];

    // File Stream
    fstream file;
    file.open("List.txt", ios::out | ios::in | ios::app);

    string n;
    int p, q;
    for(int i=0; i<num; i++)
    {   
        cout << "Enter name, price and quantity of " << i+1 << " Item : ";
        cin >> n >> p >> q;
        list[i] = new Item(n,p,q);
        file << list[i]->getName() << list[i]->getPrice() << list[i]->getQuantity() << endl;
    }

    while(file.eof() != 0)
    {
        file >> n >> p >> q;
        cout << "Name : " << n << endl;
        cout << "Price : " << p << endl;
        cout << "Quanitity : " << q << endl;
    }


    file.close();

    return 0;
}