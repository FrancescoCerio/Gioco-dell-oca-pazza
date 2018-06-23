//
//  Colors.hpp
//  GOP
//
//  Created by Francesco Cerio on 21/04/18.
//  Copyright © 2018 Francesco Cerio. All rights reserved.
//

#ifndef Colors_hpp
#define Colors_hpp

#include <stdio.h>
#include <string>
#include <stdlib.h>
#define RED "\033[0;31m"
#define GREEN  "\033[0;32m"
#define YELLOW  "\033[0;33m"
#define BLUE  "\033[0;34m"
#define DEFAULT  "\033[0m"

using namespace std;

        
const char* setColor(int n);
        
const char* setRed();
const char* setYellow();
const char* setBlue();
const char* setGreen();
const char* setDefault();




#endif /* Colors_hpp */
