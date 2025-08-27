#include <iostream>
#include <fstream>

using namespace std;

class shopping
{
private:
    int pcode;
    float price;
    float dis;
    string pname;

public:
    void menu();
    void admin();
    void buyer();
    void add();
    void edit();
    void del();
    void list();
    void receipt();
};

void shopping ::menu()
{
m:
    int choice;
    string email;
    string password;

    cout << "\t\t\t\t____________________________________\n";
    cout << "\t\t\t\t                                    \n";
    cout << "\t\t\t\t         shoppingmall Main Menu      \n";
    cout << "\t\t\t\t____________________________________\n";
    cout << "\t\t\t\t                                    \n";
    cout << "\t\t\t\t                                    \n";
    cout << "\t\t\t\t|  1) Admin                  |\n";
    cout << "\t\t\t\t                             |\n";
    cout << "\t\t\t\t|  2) Buyer                  |\n";
    cout << "\t\t\t\t                             |\n";
    cout << "\t\t\t\t|  3) Exit                   |\n";
    cout << "\t\t\t\t                             |\n";
    cout << "\n\t\t\t\t Please Select: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "\t\t\t Please Login";
        cout << "\t______________________\n";
        cout << "\t\t\t Enter Email: ";
        cin >> email;
        cout << "\t\t\t Enter Password: ";
        cin >> password;

        // if (email == "admin@email.com" && password == "admin123")
        if (email == "1" && password == "1")
        {
            admin();
        }
        else
        {
            cout << "Invalid email/password";
        }

    case 2:
    {
        buyer();
    }

    case 3:
    {
        exit(0);
    }
    default:
    {
        cout << "Please select from the given options";
    }
    }

    goto m;
}

void shopping ::admin()
{
m:
    int choice;
    cout << "\n\n\n\t\t\t Admin Menu";
    cout << "\n\t\t\t| __1. Add Product__|";
    cout << "\n\t\t\t|";
    cout << "\n\t\t\t| __2. Modify Product__|";
    cout << "\n\t\t\t|";
    cout << "\n\t\t\t| __3. Delete Product__|";
    cout << "\n\t\t\t|";
    cout << "\n\t\t\t| __4. Back to Main Menu|";

    cout << "\n\n\t Please Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        add();
        break;
    case 2:
        edit();
        break;
    case 3:
        del();
        break;
    case 4:
        menu();
        break;
    default:
        cout << "Invalid Choice";
    }
    goto m;
}

void shopping::buyer()
{
m:
    int choice;
    cout << "\n\n\t\t\t      Buyer  \n";
    cout << "\t\t\t____________________\n";
    cout << "\t\t\t 1. Buy the Product \n";
    cout << "\t\t\t                    \n";
    cout << "\t\t\t 2. Go Back         \n";
    cout << "\t\t\t                    \n";
    cout << "\t\t\t Enter Your Choice: ";

    cin >> choice;

    switch (choice)
     {
    case 1:
        receipt();
        break;
    case 2:
        menu();
    default:
        cout << "Invalid Choice";
    }
    goto m;
}

void shopping ::add()
{
m:
    fstream data;
    int c;
    int token = 0;
    float p;
    float d;
    string n;

    cout << "\n\n\t\t\t Add Product";
    cout << "\n\n\t\t\t Product Code";
    cin >> pcode;
    cout << "\n\n\t\t\t Product Name";
    cin >> pname;
    cout << "\n\n\t\t\t Product Price";
    cin >> price;
    cout << "\n\n\t\t\t Discount";
    cin >> dis;

    data.open("database.txt", ios::in);

    if (!data)
    {
        data.open("database.txt", ios::app | ios::out);
        data << " " << pcode << " " << pname << " " << price << " " << dis << "\n";
        data.close();
    }
    else
    {
        data >> c >> n >> p >> d;

        while (!data.eof())
        {
            if (c == pcode)
            {
                token++;
            }
            data >> c >> n >> p >> d;
        }
        data.close();

        if (token == 1)
        {
            goto m;
        }
        else
        {
            data.open("database.txt", ios::app | ios::out);
            data << " " << pcode << " " << pname << " " << price << " " << dis << "\n";
            data.close();
        }
    }
    cout << "\n\n\t\t Product Inserted";
}

void shopping ::edit()
{
    fstream data, data1;
    int pkey;
    int token = 0;
    int c;
    float p;
    float d;
    string n;

    cout << "\n\t\t\t Modify Product";
    cout << "\n\t\t\t Product Code: ";
    cin >> pkey;

    data.open("database.txt", ios::in);
    if (!data)
    {
        cout << "\n\n File doesn't exit.";
    }
    else
    {
        data1.open("database1.txt", ios::app | ios::out);

        data >> pcode >> pname >> price >> dis;
        while (!data.eof())
        {
            if (pkey == pcode)
            {
                cout << "\n\t\t New Product Code: ";
                cin >> c;
                cout << "\n\t\t New Product Name: ";
                cin >> n;
                cout << "\n\t\t New Product Price: ";
                cin >> p;
                cout << "\n\t\t New Product Discount: ";
                cin >> d;
                data1 << " " << c << " " << n << " " << p << " " << d << "\n";
                cout << "\n\n\t\t Product Modified";
                token++;
            }
            else
            {
                data1 << " " << pcode << " " << pname << " " << price << " " << dis << "\n";
            }
            data >> pcode >> pname >> price >> dis;
        }
        data.close();
        data1.close();

        remove("database.txt");
        std::rename("database1.txt", "database.txt");

        if (token == 0)
        {
            cout << "\n\n Product not found.";
        }
    }
}

void shopping ::del()
{
    fstream data, data1;
    int pkey;
    int token = 0;
    cout << "\n\n\t Delete Product";
    cout << "\n\n\t Product Code";
    cin >> pkey;
    data.open("database.txt", ios::in);
    if (!data)
    {
        cout << "File Doesn't Exit";
    }
    else
    {
        data1.open("database1.txt", ios::app | ios::out);
        data >> pcode >> pname >> price >> dis;
        while (!data.eof())
        {
            if (pcode == pkey)
            {
                cout << "\n\n\t Product Deleted Successfully";
                token++;
            }
            else
            {
                data1 << " " << pcode << " " << pname << " " << price << " " << dis << "\n";
            }
            data >> pcode >> pname >> price >> dis;
        }
        data.close();
        data1.close();

        remove("database.txt");
        std::rename("database1.txt", "database.txt");

        if (token == 0)
        {
            cout << "\n\n Product not found.";
        }
    }
}

void shopping::list()
{
    fstream data;
    data.open("database.txt", ios::in);
    cout << "\n\n________________________________________________\n";
    cout << "Product Code\tProduct Name\tPrice\tDiscount";
    cout << "\n________________________________________________\n";
    data >> pcode >> pname >> price >> dis;
    while (!data.eof())
    {
        cout << pcode << "\t\t" << pname << "\t\t" << price << "\t" << dis << "\n";
        data >> pcode >> pname >> price >> dis;
    }
    data.close();
}

void shopping::receipt()
{
    fstream data;

    int arrc[100];
    int arrq[100];
    char choice;
    int c = 0;
    float amount = 0;
    float dis = 0;
    float total = 0;

    data.open("database.txt", ios::in);
    if (!data)
    {
        cout << "No Product Available";
    }
    else
    {
        data.close();

        list();
        cout << "\n__________________________\n";
        cout << "\n|   Please Place Your Order\n";
        cout << "\n__________________________\n";
        do
        {
        m:
            cout << "\n\n Enter Product Code: ";
            cin >> arrc[c];
            cout << "\n\nEnter the Product Quantity: ";
            cin >> arrq[c];
            for (int i = 0; i < c; i++)
            {
                if (arrc[c] == arrc[i])
                {
                    cout << "\n\n Duplicate Product Code. Please try again.";
                    goto m;
                }
            }
            c = c + 1;
            cout << "\n\n Do you want to buy another product? If yes then press y else n: ";
            cin >> choice;
        } while (choice == 'y');

        cout << "\n\n\t\t\t____________RECEIPT_______________\n";
        cout << "\nNO\tProduct Name\tProduct Quantity\tPrice\tAmount with Discount";

        for (int i = 0; i < c; i++)
        {
            data.open("database.txt", ios::in);
            data >> pcode >> pname >> price >> dis;
            while (!data.eof())
            {
                if (pcode == arrc[i])
                {
                    amount = price * arrq[i];
                    dis = amount - (amount * dis / 100);
                    total = total + dis;
                    cout << "\n"
                         << i+1 << "\t" << pname << "\t\t" << arrq[i] << "\t\t\t" << price << "\t" << dis;
                }
                data >> pcode >> pname >> price >> dis;
            }
            data.close();
        }
    }
    cout << "\n____________________________________________________________________________";
    cout << "\n\t\t\t\t\tTotal Amount:   " << total;
}

int main()
{
    shopping s;
    s.menu();
}
