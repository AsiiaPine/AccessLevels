//
// Created by asiia on 07.03.2021.
//
using namespace std;
#ifndef ASSIGNMENT2_ROOM_H
#define ASSIGNMENT2_ROOM_H
#include "TypeOfTheRoom.h"
#include <vector>
#include "../AccessLevel.h"

class Room {
public:
    Room(int numberOfSits, AccessLevel accessLevel, int floor, TypeOfTheRoom type);
    int number;
    int NumberOfSits;
    int TheFloor;
    AccessLevel AccessLevel=NO_LEVEL;
    void PrintTheRoom();
    static vector<Room*> ListOfRooms;
    void Emergency();
    static bool IsEmergency;
protected:
    static int AmountOfRooms;
    TypeOfTheRoom typeOfTheRoom;
};



#endif //ASSIGNMENT2_ROOM_H
