#include <bits/stdc++.h>
using namespace std;

struct User {
    int userID;
    int balance;
};

int main() {
    using namespace std;

    int n;
    cin >> n;
    vector<User> users(n);

    for (auto &user : users) {
        cin >> user.userID >> user.balance;
    }

    int t;
    cin >> t;
    while (t--) {
        int from_userID, to_userID, amount;
        cin >> from_userID >> to_userID >> amount;

        auto from_it = find_if(users.begin(), users.end(), [&](User &u) {return u.userID == from_userID; });
        auto to_it = find_if(users.begin(), users.end(), [&](User &u) { return u.userID == to_userID; });

        if (from_it != users.end() && from_it->balance >= amount) {
            from_it->balance -= amount;
            to_it->balance += amount;
            cout << "Success" << endl;
        } else {
            cout << "Failure" << endl;
        }
    }

    sort(users.begin(), users.end(), [](const User &a, const User &b) {
        return a.balance < b.balance;
    });
    cout<<"\n";
    for (const auto &user : users) {
        cout << user.userID << " " << user.balance << endl;
    }

    return 0;
}