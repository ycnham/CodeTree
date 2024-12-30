#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;

    cin >> n;

    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        string command;
        cin >> command;

        if (command == "push_back")
        {
            int a;
            cin >> a;
            arr.push_back(a);
        }
        else if (command == "pop_back")
        {
            arr.pop_back();
        }
        else if (command == "size")
        {
            cout << arr.size() << endl;
        }
        else if (command == "get")
        {
            int b;
            cin >> b;
            cout << arr[b - 1] << endl;
        }
    }

    return 0;
}