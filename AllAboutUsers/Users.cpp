//
// Created by asiia on 07.03.2021.
//

#include "Users.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

std::vector<Users*> Users::ListOfUsers;

Users::Users(const string &firstName, const string &lastName, AccessLevel accessLevel) : FirstName(firstName),
                                                                                         LastName(lastName),
                                                                                         accessLevel(accessLevel) {
    this->ListOfRoomsTheUserCanEnter();
    ListOfUsers.push_back(this);
}

void Users::WhatRoomICanEnter() {
    std::cout << this->FirstName << " " << this->LastName << " can enter the following rooms: \n";
    for (Room* room:this->ListOfAvailableRooms) {
        room->PrintTheRoom();
    }
    if (ListOfAvailableRooms.empty())
        std::cout << "\nSorry " << this->FirstName << ", You don't deserve to open any of universsity's portals\n";
}

bool Users::CanUserEnterRoom(Room *room) {
//    auto result=std::find_if(std::begin(ListOfAvailableRooms), std::end(ListOfAvailableRooms), room);
    if ((this->accessLevel >= room->AccessLevel) || Room::IsEmergency) return true;
    return false;
}

void Users::TryToEnter(Room *room) {
    std::cout << this->FirstName << " " << this->LastName << " ";
    if (this->CanUserEnterRoom(room)) {
        std::cout << "enters the room " << room->number << "\n";
    } else std::cout << "can not enter the room " << room->number << "\n";
}

void Users::ResetTheListOfAR() {
    ListOfAvailableRooms.clear();
    ListOfRoomsTheUserCanEnter();
}

void Users::ListOfRoomsTheUserCanEnter() {
    for (auto  A_Room : Room::ListOfRooms) {

        if (this->CanUserEnterRoom(A_Room)) {
            ListOfAvailableRooms.push_back(A_Room);
        }
    }
}