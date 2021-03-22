//
// Created by asiia on 07.03.2021.
//
#include <string>
#include "Students.h"

Students::Students(const string &firstName, const string &lastName, float gpi,
         float scholarshipAmount, GrantTypes grantType) : Users(firstName, lastName, GREEN), GPI(gpi),
                                                          scholarshipAmount(scholarshipAmount),
                                                          GrantType(grantType) {}