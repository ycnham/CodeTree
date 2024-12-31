#include <iostream>
#include <list>
#include <string>
using namespace std;

int n;
list<int> l;

int main() {

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        string command;
        cin >> command;

        if(command == "push_front")
        {
            int x;
            cin >> x;
            l.push_front(x);
        }

        else if(command == "push_back")
        {
            int x;
            cin >> x;
            l.push_back(x);
        }

        else if(command == "pop_front")
        {
            int y = l.front();
            l.pop_front();
            cout << y << endl;
        }

        else if(command == "pop_back")
        {
            int y = l.back();
            l.pop_back();
            cout << y << endl;
        }
        
        else if(command == "size")
        {
            cout << l.size() << endl;
        }

        else if(command == "empty")
        {
            if(l.empty())
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }

        else if(command == "front")
        {
            cout << l.front() << endl;
        }

        else
        {
            cout << l.back() << endl;
        }
    }
    
    return 0;
}