//
// Created by asiia on 07.03.2021.
//
using namespace std;
#include "Professors.h"
#include "../AccessLevel.h"
#include <string>
void Professors::ChangeAccessLevel(LectureRoom &LectureRoom) {
    LectureRoom.AccessLevel=NO_LEVEL;
}

Professors::Professors(const string &firstName, const string &lastName, Labs professorsLab, Cabinet* professorCab)
        : Users(firstName, lastName, YELLOW), ProfessorsLab(professorsLab), ProfessorCab(professorCab) {}
