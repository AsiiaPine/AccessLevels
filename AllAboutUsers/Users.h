//
// Created by asiia on 07.03.2021.
//

#ifndef ASSIGNMENT2_USERS_H
#define ASSIGNMENT2_USERS_H
using namespace std;

#include <string>
#include "../AccessLevel.h"
#include "../AllAboutRooms/Room.h"

class Users {
public:
    Users(const string &firstName, const string &lastName, AccessLevel accessLevel);

    void WhatRoomICanEnter();
    static vector<Users*> ListOfUsers;
    string FirstName;
    string LastName;
    void ResetTheListOfAR();
    AccessLevel accessLevel;
    vector<Room*> ListOfAvailableRooms;
    void ListOfRoomsTheUserCanEnter();
    void TryToEnter(Room* room);
    bool CanUserEnterRoom(Room* room);
};

#endif //ASSIGNMENT2_USERS_H
