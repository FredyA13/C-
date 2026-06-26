#include <iostream>
#include <string>

int main() {
    //std::string

    //.length()

    //.substr(int, int)

    //.find("", int)

    std::string poem = "The quick brown fox jumped over the lazy dog";
    std::string new_second_half = "galloped under the bridge";

    int lengthPoem = poem.length();
    std::cout << "Length: " << lengthPoem << std::endl;

    // find the index where jumped is
    std::size_t indexJumped = poem.find("jumped");
    std::cout << "Index of Jumped: " << indexJumped << std::endl;

    std::string firstHalf = poem.substr(0, indexJumped);
    std::cout << "First half: " << firstHalf << std::endl;

    std::string new_poem = firstHalf + new_second_half;
    std::cout << new_poem << std::endl;
    

}