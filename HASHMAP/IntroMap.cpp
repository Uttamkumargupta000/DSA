#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;

int main(){

    //creation  it stores the key value pair
    map<string, int> m;

    //insertion

    //1
    pair<string, int> p = make_pair("uttam", 3);
    m.insert(p);

    //2
    pair<string, int> pair2("kumar", 2);
    m.insert(pair2);

    //3
    m["mera"] = 1;

    //what will happen ? = no new allocation will be done only updation of integer will happen
    m["mera"] = 2;

    //search 
    cout<< m["mera"] <<endl;
    cout<< m.at("uttam") <<endl;

    // it will create error as no entry were made of this type of key
    // cout<< m.at("unknownKey") <<endl;
    
    //in this first emtry were made and search the given key so no error
    cout<< m["unknownKey"] <<endl;
    cout<< m.at("unknownKey") <<endl;

    //size
    cout<< m.size() <<endl;

    // element present or not
    cout<< m.count("uttam") << endl;

    //erase
    m.erase("uttam");
    cout<< m.size() <<endl;

    for(auto i:m){
        cout<<i.first << "  " << i.second << endl;
    }

    //using iteration
    map<string, int> :: iterator it = m.begin();

    while(it != m.end()){
        cout<< it->first << "  " << it->second << endl;
        it++;
    }


    return 0;
}