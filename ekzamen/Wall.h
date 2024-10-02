#pragma once
#include "Action.h"
class Wall : public Action
{
    int height;

public:
    Wall(int height);
    bool overcome(User& user);
};

