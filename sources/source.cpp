// Copyright 2019 <Kondr11>

#include "Json.hpp"

int main() {
    string text;
    text = R"({ "lastname" : "Ivanov" , "firstname" : "Ivan",
            "age" : 25 , "islegal" : false , "marks"
            : [ 4 , 5 , 5 , 5 , 2 , 3 ] , "address" : {  
            "city" : "Moscow" ,  "street" :
                       "Vozdvijenka" } })";
    Json object = Json::parse(text);
    cout<< endl;
    object.print_map();
}
