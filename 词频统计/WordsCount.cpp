//
//  WordsCount.cpp
//  词频统计
//
//  Created by wenyiqian on 2018/9/9.
//  Copyright © 2018年 ding. All rights reserved.
//

#include "WordsCount.hpp"
msi WordsMap;
vpsi WordsVec;

int sortWords(psi p1, psi p2)
{
    if (p1.second == p2.second)
    {
        return p1.first < p2.first;
    }
    else return p1.second > p2.second;
}

long WordsCount(const char *filename)
{
    long wordsnum = 0;
    string temp;
    fstream TextFile;
    TextFile.open(filename);
    string OneLine;

    while(TextFile>>OneLine)
    {
        transform(OneLine.begin(), OneLine.end(), OneLine.begin(), ::tolower);  //转换为小写
        sregex_token_iterator end;
        for (sregex_token_iterator wordIter(OneLine.begin(), OneLine.end(), WordsRegex); wordIter != end; wordIter++) {//在一行文本中逐个找出单词
            //cout<<*wordIter<<endl;//每个单词
            WordsMap[*wordIter]++;//单词计数
            wordsnum++;
        }
    }
    
    for (map<string, int>::iterator iter = WordsMap.begin(); iter != WordsMap.end(); iter++)
    {
        WordsVec.push_back(pair<string, int>(iter->first, iter->second));
        //cout << iter->first << " " << iter->second << endl;
    }
    sort(WordsVec.begin(), WordsVec.end(), sortWords);
    TextFile.clear();
    TextFile.seekg(0);
    return wordsnum;
}

void WordsPrint(int num)
{
    long endp = WordsVec.size();
    endp =(endp < num)?endp:num;
    for (vpsi::iterator iter = WordsVec.begin();iter != (WordsVec.begin() + endp);++iter)
    {
        cout <<"<" << iter->first << ">:"  << iter->second << endl;
    }
}
