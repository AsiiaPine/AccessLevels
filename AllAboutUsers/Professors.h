//
// Created by asiia on 07.03.2021.
//

#ifndef ASSIGNMENT2_PROFESSORS_H
#define ASSIGNMENT2_PROFESSORS_H
#include "../AllAboutRooms/LectureRoom.h"
#include "../AllAboutRooms/Lab.h"
#include "Users.h"
#include "../AllAboutRooms/Cabinet.h"
#include <string>
#include <vector>

class Professors: public Users {
public:

    Professors(const string &firstName, const string &lastName, Labs professorsLab, Cabinet* professorCab);
    Cabinet* ProfessorCab;
    void ChangeAccessLevel(LectureRoom &LectureRoom);
    Labs ProfessorsLab; //The lab where the professor works

};


#endif //ASSIGNMENT2_PROFESSORS_H
