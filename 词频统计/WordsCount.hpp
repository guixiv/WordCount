//
//  WordsCount.hpp
//  词频统计
//
//  Created by wenyiqian on 2018/9/9.
//  Copyright © 2018年 ding. All rights reserved.
//

#ifndef WordsCount_hpp
#define WordsCount_hpp

#include <stdio.h>
#include <fstream>
#include <cstring>
#include <regex>
#include <map>
#include <iostream>
#include <algorithm>

using namespace std;

#define pii pair<int, int>
#define msi map<string, int>
#define psi pair<string, int>
#define vpsi vector<psi>

const regex WordsRegex("^[a-z]{4}[a-z0-9]*");//单词的正则表达式

long WordsCount(const char *filename);

void WordsPrint(int num);

#endif /* WordsCount_hpp */
