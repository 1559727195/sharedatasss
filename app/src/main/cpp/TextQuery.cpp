//
// Created by Administrator on 2018/6/13.
//

#include "TextQuery.h"
#include <cstddef>
#include <memory>
#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <iostream>
#include <fstream>
#include <cctype>
#include <cstring>
#include <utility>
#include <iostream>

using namespace std;

void runQueries(std::ifstream& infile)
{
    TextQuery tq(infile);
    while (true) {
        cout << "enter word to look for, or q to quit: ";
        string s;
        if (!(cin >> s) || s == "q") break;
        print(cout, tq.query(s)) << endl;
    }
}

TextQuery::TextQuery(ifstream &ifstream):input(new vector<string>){

}

QueryResult TextQuery::query(const string basic_string) const {

}

ostream& print(ostream& out, const QueryResult& qr) {

}
