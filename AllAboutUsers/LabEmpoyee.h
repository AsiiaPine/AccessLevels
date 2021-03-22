//
// Created by asiia on 07.03.2021.
//

#ifndef ASSIGNMENT2_LABEMPOYEE_H
#define ASSIGNMENT2_LABEMPOYEE_H
#include "../Labs.h"
#include "Users.h"
#include "../AccessLevel.h"


class LabEmployee : public Users {
public:
    LabEmployee(const string &firstName, const string &lastName,
                Labs hisHerLab, bool isDirectorWaitingTheEmployeeToday, int yearOfHiring);

public:


    AccessLevel accessLevel=YELLOW;
private:
    Labs HisHerLab;
    bool IsDirectorWaitingTheEmployeeToday;
private:
    int YearOfHiring;
    //times_of_being_late
};

#endif //ASSIGNMENT2_LABEMPOYEE_H
