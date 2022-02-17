#include <iostream>
using namespace std;

int main()
{

    // cout << "This Is Lab 9";

    int age;
    cout << "Tell Me Your Age" << endl;
    cin >> age;

    if (age < 18)
    {
        cout << "You Can Not Vote For Modiji" << endl;
    }
    else if (age == 18)
    {
        cout << "You Can Vote But It Will Be Count As First Vote" << endl;
    }
    else if (age == 50)
    {
        cout << "congrats for half century" << endl;
    }
    else
    {
        cout << "You Can Vote Bro";
    }

    return 0;
}