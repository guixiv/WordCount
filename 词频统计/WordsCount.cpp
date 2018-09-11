//
//  WordsCount.cpp
//  词频统计
//
//  Created by wenyiqian on 2018/9/9.
//  Copyright © 2018年 ding. All rights reserved.
//

#include "WordsCount.hpp"

long WordsCount(const char *filename)
{
    regex WordsRegex("^[a-z]{4}[a-z0-9]*");//单词的正则表达式
    long wordsnum = 0;
    string temp;
    fstream TextFile;
    TextFile.open(filename);
    string OneLine;
    while(TextFile>>OneLine)
    {
        transform(OneLine.begin(), OneLine.end(), OneLine.begin(), ::tolower);  //转换为小写
        sregex_token_iterator end;
        for (sregex_token_iterator wordIter(OneLine.begin(), OneLine.end(), WordsRegex); wordIter != end; wordIter++)
        {//在一行文本中逐个找出单词
            wordsnum++;
        }
    }
    return wordsnum;
}
