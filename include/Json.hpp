//Copyright 2020 <volver8>
#ifndef INCLUDE_JSON_HPP_
#define INCLUDE_JSON_HPP_

#include <iostream>
#include <any>
#include <vector>
#include <sstream>
#include <string>
#include <fstream>
#include <exception>
#include <map>
#include <list>

using std::cout;
using std::cin;
using std::string;
using std::any;
using std::vector;
using std::map;
using std::any_cast;
using std::exception;
using std::basic_ifstream;
using std::fstream;
using std::bad_any_cast;
using std::ifstream;
using std::endl;

class Json {
private:
    size_t t = 0;
    map <string, any> data_map;
    vector <any> data_arr;

public:
    explicit Json(const string &s);

    explicit Json(const map<string, any> &map);

    explicit Json(const vector<any> &vector);

    bool is_array() const;

    bool is_object() const;

    any & operator[](const string &key);

    any & operator[](int index);

    static Json parse(const string &s);

    static Json parseFile(const string &path_to_file);

    string split_string(const string &str, size_t &j);

    bool split_bool(const string &str, size_t &j);

    double split_double(const string &str, size_t &j);

    vector<any> split_arr(const string &str, size_t &j);

    map<string, any> split_obj(const string &str, size_t &j);

    void print(any _data);

    void print_map();
};


#endif // INCLUDE_JSON_HPP_
