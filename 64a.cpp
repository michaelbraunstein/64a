/* 
Exercise 6-4a
This program will create a movie set
*/
#include<iostream>
#include<set>
#include<string>
#include<iterator>
#include<algorithm>
using namespace std;

void main()
{
    string name;.
    int ans, pos;
    bool found = false;
            // declare set of strings vm
      // declare set iterator vmit
        // declare iterator to cout osit
      // declare pair of set of string iterator named p

    cout << "Enter movie name (-1 to end):  ";
    getline(cin, name, '\n');
    while (name != "-1")
    {
            // insert name into set, assign to pair object
                    // if pair's second field is true
                // print that pair's first field value was inserted
        else
             // print that pairs' first field was already in set
        cout << "Enter movie name (-1 to end):  ";
        getline(cin, name, '\n');
    }

    cout << "Enter 1 to insert, 2 to delete:  ";
    cin >> ans;
    if (ans == 1)
    {
        cout << "Enter movie name:  ";
        cin.ignore(1, '\n');
        getline(cin, name, '\n');

            // insert name into set, assign to pair object
                    // if pair's second field is true
                // print that pair's first field value was inserted
        else
             // print that pairs' first field was already in set
    }
    else if (ans == 2)
    {
        cout << "Enter movie name to delete:  ";
        cin.ignore(1, '\n');
        getline(cin, name, '\n');
            // find name in set, return to iterator
            // if iterator is not at the end of set
        {
             // print what iterator is pointing at to say will be deleted
             // delete that name from set
        }
        else
            cout << name << " not in set\n";
    }

    cout << "Number of movies in set is " // print size
            // copy set to cout iterator
}
