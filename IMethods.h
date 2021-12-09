#pragma once

#include "classes.pb.h"

class IMethods {
    virtual double GetAverageScore(const foo::bar::FullName& name) = 0;
    virtual std::string GetAllInfo(const foo::bar::FullName& name) = 0;
    virtual std::string GetAllInfo() = 0;
};