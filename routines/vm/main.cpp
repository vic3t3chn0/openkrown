#include <stdio.h>
#include "vm.h"
#include <string>

struct access_t //Access Dirs
{
    // code for rendering here
    char* tmp;
    char* struct_dir;
    FILE *fp;
    fp=fopen("/home/$user/config.vm", "r");
    fclose(fp);

}access_t; //Access Dirs and Files and Open

struct qboolean
{
    // code for rendering here
    bool posX;
    bool posY;
    bool x;
    bool y;
    bool z;
}qboolean;

struct qstring
{
    // code for rendering here
    char nm_player;

    string toString()
    {
        return "Player" + to_string(nm_player);
    }

}qstring;

enum player{ posX, posY, player};

//void VM::VM createVM;

void init()
{
    // code for rendering here
    struct qstring player1;
    
}

int createVM()
{
    // code for init VM here
    // draw init()
    init();
    return 0;
}
