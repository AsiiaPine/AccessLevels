//
// Created by asiia on 07.03.2021.
//

#include <iostream>
#include "ClassRoom.h"
#include "../AccessLevel.h"
std::vector<ClassRoom*> ClassRoom::ListOfClassRooms;
ClassRoom::ClassRoom(int numberOfSits, bool haveProjector, int amountOfSits, int floor) : Room(
        numberOfSits, GREEN, floor, Class_Room), HaveProjector(haveProjector), AmountOfSits(amountOfSits) {
    ListOfClassRooms.push_back(this);
}/*
void ClassRoom::PrintTheRoom() {

    std::cout<<ClassRoom::type<<" number "<<this->number<<"\n Number of sits: "<< this->NumberOfSits<<"\n Access Level: "<< this->AccessLevel<<endl;
}*/