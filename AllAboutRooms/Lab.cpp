//
// Created by asiia on 07.03.2021.
//

#include "Lab.h"
#include "../Labs.h"
std::vector<Lab*> Lab::ListOfLabs;
Lab::Lab(int numberOfSits, Labs nameOfTheLab, int floor) : Room(numberOfSits, YELLOW, floor, LAB),
                                                NameOfTheLab(nameOfTheLab) {ListOfLabs.push_back(this);}
