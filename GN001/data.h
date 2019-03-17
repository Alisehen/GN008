#ifndef JIEGOUTI_H_INCLUDED
#define JIEGOUTI_H_INCLUDED

#include<string>
using namespace std;

struct time{
    int month;
    int day;
    int hour;
    int min;
};

struct money{
    int yuan;
    int jiao;
    int fen;
};

typedef enum {
    screen,mouse,keyboard,ram,ssd,cpu,gpu,vga,aud,lan
}ty_parts;

typedef enum {
    buy,whole_sale,single_sale
}ty_behave;

struct infor{
    ty_behave behave;
    struct time;
    ty_parts parts;
    int model;
    string maker;
    struct money price;
    int count;
    struct money amount;
    string customer;
    struct infor *next;
};

#endif // JIEGOUTI_H_INCLUDED
