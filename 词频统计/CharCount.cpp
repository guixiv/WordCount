//
//  CharCount.cpp
//  词频统计
//
//  Created by wenyiqian on 2018/9/9.
//  Copyright © 2018年 ding. All rights reserved.
//

#include "CharCount.hpp"

int CharCount(const char *filename)
{
    int CharNum = 0;
    ifstream ifs(filename);
    char charTemp;
    mci charCountMap;
    while ((charTemp = ifs.get()) != EOF)
    {
        charCountMap[charTemp]++;
    }
    map<char, int>::const_iterator it;
    for (it = charCountMap.begin(); it != charCountMap.end(); it++) {
        if(it->first >= 0&&it->first <= 255)
            //cout << "   当前符号为" << it->first << endl;
            CharNum = CharNum + it->second;
    }
    ifs.clear();
    ifs.seekg(0);
    return CharNum;
}
