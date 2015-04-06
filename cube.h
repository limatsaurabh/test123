struct Cube_s;

typedef struct Cube_s{
        struct Cube_s *face;
        struct Cube_s *back;
        struct Cube_s *left;
        struct Cube_s *right;
        struct Cube_s *top;
        struct Cube_s *down;
}Cube_t;

typedef struct Box_s{
        Cube_t cube;
        int id;
        int flags; //Flags -> empty
}Box_t;
