//
//  LinesCount.cpp
//  词频统计
//
//  Created by wenyiqian on 2018/9/9.
//  Copyright © 2018年 ding. All rights reserved.
//

#include "LinesCount.hpp"

int LinesCount(const char *filename)
{
    int i = 0;
    bool IsNull = 1;
    int lines = 0;
    fstream fs(filename,ios::in);
    string s;
    while (getline(fs,s))
    {
        for(i = 0,IsNull = 1; i < s.length(); i++)
        {
            if(s[i] != ' ' && s[i] != '\t')
            {
                IsNull = 0;
                break;
            }
        }
        if (!IsNull) lines++;
    }
    return lines;
}
