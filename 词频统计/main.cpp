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
#include "WordFrequency.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    const char *FileName = "a.txt";
    const char *OutName = "b.txt";
    //const char *FileName = argv[1];
    ifstream TextFile(FileName);
    if(!TextFile)
    {
        cout << "Erro!" << endl;
    }
    long WordsNum = WordsCount(FileName);
    long LinesNum = LinesCount(FileName);
    long CharNum  = CharCount(FileName);
    
    ofstream out(OutName);
    
    out<< "characters:" << CharNum <<endl;
    out<< "words:" << WordsNum <<endl;
    out<< "lines:" << LinesNum <<endl;
    
    WordsPrint(FileName,OutName,10);
    
    out.close();
    
    return 0;
}

