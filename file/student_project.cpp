#include<iostream>
#include<fstream>
using namespace std;

class Item
{
    private:
        string name;
        float price;
        int qty;

    public:
        friend ofstream & operator<<(ofstream &ofs, Item &i);
        friend ifstream & operator>>(ifstream &ifs, Item &i);
        friend ostream & operator<<(ostream &os, Item &i);
};


int main()
{
    string name;
    float price;
    int qty, n;

    cout << "Enter the number of Item: ";
    cin >> n;

    Item *list[n];
    cout << "Enter all Item" << endl;
    for(int i=0; i<n; i++)
    {
        cout << "Enter " << i+1 << "Item Name, price and Quantity" << endl;
        cin >> name;
        cin >> price;
        cin >> qty;
        list[i] = new Item(name, price, qty);
    }
    

}