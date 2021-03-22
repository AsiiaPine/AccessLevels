//
// Created by asiia on 07.03.2021.
//

#include "Director.h"


Director::Director(const string &firstName, const string &lastName,
                   DirectorCab *bossCabinet, WhatCoffeeToBring lovelyCoffee) : Users(firstName, lastName,
                                                                                           RED),
                                                                                     BossCabinet(bossCabinet),
                                                                                     lovelyCoffee(lovelyCoffee) {}
