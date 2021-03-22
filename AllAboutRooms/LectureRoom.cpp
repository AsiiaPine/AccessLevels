//
// Created by asiia on 07.03.2021.
//

#include <iostream>
#include "LectureRoom.h"
#include "../AccessLevel.h"
#include "../AllAboutUsers/Users.h"

std::vector<LectureRoom*> LectureRoom::ListOfLectureRooms;
LectureRoom::LectureRoom(int numberOfSits, bool haveAProjector, bool haveAConditioner, int floor) :
Room(numberOfSits, GREEN, floor, LECTURE_ROOM), HaveAProjector(haveAProjector),
                                              HaveAConditioner(haveAConditioner), NumberOfSits(numberOfSits) {
    if(floor==1) this->AccessLevel=BLUE;
    Users::ListOfUsers.at(Users::ListOfUsers.size()-2)->WhatRoomICanEnter();
    ListOfLectureRooms.push_back(this);
}
/*void LectureRoom::PrintTheRoom() {

    std::cout<<LectureRoom::type<<" number "<<this->number<<"\n Number of sits: "<< this->NumberOfSits<<"\n Access Level: "<< this->AccessLevel<<endl;
}
*/