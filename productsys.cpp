#include <iostream>
using namespace std;

int get_num();

class product
{
private:
    string product_name;
    int product_id;
    string company_name;

public:
    void setdata();
    void display();

    friend product show_product(product, product, product);
};

void product::setdata()
{
    cout << "product name :" << endl;
    cin >> product_name;

    cout << "product id :" << endl;
    cin >> product_id;

    cout << "product company name :" << endl;
    cin >> company_name;
}

void product::display()
{
    cout << "product name :" << product_name << endl
         << "product id :" << product_id << endl
         << "product company name:"
         << company_name << endl;
}

int main()
{
    product p1[100], p2[100];

    int choice; // main switch block
    int num1;

    int choice1;

    cout << "enter your choice" << endl;

    do
    {
        cout << "1.store product" << endl
             << "2.show products" << endl
             << "3.buy products" << endl
             << "4.Exit" << endl;
        cin >> choice;

        switch (choice)
        {

        case 1:
            cout << "enter no of product you want to store:"
                 << endl;
            num1 = get_num();

            for (int i = 0; i < num1; i++)
            {
                cin;
                "";
                p1[i].setdata();
            }
            break;

        case 2:
            cout
                << "product details"
                << endl;

            for (int i = 0; i < num1; i++)
            {
                cout << "";
                p1[i].display();
            }
            break;

        case 3:
            cout << "Avalable products" << endl;
            cout << "1.laptop" << endl;
            cout << "2.mobile" << endl;
            cout << "enter your choice " << endl;
            cin >> choice1;


            switch (choice1)

            {
            case 1:
                cout << " price : 20000" << endl;
                cout << "company : APPLE" << endl;
                cout << "warranty : 2 YEARS" << endl;
                break;

            case 2:
                cout << " price : 150000" << endl;
                cout << "company : SAMSUNG" << endl;
                cout << "warranty : 1 YEAR" << endl;
                break;

            default:
                cout << "invalid choice" << endl;
            }


            break;

            case 4:
            exit(0);

        default:
            cout << "invalid choice" << endl;
        }

    } while (1);
}

int get_num()
{
    int num;
    cin >>
        num;
    return (num);
}
