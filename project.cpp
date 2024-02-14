#include <iostream>
using namespace std;

class store
{
public:
    int p[100], j, d = 0, o[10], z = 0, n, tot = 0,x[10],f=0,t=0;
    int choice,qun;
    double gst,nbill;
    string i[100], c,m;


    store()
    {
        cout << endl << "------------* SWIGGY *------------" << endl << endl;

        cout << "    ===>> List Of Items <<===   " << endl << endl;
        i[0] = "Burger";
        i[1] = "rolls";
        i[2] = "pizza";
        i[3] = "chiness";
        i[4] = "khichdi";
        i[5] = "vadapav";
        i[6] = "biryani";
        i[7] = "dosa";

        p[0] = 100;
        p[1] = 70;
        p[2] = 299;
        p[3] = 65;
        p[4] = 50;
        p[5] = 40;
        p[6] = 90;
        p[7] = 115;

        cout<<"-------------------------------"<< endl;

        cout<< "No.\t"<<"Item\t\t"<<"Price"<< endl;
        cout<<"-------------------------------"<< endl;

        for (j = 0; j <=7; j++)
        {
            cout << j + 1 << "\t";
            cout << i[j] << "\t\t";
            cout << p[j] << endl;
        }
        cout<<"-------------------------------"<< endl<<endl;
    }

    void data()
    {
        cout << "\n\n================ Customer Details ================" << endl << endl;
        cout << "Enter Customer Name          :" ;
        cin >> c;

        again :

        cout << "Enter Customer Mobile Number :" ;
        cin>>m;

        d=0;
        d=m.size();
        
        if (d == 10)
        {
            cout<<endl;
        }else
            {
                cout << "Invalid Number" << endl;
                goto again;
            }

    }

    void order()
    {
        
    start:
    

        cout << "Enter 0 for bill (OR) ";

        cout << "Enter your choice : " ;
        cin >> choice;
        if (choice == 0)
        {
            goto end;
        }else
            {
                 o[z] = choice;
                 cout<<"Enter quantity :";
                 cin>>qun;

                 x[z]=qun;
                 z++;

                cout<<endl;
                goto start;
             }
    end:
        cout << " ";
    }

    void bill()
    {
        z--;

        cout<<"\n\n";
        cout<<"\t==================================================="<<endl << endl;

        cout << "\t" << "\t   BILL ( Mission Book Store )"<<endl << endl;
        cout<<"\t==================================================="<<endl;

        cout <<endl<< "\tCustomer Name          : " << c ;
        cout <<endl<< "\tCustomer Mobile Number : " << m << endl << endl;

        cout<<"\t---------------------------------------------------"<<endl;
        
        cout<<"\t"<<"No.\t"<<"Items"<<"\t"<<"price"<<"\t"<<"Quantity"<<endl;

        cout<<"\t---------------------------------------------------"<<endl;
        
        for (j = 0; j <= z; j++)
        {
            n = o[j];

            f = x[j];
            n--;

            cout<<"\t"<<j+1<<"\t";

            cout << i[n] << "\t" << p[n] << "\t" << f <<endl;

            t = f*p[n];

            tot = tot + t;
        }
        cout<<"\t---------------------------------------------------"<<endl;
        

        gst= tot * 0.18;

        nbill=tot+gst;

        cout << endl<<endl;
        cout<<"\t" << "Total bill  : " << tot << endl;
        cout<<"\t" << "GST         : " << gst << endl;
        cout<<"\t" << "Net bill    : " << nbill << endl;
    }

    ~store()
    {
        cout<<endl<<endl;
        cout<<"\t"<<"--------- Have A Nice Day ----------" <<"\n\n";
        cout<<"\t==================================================="<<endl;

    }
};

int main()
{
    store s1;

    s1.data();
    s1.order();
    s1.bill();

    return 0;
}
