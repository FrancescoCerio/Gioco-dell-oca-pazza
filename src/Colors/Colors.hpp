//
//  Colors.hpp
//  Gioco dell'oca pazza
//
//  Created by Francesco Cerio on 28/04/18.
//  Copyright © 2018 Francesco Cerio. All rights reserved.
//

#ifndef Colors_hpp
#define Colors_hpp
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <cstring>
#define RED "\x1b[31m"
#define GREEN  "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE  "\x1b[34m"
#define DEFAULT  "\x1b[0m"

/*
 #define RED "\033[0;31m"
 #define GREEN  "\033[0;32m"
 #define YELLOW  "\033[0;33m"
 #define BLUE  "\033[0;34m"
 #define DEFAULT  "\033[0m"
 */

using namespace std;


const char* setColor(int n);

const char* setRed();
const char* setYellow();
const char* setBlue();
const char* setGreen();
const char* setDefault();

#endif /* Colors_hpp */
