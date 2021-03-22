//
// Created by asiia on 07.03.2021.
//

#ifndef ASSIGNMENT2_CLASSROOM_H
#define ASSIGNMENT2_CLASSROOM_H


#include "Room.h"

class ClassRoom: public Room {
public:
    ClassRoom(int number, bool haveProjector, int amountOfSits, int floor);

   static std::vector<ClassRoom*> ListOfClassRooms;
    bool HaveProjector;
    int AmountOfSits;
private:
    ::AccessLevel AccessLevel=GREEN;
    //void PrintTheRoom() override;

};


#endif //ASSIGNMENT2_CLASSROOM_H
