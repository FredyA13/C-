#include <iostream>
#include <vector>

int main() {

    // pizza party
    std::string rsvp_responses[3] = {"yes", "no", "maybe"};

    // automatically order 1 pizza
    // automatically link to the ordering website

    // add to cart as responses roll in
    std::vector<std::string> responded_yes = {"Myself"};
    
    responded_yes.push_back("Johnny");
    responded_yes.push_back("Jane");

    std::cout << "Array 0th index: " << rsvp_responses[0] << std::endl;
    std::cout << "Vector 0th index: " << responded_yes.at(0) << std::endl;

    return 0;
}