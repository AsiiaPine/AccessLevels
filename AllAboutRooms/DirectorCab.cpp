//
// Created by asiia on 07.03.2021.
//

#include <iostream>
#include "DirectorCab.h"

DirectorCab::DirectorCab(int numberOfSits, bool isItBetterThanSucciCabinet, int floor) : Room(
        numberOfSits, RED, floor,DIRECTOR_CAB), IsItBetterThanSucciCabinet(isItBetterThanSucciCabinet) {}
/*void DirectorCab::PrintTheRoom() {
    std::cout<<DirectorCab::type<<" number "<<this->number<<"\n Number of sits: "<< this->NumberOfSits<<"\n Access Level: "<< this->AccessLevel<<endl;
}*/