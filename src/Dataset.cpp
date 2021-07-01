//
// Created by admin on 2021/6/23.
//

#include "Dataset.h"

void Dataset::setDataSize(int size) {
    this->size = size;
}

int Dataset::getSize(){
    return this->size;
}

std::vector<var>  Dataset::getData(){
    return this->data;
}

// Note|Template should be defined in header file



