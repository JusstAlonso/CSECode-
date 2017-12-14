#include "HTable.hpp"
#include <iostream>
using namespace std;

HTable:: HTable(){
    max_size = 23;
    numel= 0;
    
    dt = new data[max_size];
    for (int i = 0; i < max_size; i++) {
        dt[i].key = -1;
        dt[i].value = "N/A";
    }
}
HTable::HTable (int t_size){
    max_size = t_size;
    numel = 0;
    
    dt = new data[max_size];
    for (int i = 0; i < max_size; i++) {
        dt[i].key = -1;
        dt[i].value = "N/A";
    }
}
int HTable::hash(int &k){
    int index = (k % max_size);
    return index;
}
int HTable::rehash(int &k){
    int index = ((k+1) % max_size);
    return index;
}
int HTable::add(data &d){
    if (numel == max_size){
        //The table is full it needs to expand
        return -1;
    }else{
        int index = hash(d.key);
        if (dt[index].key == -1) {
            dt[index] = d;
            numel ++;
            return 0;
        }else if (dt[index].key != -1) {
            for (int i = 0; i < max_size; i++) {
                index = rehash(index);
                if (dt[index].key == -1) {
                    dt[index] = d;
                    numel++;
                    return 0;
                }
            }
            return 0;
        }
    }
    return 0;
}
int HTable::remove(data &d){
    
    if( numel == 0 ) {
        return -1;
    } else {
        int index = hash(d.key);
        if (dt[index].key == -1) {
            numel--;
        }else if (dt[index].key != -1){
            for (int i = 0; i < max_size; i++){
                index = rehash(index);
                if (dt[index].key == d.key) {
                    dt[index].key = -1;
                    dt[index].value = "N/A";
                    numel--;
                }
            }
            return -1;
        }
    }
    return 0;
}
void HTable::output(){
    for (int i = 0; i < max_size; i++) {
        cout << i << " -> " << dt[i].key << " " << dt[i].value << endl;
    }
    cout << "There are " << numel << " data in the table." << endl;
}
