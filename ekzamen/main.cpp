#include <iostream>
#include <vector>
#include "Run.h"
#include "Wall.h"
#include "Robot.h"
#include "Cat.h"
#include "Human.h"
using namespace std;

int main()
{
    vector<User*> users = 
    {
       new Human("Jack Brown"),
       new Cat("Kitty"),
       new Robot("ITrobot")
    };
    vector<Action*> actions = 
    {
      new Run(500),
      new Wall(0.7),
      new Run(1800),
      new Wall(3)
    };
    for (User* user : users) {
        for (Action* action : actions) {
            if (!action->overcome(*user)) {
                cout << user->getName() << " left the game.\n";
                break;
            }
        }
        cout << endl;
    }
    for (User* user : users) {
        delete user;
    }

    for (Action* action : actions) {
        delete action;
    }
}