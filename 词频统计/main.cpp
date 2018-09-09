//
//  main.cpp
//  词频统计
//
//  Created by wenyiqian on 2018/9/8.
//  Copyright © 2018年 ding. All rights reserved.
//


#include <iostream>
#include <cstring>
#include <map>
#include <fstream>
#include <stdio.h>
#include "WordsCount.hpp"
#include "CharCount.hpp"
#include "LinesCount.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    //const char *FileName = "a.txt";
    const char *FileName = argv[1];
    ifstream TextFile(FileName);
    if(!TextFile)
    {
        cout << "Erro!" << endl;
    }
    long WordsNum = WordsCount(FileName);
    long LinesNum = LinesCount(FileName);
    long CharNum  = CharCount(FileName);
    
    cout<< "characters:" << CharNum <<endl;
    cout<< "words:" << WordsNum <<endl;
    cout<< "lines:" << LinesNum <<endl;
    
    WordsPrint(10);
    
    return 0;
}

