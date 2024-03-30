#ifndef DEFS_H
#define DEFS_H

typedef unsigned long long U64; // the board will be represented as a 64 bit integer

#define NAME "BADGER 1.0"
#define BRD_SQ_NUM 120 // the number of squares along with a border to define the limits of the board
#define MAXMOVESPERGAME 2048

enum
{
    EMPTY,
    wP,
    wN,
    wB,
    wR,
    wQ,
    wK,
    bP,
    bN,
    bB,
    bR,
    bQ,
    bK
}; // pieces

enum
{
    RANK_1,
    RANK_2,
    RANK_3,
    RANK_4,
    RANK_5,
    RANK_6,
    RANK_7,
    RANK_8,
    RANK_NONE
};

enum
{
    FILE_A,
    FILE_B,
    FILE_C,
    FILE_D,
    FILE_E,
    FILE_F,
    FILE_G,
    FILE_H,
    FILE_NONE
};

enum
{
    WHITE,
    BLACK,
    BOTH
}; // colors

enum
{

    A1 = 21,
    B1,
    C1,
    D1,
    E1,
    F1,
    G1,
    H1,
    A2 = 31,
    B2,
    C2,
    D2,
    E2,
    F2,
    G2,
    H2,
    A3 = 41,
    B3,
    C3,
    D3,
    E3,
    F3,
    G3,
    H3,
    A4 = 51,
    B4,
    C4,
    D4,
    E4,
    F4,
    G4,
    H4,
    A5 = 61,
    B5,
    C5,
    D5,
    E5,
    F5,
    G5,
    H5,
    A6 = 71,
    B6,
    C6,
    D6,
    E6,
    F6,
    G6,
    H6,
    A7 = 81,
    B7,
    C7,
    D7,
    E7,
    F7,
    G7,
    H7,
    A8 = 91,
    B8,
    C8,
    D8,
    E8,
    F8,
    G8,
    H8,
    NO_SQ

}; // board layout

enum
{
    TRUE,
    FALSE
};

typedef struct
{

    int move;
    int castlePerm;
    int enPas;
    int fiftyMove;
    U64 posKey;

} S_UNDO;

typedef struct
{

    int pieces[BRD_SQ_NUM];
    U64 pawns[3];
    int KingSq[2];
    int side; // the current side to move
    int enPas;
    int castlePerm;
    int fiftyMove;
    int ply;    // a ply is a half move
    int hstPly; // ply history
    U64 posKey;
    int pceNum[13];
    int bigPce[3]; // every piece but pawns
    int majPce[3]; // rooks and queens
    int minPce[3]; // bishops and knight

    S_UNDO history[MAXMOVESPERGAME];

} S_BOARD;

enum
{
    WKCA = 1, // king side castling for white
    WQCA = 2, // queen side castling for white
    BKCA = 4,
    BQCA = 8,
};

#endif