//
// Created by asiia on 07.03.2021.
//

#ifndef ASSIGNMENT2_LECTUREROOM_H
#define ASSIGNMENT2_LECTUREROOM_H

#include "../AccessLevel.h"
#include "Room.h"

class LectureRoom : public Room {
public:
    LectureRoom(int numberOfSits, bool haveAProjector, bool haveAConditioner, int floor);
    static const :: TypeOfTheRoom type=LECTURE_ROOM;
public:
    bool HaveAProjector;
    bool HaveAConditioner;
    static std::vector<LectureRoom*> ListOfLectureRooms;
    //void PrintTheRoom() override;

private:
    int NumberOfSits = 150;
};


#endif //ASSIGNMENT2_LECTUREROOM_H
