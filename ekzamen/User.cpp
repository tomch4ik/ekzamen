#include "User.h"

User::User(const string& name, double runDistance, double jumpHeight)
	: name(name), run_distance(runDistance), jump_height(jumpHeight)
{
}

bool User::run(double distance)
{
    if (distance <= run_distance) {
        cout << name << " ran the distance " << distance << " metres.\n";
        return true;
    }
    else {
        cout << name << " could not run the distance " << distance << " metres.\n";
        return false;
    }
}

bool User::jump(double height)
{
    if (height <= run_distance) {
        cout << name << " jumped over the obstacle in height " << height << " metres.\n";
        return true;
    }
    else {
        cout << name << " could not jump over the height obstacle " << height << " metres.\n";
        return false;
    }
}

string User::getName() const
{
    return name;
}
