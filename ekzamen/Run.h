#pragma once
#include "Action.h"
class Run : public Action
{
    int length;

public:
    Run(int length);
    bool overcome(User& user);
};

