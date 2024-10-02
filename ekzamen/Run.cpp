
#include "Run.h"

Run::Run(int length) : length(length)
{
}

bool Run::overcome(User& user)
{
	cout << user.getName() << " running on the track " << length << " metres.\n";
	return user.run(length);
}
