#pragma once
#include "User.h"
class Action
{
public:
    virtual bool overcome(User& user) = 0;
    virtual ~Action() {}
};

