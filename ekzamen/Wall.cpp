#include "Wall.h"

Wall::Wall(int height) : height(height)
{
}

bool Wall::overcome(User& user)
{
	cout << user.getName() << " jumping over wall height" << height << " metres.\n";
	return user.jump(height);
}
