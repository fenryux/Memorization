//
// Created by lonep on 22-May-20.
//

#ifndef UNTITLED1_TESTCARD_H
#define UNTITLED1_TESTCARD_H


#include <string>
#include <vector>

class testCard {
public:
    std::string question;
    std::string trueAn;
    std::vector <std::string> falseAn;
    static short globalmistakes;
    short mistakes = 0;
    bool true_anwsered;

};


#endif //UNTITLED1_TESTCARD_H
