//
// Created by asiia on 07.03.2021.
//

#ifndef ASSIGNMENT2_STUDENTS_H
#define ASSIGNMENT2_STUDENTS_H
#include "Users.h"
#include "GrantTypes.h"

class Students: public Users {
public:
    Students(const string &firstName, const string &lastName, float gpi, float scholarshipAmount, GrantTypes grantType);

public:
    float GPI;
    float scholarshipAmount;
    GrantTypes GrantType;
};


#endif //ASSIGNMENT2_STUDENTS_H
