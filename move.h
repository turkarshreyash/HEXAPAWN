#pragma once 
#include<iostream>


typedef struct move{
    int from_i, from_j;
    int to_i, to_j;
    struct move *next;
    move(){
        next = NULL;
    }
    move(int Tfrom_i, int Tfrom_j, int Tto_i, int Tto_j, move *Tnext){
        from_i = Tfrom_i;
        from_j = Tfrom_j;
        to_i = Tto_i;
        to_j = Tto_j;
        next = Tnext;
    }
    void display(){
        std::cout<<"[("<<from_i<<","<<from_j<<") >> ("<<to_i<<","<<to_j<<")]";
    }
}move;