//
// Created by Admin on 2021/6/26.
//
#include "Sort.h"

//Reload ostream::operator<<
//template <typename T1, typename T2>
//std::ostream& operator<<(std::ostream& os, const std::variant<T1, T2>& v) {
//    std::visit([&os](auto&& arg) {os << arg;}, v);
//    return os;
//}

template<typename T, typename... Ts>
std::ostream &operator<<(std::ostream& os, const std::variant<T, Ts...>& v) {
    std::visit([&os](auto&& arg) {os << arg;}, v);
    return os;
}


void Sort::setData(Dataset &data){
    this->data = data.getData();
    this->size = data.getSize();
}
void print();                   //print the sorted vector
void show();                    //visualized sort show
bool isSorted();                //check the vector is sorted or not
double calcTime();              //calculate the running

void Sort::print() {
    for(int i = 0; i < data.size(); ++i)
        std::cout << data[i];
}

bool Sort::isSorted() {
    for (int i = 0; i < data.size() - 1; ++i)
        if (data[i] > data[i + 1])
            return false;
    return true;
}

double Sort::calcTime() {
    double c = 1.0 / CLOCKS_PER_SEC;
    return c * (end - start);
}