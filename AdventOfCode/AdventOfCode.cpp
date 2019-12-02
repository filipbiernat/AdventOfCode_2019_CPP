﻿#include <iostream>
#include <memory>
#include "AdventDay.h"
#include "Day0\Day0.h"
#include "Day1\Day1A.h"
#include "Day1\Day1B.h"
#include "Day2\Day2A.h"

int main()
{
    AdventDay(1, std::make_unique<Day1A>(), std::make_unique<Day1B>());
    AdventDay(2, std::make_unique<Day2A>(), std::make_unique<Day0>());

    std::cout << "Execution completed." << std::endl;
    return 0;
}