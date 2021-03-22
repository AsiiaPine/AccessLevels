//
// Created by asiia on 07.03.2021.
//
#include <iostream>
#include "Room.h"
#include "../AllAboutUsers/Users.h"

const char *GetMyType(enum TypeOfTheRoom type) {
    switch (type) {
        case 0:
            return "Room";
        case 1:
            return "Lecture Room";
        case 2:
            return "Conference Room";
        case 3:
            return "Class Room";
        case 4:
            return "Lab";
        case 5:
            return "Cabinet";
        case 6:
            return "Director Cabinet";

    }
}

//auto Room::ListOfRooms = new vector<Room*> ();
std::vector<Room *> Room::ListOfRooms;
int Room::AmountOfRooms = 0;
bool Room::IsEmergency = false;

void Room::PrintTheRoom() {

    std::cout << GetMyType(this->typeOfTheRoom) << " number " << this->number << "\n Number of sits: "
              << this->NumberOfSits << "\n Access Level: " << this->AccessLevel << endl;
}

Room::Room(int numberOfSits, enum AccessLevel accessLevel, int floor, enum TypeOfTheRoom type) :
        NumberOfSits(numberOfSits), TheFloor(floor), typeOfTheRoom(type) {
    if ((floor == 1) & ((type == LECTURE_ROOM) | (type == CONFERENCE_ROOM))) this->AccessLevel = BLUE;
    else this->AccessLevel = accessLevel;
    ListOfRooms.push_back(this);
    AmountOfRooms++;
    this->number = AmountOfRooms;
    for (Users* AnUser: Users::ListOfUsers) {
        if (AnUser->accessLevel >= this->AccessLevel) {
            AnUser->ListOfAvailableRooms.push_back(this);
        }
    }
}

void Room::Emergency() {
    Room::IsEmergency = true;
    cout << "\n\nEMERGENCY!!!!!!!!!!! All rooms are open\n\n";
}