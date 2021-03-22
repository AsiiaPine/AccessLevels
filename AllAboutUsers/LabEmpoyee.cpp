//
// Created by asiia on 07.03.2021.
//

#include "LabEmpoyee.h"

LabEmployee::LabEmployee(const string &firstName, const string &lastName, Labs hisHerLab, bool isDirectorWaitingTheEmployeeToday,
                         int yearOfHiring) : Users(firstName, lastName, accessLevel), accessLevel(YELLOW),
                                             HisHerLab(hisHerLab),
                                             IsDirectorWaitingTheEmployeeToday(isDirectorWaitingTheEmployeeToday),
                                             YearOfHiring(yearOfHiring) { if(isDirectorWaitingTheEmployeeToday) this->accessLevel=RED;}
