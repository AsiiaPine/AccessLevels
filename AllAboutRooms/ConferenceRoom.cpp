//
// Created by asiia on 20.03.2021.
//

#include <iostream>
#include "ConferenceRoom.h"

ConferenceRoom::ConferenceRoom(int numberOfSits, bool haveConditioner, bool haveProjector, int floor): Room(numberOfSits, GREEN, floor, CONFERENCE_ROOM),NumberOfSits(numberOfSits), HaveConditioner(haveConditioner), HaveProjector(haveProjector) {

    if(floor==1) this->AccessLevel=BLUE;
}/*
void ConferenceRoom::PrintTheRoom() {

    std::cout<<ConferenceRoom::type<<" number "<<this->number<<"\n Number of sits: "<< this->NumberOfSits<<"\n Access Level: "<< this->AccessLevel<<endl;
}
*/