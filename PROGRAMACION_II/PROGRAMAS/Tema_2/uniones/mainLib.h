#ifndef __ESTRUCTURAS__LIBRERIA__
#define __ESTRUCTURAS__LIBRERIA__

struct NIF_t
{
        unsigned int number;
        unsigned char ch;
};
struct DNI_t
{
        unsigned int number;
        unsigned char ch;
};

char passport[9];

struct NIE_t
{
        unsigned int number;
        unsigned char ch;
        unsigned int ch2;
};


struct user_id{

        char nombre[16];

        union{
                struct NIF_t nif;
                struct DNI_t dni;
                char passport[9];
                struct NIE_t nie;
        };
};

#endif
