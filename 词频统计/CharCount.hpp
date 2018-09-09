//
//  CharCount.hpp
//  词频统计
//
//  Created by wenyiqian on 2018/9/9.
//  Copyright © 2018年 ding. All rights reserved.
//

#ifndef CharCount_hpp
#define CharCount_hpp

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <fstream>
#include <map>
#define mci map<char,int>

using namespace std;

int CharCount(const char *filename);

#endif /* CharCount_hpp */
