//
// Created by Administrator on 2018/6/13.
//


#ifndef SHAREDATA_TEXTQUERY_H
#define SHAREDATA_TEXTQUERY_H

#include <jni.h>
#include <memory>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <fstream>

using namespace std;

class QueryResult;

class TextQuery {

    void runQueries(ifstream &infile);

public:
    TextQuery(ifstream &ifstream);

    using LineNo = vector<string>::size_type;
    QueryResult query(const string basic_string) const;

private:
    shared_ptr<vector<string>> input;
    map<string, shared_ptr<set<LineNo>>> result;

};

class QueryResult {
public:
    friend ostream &print(ostream &, const QueryResult &);

public:
    QueryResult(const string &s, shared_ptr<std::set<TextQuery::LineNo>> set,
                shared_ptr<vector<string>> v
    ) : word(s), nos(set), input(v) {

    }

private:
    string word;
    shared_ptr<set<TextQuery::LineNo >> nos;
    shared_ptr<vector<string>> input;

};
ostream& print(ostream&, const QueryResult&);

#endif //SHAREDATA_TEXTQUERY_H
