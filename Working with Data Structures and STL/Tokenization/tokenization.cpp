#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string location_info = "11.1111 | 22.2222 | City | State";
    
    std::stringstream ss(location_info);
    std::string lat, lon, city, state;

    std::getline(ss, lat, '|');
    std::getline(ss, lon, '|');
    std::getline(ss, city, '|');
    std::getline(ss, state); // does not a delimeter

    std::cout << lat << " " << lon << " " << city << " " << state << std::endl;

    return 0;
}

/*
1is at index: 0
1is at index: 1
.is at index: 2
1is at index: 3
1is at index: 4
1is at index: 5
1is at index: 6
 is at index: 7
|is at index: 8
 is at index: 9
2is at index: 10
2is at index: 11
.is at index: 12
2is at index: 13
2is at index: 14
2is at index: 15
2is at index: 16
 is at index: 17
|is at index: 18
 is at index: 19
Cis at index: 20
iis at index: 21
tis at index: 22
yis at index: 23
 is at index: 24
|is at index: 25
 is at index: 26
Sis at index: 27
tis at index: 28
ais at index: 29
tis at index: 30
eis at index: 31*/