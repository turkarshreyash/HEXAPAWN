#include"HEXAPAWN.h"
#include<stdio.h>
#include<stdlib.h>

void HexaPawn::init(){
    no_times_player_wins = 0;
    winner = NULL;
    movements = new Movement();
    //Step 2
    int stn = 2;
    {
    CELL newboard[3][3] = {{C,C,C},{P,B,B},{B,P,P}};
    movements->addMove(stn,newboard,0,1,1,0);
    movements->addMove(stn,newboard,0,1,1,1);
    movements->addMove(stn,newboard,0,2,1,2);
    }


    {
    CELL newboard[3][3] = {{C,C,C},{B,P,B},{P,B,P}};
    movements->addMove(stn,newboard,0,0,1,0);
    movements->addMove(stn,newboard,0,0,1,1);
    movements->addMove(stn,newboard,0,2,1,1);
    movements->addMove(stn,newboard,0,2,1,2);
    }
    

    //Step 4
    stn = 4;
    {
    CELL newboard[3][3] = {{B,C,C},{C,P,P},{P,B,B}};
    movements->addMove(stn,newboard,0,1,1,2);
    movements->addMove(stn,newboard,0,2,1,1);
    }
    {
    CELL newboard[3][3] = {{B,C,C},{B,C,P},{P,B,B}};
    movements->addMove(stn,newboard,0,1,1,2);
    movements->addMove(stn,newboard,1,1,2,0);
    movements->addMove(stn,newboard,1,1,2,1);
    }
    {
    CELL newboard[3][3] = {{C,C,B},{P,B,P},{B,B,P}};
    movements->addMove(stn,newboard,0,1,1,0);
    movements->addMove(stn,newboard,0,1,1,1);
    movements->addMove(stn,newboard,0,1,1,2);
    }
    {
    CELL newboard[3][3] = {{C,B,C},{P,B,B},{B,B,P}};
    movements->addMove(stn,newboard,0,2,1,2);
    }
    {
    CELL newboard[3][3] = {{C,C,B},{P,P,C},{B,B,P}};
    movements->addMove(stn,newboard,0,0,1,1);
    movements->addMove(stn,newboard,0,1,1,0);
    }
    {
    CELL newboard[3][3] = {{C,B,C},{P,P,B},{B,P,B}};
    movements->addMove(stn,newboard,0,0,1,1);
    movements->addMove(stn,newboard,0,2,1,1);
    movements->addMove(stn,newboard,0,2,1,2);
    }
    {
    CELL newboard[3][3] = {{B,C,C},{P,C,B},{B,B,P}};
    movements->addMove(stn,newboard,0,1,1,0);
    movements->addMove(stn,newboard,0,2,1,2);
    movements->addMove(stn,newboard,1,1,2,1);
    movements->addMove(stn,newboard,1,1,2,2);
    }
    {
    CELL newboard[3][3] = {{B,C,C},{B,P,B},{B,B,P}};
    movements->addMove(stn,newboard,0,2,1,1);
    movements->addMove(stn,newboard,0,2,1,2);
    }
    {
    CELL newboard[3][3] = {{C,B,C},{C,P,B},{B,B,P}};
    movements->addMove(stn,newboard,0,1,1,1);
    movements->addMove(stn,newboard,0,2,1,1);
    movements->addMove(stn,newboard,1,0,2,0);
    movements->addMove(stn,newboard,0,2,1,2);
    }
    {
    CELL newboard[3][3] = {{C,B,C},{C,B,P},{B,P,B}};
    movements->addMove(stn,newboard,1,0,2,0);
    movements->addMove(stn,newboard,1,0,2,1);
    }
    {
    CELL newboard[3][3] = {{B,C,C},{B,P,B},{P,B,B}};
    movements->addMove(stn,newboard,0,2,1,1);
    movements->addMove(stn,newboard,0,2,1,2);

    //step-> 6
    stn = 6;
    }
    {
    CELL newboard[3][3] = {{B,C,B},{C,P,P},{B,B,B}};
    movements->addMove(stn,newboard,0,1,1,2);
    movements->addMove(stn,newboard,1,0,2,0);
    }
    {
    CELL newboard[3][3] = {{C,B,B},{C,P,B},{B,B,B}};
    movements->addMove(stn,newboard,0,0,1,1);
    movements->addMove(stn,newboard,1,0,2,0);
    }
    {
    CELL newboard[3][3] = {{C,B,B},{C,C,P},{B,B,B}};
    movements->addMove(stn,newboard,1,0,2,0);
    movements->addMove(stn,newboard,1,1,2,1);
    }
    {
    CELL newboard[3][3] = {{C,B,B},{P,P,P},{B,B,B}};
    movements->addMove(stn,newboard,0,0,1,1);
    }
    {
    CELL newboard[3][3] = {{B,C,B},{P,C,B},{B,B,B}};
    movements->addMove(stn,newboard,0,1,1,0);
    movements->addMove(stn,newboard,1,1,2,1);
    }
    {
    CELL newboard[3][3] = {{B,B,C},{C,P,B},{B,B,B}};
    movements->addMove(stn,newboard,0,2,1,1);
    movements->addMove(stn,newboard,0,2,1,2);
    movements->addMove(stn,newboard,1,0,2,0);
    }
    {
    CELL newboard[3][3] = {{B,B,C},{B,P,C},{B,B,B}};
    movements->addMove(stn,newboard,0,2,1,1);
    movements->addMove(stn,newboard,1,2,2,2);
    }
    {
    CELL newboard[3][3] = {{B,C,B},{P,P,C},{B,B,B}};
    movements->addMove(stn,newboard,0,1,1,0);
    movements->addMove(stn,newboard,1,2,2,2);
    }
    {
    CELL newboard[3][3] = {{B,B,C},{C,C,P},{B,B,B}};
    movements->addMove(stn,newboard,1,0,2,0);
    movements->addMove(stn,newboard,1,1,2,1);
    }
    {
    CELL newboard[3][3] = {{B,C,B},{B,C,P},{B,B,B}};
    movements->addMove(stn,newboard,0,1,1,2);
    movements->addMove(stn,newboard,1,1,2,1);
    }
}

HexaPawn::HexaPawn(){
    init();
}

void HexaPawn::preRoundSetup(){
    for(int i = 0 ; i < 3 ; i++){
        board[0][i] = mirrorboard[0][i] = prevboard[0][i] = prevmirrorboard[0][i] =  C;
        board[1][i] = mirrorboard[1][i] = prevboard[1][i] = prevmirrorboard[1][i] = B;
        board[2][i] = mirrorboard[2][i] = prevboard[2][i] = prevmirrorboard[2][i] =  P;
    }
    prev_move = NULL;
    step_number = 0;
    players_turn = false;
    mirrorMatch = false;
    current_round_no++;
}

char HexaPawn::getSymbol(CELL in){
    if(in == B){
        return '_';
    }else if(in == P){
        return 'O';
    }
    return 'X';
}

bool HexaPawn::isValidMove(int from_i, int from_j, int to_i, int to_j){
    if(board[from_i][from_j] != P){
        return false;
    }
    if(from_i == to_i + 1 && from_j == to_j){
        return board[to_i][to_j] == B;
    }
    if((from_j == to_j  +  1 || from_j == to_j - 1) && from_i == to_i  + 1){
        return board[to_i][to_j] == C;
    }
    return false;
}

bool HexaPawn::gameOver(){
    for(int i = 0 ; i < 3 ; i++){
        if(board[0][i] == P || board[2][i] == C){
            return true;
        }
    }
    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            if(board[i][j] == C && board[i+1][j] == B){
                return false;
            }
            if(board[i+1][j] == P && board[i][j] == B){
                return false;
            }
            //Computer LEFT KILL
            if(j != 2 && board[i][j] == C && board[i+1][j+1] == P){
                return false;
            }
            //Computer Right KILL
            if(j != 0 && board[i][j] == C && board[i+1][j-1] == P){
                return false;
            }
            //Player Left kill
            if(j != 0 && board[i+1][j] == P && board[i][j-1] == C){
                return false;
            }
            //Player Right kill
            if(j != 2 && board[i+1][j] == P && board[i][j+1] == C){
                return false;
            }
        }
    }
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            if(board[i][j] == P){
                return true;
            }
        }
    }
    return false;
}

void HexaPawn::makeMovement(int from_i, int from_j, int to_i, int to_j){
    if(!players_turn){
        memcpy(prevboard,board,sizeof(board));
        memcpy(prevmirrorboard,mirrorboard,sizeof(board));
    }
    board[to_i][to_j] = board[from_i][from_j];
    board[from_i][from_j] = B;

    //Makke changes to mirror
    mirrorboard[to_i][2 - to_j] = board[from_i][2 - from_j];
    mirrorboard[from_i][2 - from_j] = B;
}

void HexaPawn::displayBoard(){
    std::cout<<"\t\t \t0\t1\t2\n";
    for(int i = 0 ; i < 3 ; i++){
        std::cout<<"\t\t"<<i<<"\t";
        for(int j = 0 ; j < 3 ; j++){
            std::cout<<getSymbol(board[i][j])<<"\t";
        }
        std::cout<<"\n";
    }
}

void HexaPawn::playersMove(){
    int from_i, from_j, to_i, to_j;
    while(1){
        std::cout<<"Enter Move from_i from_j to_i to_j\n-> ";
        std::cin>>from_i>>from_j>>to_i>>to_j;
        if(isValidMove(from_i,from_j,to_i,to_j)){
            break;
        }else{
            std::cout<<"NOT A VALID MOVE!\n";
        }
    }
    makeMovement(from_i,from_j,to_i,to_j);
}

void HexaPawn::computersMove(){
    prev_move = movements->getMoveRandom(step_number,board);
    mirrorMatch = false;
    if(prev_move == NULL){
        prev_move = movements->getMoveRandom(step_number,mirrorboard);
        mirrorMatch = true;
    }
    if(prev_move == NULL){
        std::cout<<"An Error Occured No Movement Found\n";
        exit(0);
    }
    int from_i, from_j, to_i, to_j;
    from_i = prev_move->from_i;
    to_i  = prev_move->to_i;
    if(mirrorMatch){
        from_j = 2 - prev_move->from_j;
        to_j = 2 - prev_move->to_j;
    }else{
        from_j = prev_move->from_j;
        to_j = prev_move->to_j;
    }
    makeMovement(from_i,from_j,to_i,to_j);
}

void HexaPawn::playRound(){
    preRoundSetup();
    int from_i, from_j, to_i, to_j;
    while(!gameOver()){
        step_number++;
        system("clear");
        players_turn = !players_turn;
        if(current_round_no != 1){
            std::cout<<"_____________________\n";
            std::cout<<"WIN HISTORY\n";
            LinkedList::displayList(winner);
            std::cout<<"PLAYER WIN RATE : "<<(no_times_player_wins/(current_round_no-1))<<"\n";
            std::cout<<"_____________________\n";
        }
        std::cout<<"=========| STEP NUMBER = "<<step_number<<" |=========\n";
        displayBoard();
        if(players_turn){
            std::cout<<"PLAYERS MOVE\n";
            playersMove();
        }else{
            std::cout<<"COMPUTERS MOVE\n";
            usleep(30000);
            computersMove();
        }
    }
    system("clear");
    displayBoard();
    if(players_turn){
        no_times_player_wins++;
        std::cout<<"PLAYER WON!\n";
        winner = LinkedList::addToList(winner,'P');
        if(mirrorMatch){
            movements->removeMove(step_number - 1,prevmirrorboard,prev_move);
        }else{
            movements->removeMove(step_number - 1,prevboard,prev_move);
        }
    }else{
        winner = LinkedList::addToList(winner,'C');
        std::cout<<"COMPUTER WON!\n";
    }
}

void HexaPawn::start(){
    bool play_next_round = true;
    int temp;
    while(play_next_round){
        playRound();
        std::cout<<"Play Next Round?\n";
        std::cin>>temp;
        ((temp == 0)?(play_next_round = false):(play_next_round=true));
    }
}