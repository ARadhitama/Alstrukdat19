#include "./ADT/kamus.h"

Queue MoveBidak(Bidak B, MATRIKS *M){
    int i, n;
    Queue Q;
    Bidak TempBidak;
    boolean found;
    int posX, posY;

    CreateEmptyQueue(&Q, 100);
    TempBidak=B;


    switch(*B.code) {
        case 'R' : {
            if (B.Position.X == 0) {
               found = false;
               posX = B.Position.X;
               while (!found && (posX<=7)) {
                   posX++;
                   if ((*Elmt(*M,posX,B.Position.Y).code != ' ') || *Elmt(*M,posX,B.Position.Y).code == 'r' || *Elmt(*M,posX,B.Position.Y).code =='h' || *Elmt(*M,posX,B.Position.Y).code == 'b' || *Elmt(*M,posX,B.Position.Y).code == 'k' || *Elmt(*M,posX,B.Position.Y).code == 'q' || *Elmt(*M,posX,B.Position.Y).code == 'p') {
                       Elmt(*M,posX,B.Position.Y).Position.X = posX;
                       AddQueue(&Q, Elmt(*M,posX,B.Position.Y));
                   } else {
                       found = true;
                   }
               }
           } else {
               found = false;
               posX = B.Position.X;
               while (!found && (posX <=7)){
                   posX++;
                   if ((*Elmt(*M,posX,B.Position.Y).code != ' ') || *Elmt(*M,posX,B.Position.Y).code == 'r' || *Elmt(*M,posX,B.Position.Y).code =='h' || *Elmt(*M,posX,B.Position.Y).code == 'b' || *Elmt(*M,posX,B.Position.Y).code == 'k' || *Elmt(*M,posX,B.Position.Y).code == 'q' || *Elmt(*M,posX,B.Position.Y).code == 'p') {
                       Elmt(*M,posX,B.Position.Y).Position.X = posX;
                       AddQueue(&Q, Elmt(*M,posX,B.Position.Y));
                   } else {
                       found = true;
                   }
               }
               found = false;
               posX = B.Position.X;
               while (!found && (posX >=0)){
                   posX--;
                   if ((*Elmt(*M,posX,B.Position.Y).code != ' ') || *Elmt(*M,posX,B.Position.Y).code == 'r' || *Elmt(*M,posX,B.Position.Y).code =='h' || *Elmt(*M,posX,B.Position.Y).code == 'b' || *Elmt(*M,posX,B.Position.Y).code == 'k' || *Elmt(*M,posX,B.Position.Y).code == 'q' || *Elmt(*M,posX,B.Position.Y).code == 'p') {
                       Elmt(*M,posX,B.Position.Y).Position.X = posX;
                       AddQueue(&Q, Elmt(*M,posX,B.Position.Y));
                   } else {
                       found = true;
                   }
               }
           }
           if (B.Position.Y == 0) {
               found = false;
               posY = B.Position.Y;
               while (!found && (posY<=7)) {
                   posY++;
                   if ((*Elmt(*M,posX,B.Position.Y).code != ' ') || *Elmt(*M,posX,B.Position.Y).code == 'r' || *Elmt(*M,posX,B.Position.Y).code =='h' || *Elmt(*M,posX,B.Position.Y).code == 'b' || *Elmt(*M,posX,B.Position.Y).code == 'k' || *Elmt(*M,posX,B.Position.Y).code == 'q' || *Elmt(*M,posX,B.Position.Y).code == 'p') {
                       Elmt(*M,B.Position.X,posY).Position.Y = posY;
                       AddQueue(&Q, Elmt(*M,B.Position.X,posY));
                   } else {
                       found = true;
                   }
               }
           } else {
               found = false;
               posY = B.Position.Y;
               while (!found && (posY <=7)){
                   posY++;
                   if ((*Elmt(*M,posX,B.Position.Y).code != ' ') || *Elmt(*M,posX,B.Position.Y).code == 'r' || *Elmt(*M,posX,B.Position.Y).code =='h' || *Elmt(*M,posX,B.Position.Y).code == 'b' || *Elmt(*M,posX,B.Position.Y).code == 'k' || *Elmt(*M,posX,B.Position.Y).code == 'q' || *Elmt(*M,posX,B.Position.Y).code == 'p') {
                       Elmt(*M,B.Position.X,posY).Position.Y = posY;
                       AddQueue(&Q, Elmt(*M,B.Position.X,posY));
                   } else {
                       found = true;
                   }
               }
               found = false;
               posY = B.Position.Y;
               while (!found && (posY >=0)){
                   posY--;
                   if ((*Elmt(*M,posX,B.Position.Y).code != ' ') || *Elmt(*M,posX,B.Position.Y).code == 'r' || *Elmt(*M,posX,B.Position.Y).code =='h' || *Elmt(*M,posX,B.Position.Y).code == 'b' || *Elmt(*M,posX,B.Position.Y).code == 'k' || *Elmt(*M,posX,B.Position.Y).code == 'q' || *Elmt(*M,posX,B.Position.Y).code == 'p') {
                       Elmt(*M,B.Position.X,posY).Position.Y = posY;
                       AddQueue(&Q, Elmt(*M,B.Position.X,posY));
                   } else {
                       found = true;
                   }
                }
           }
            return Q;
        }
        case 'r' : {
           if (B.Position.X == 0) {
               found = false;
               posX = B.Position.X;
               while (!found && (posX<=7)) {
                   posX++;
                   if ((*Elmt(*M,posX,B.Position.Y).code != ' ') || *Elmt(*M,posX,B.Position.Y).code == 'R' || *Elmt(*M,posX,B.Position.Y).code =='H' || *Elmt(*M,posX,B.Position.Y).code == 'B' || *Elmt(*M,posX,B.Position.Y).code == 'K' || *Elmt(*M,posX,B.Position.Y).code == 'Q' || *Elmt(*M,posX,B.Position.Y).code == 'P') {
                       Elmt(*M,posX,B.Position.Y).Position.X = posX;
                       AddQueue(&Q, Elmt(*M,posX,B.Position.Y));
                   } else {
                       found = true;
                   }
               }
           } else {
               found = false;
               posX = B.Position.X;
               while (!found && (posX <=7)){
                   posX++;
                   if ((*Elmt(*M,posX,B.Position.Y).code != ' ') || *Elmt(*M,posX,B.Position.Y).code == 'R' || *Elmt(*M,posX,B.Position.Y).code =='H' || *Elmt(*M,posX,B.Position.Y).code == 'B' || *Elmt(*M,posX,B.Position.Y).code == 'K' || *Elmt(*M,posX,B.Position.Y).code == 'Q' || *Elmt(*M,posX,B.Position.Y).code == 'P') {
                       Elmt(*M,posX,B.Position.Y).Position.X = posX;
                       AddQueue(&Q, Elmt(*M,posX,B.Position.Y));
                   } else {
                       found = true;
                   }
               }
               found = false;
               posX = B.Position.X;
               while (!found && (posX >=0)){
                   posX--;
                   if (((*Elmt(*M,posX,B.Position.Y).code != ' ') || *Elmt(*M,posX,B.Position.Y).code == 'R' || *Elmt(*M,posX,B.Position.Y).code =='H' || *Elmt(*M,posX,B.Position.Y).code == 'B' || *Elmt(*M,posX,B.Position.Y).code == 'K' || *Elmt(*M,posX,B.Position.Y).code == 'Q' || *Elmt(*M,posX,B.Position.Y).code == 'P')) {
                       Elmt(*M,posX,B.Position.Y).Position.X = posX;
                       AddQueue(&Q, Elmt(*M,posX,B.Position.Y));
                   } else {
                       found = true;
                   }
               }
           }
        
           if (B.Position.Y == 0) {
               found = false;
               posY = B.Position.Y;
               while (!found && (posY<=7)) {
                   posY++;
                   if (((*Elmt(*M,posX,B.Position.Y).code != ' ') || *Elmt(*M,posX,B.Position.Y).code == 'R' || *Elmt(*M,posX,B.Position.Y).code =='H' || *Elmt(*M,posX,B.Position.Y).code == 'B' || *Elmt(*M,posX,B.Position.Y).code == 'K' || *Elmt(*M,posX,B.Position.Y).code == 'Q' || *Elmt(*M,posX,B.Position.Y).code == 'P')) {
                       Elmt(*M,B.Position.X,posY).Position.Y = posY;
                       AddQueue(&Q, Elmt(*M,B.Position.X,posY));
                   } else {
                       found = true;
                   }
               }
           } else {
               found = false;
               posY = B.Position.Y;
               while (!found && (posY <=7)){
                   posY++;
                   if (((*Elmt(*M,posX,B.Position.Y).code != ' ') || *Elmt(*M,posX,B.Position.Y).code == 'R' || *Elmt(*M,posX,B.Position.Y).code =='H' || *Elmt(*M,posX,B.Position.Y).code == 'B' || *Elmt(*M,posX,B.Position.Y).code == 'K' || *Elmt(*M,posX,B.Position.Y).code == 'Q' || *Elmt(*M,posX,B.Position.Y).code == 'P')) {
                       Elmt(*M,B.Position.X,posY).Position.Y = posY;
                       AddQueue(&Q, Elmt(*M,B.Position.X,posY));
                   } else {
                       found = true;
                   }
               }
               found = false;
               posY = B.Position.Y;
               while (!found && (posY >=0)){
                   posY--;
                   if (((*Elmt(*M,posX,B.Position.Y).code != ' ') || *Elmt(*M,posX,B.Position.Y).code == 'R' || *Elmt(*M,posX,B.Position.Y).code =='H' || *Elmt(*M,posX,B.Position.Y).code == 'B' || *Elmt(*M,posX,B.Position.Y).code == 'K' || *Elmt(*M,posX,B.Position.Y).code == 'Q' || *Elmt(*M,posX,B.Position.Y).code == 'P')) {
                       Elmt(*M,B.Position.X,posY).Position.Y = posY;
                       AddQueue(&Q, Elmt(*M,B.Position.X,posY));
                   } else {
                       found = true;
                   }
                }
           }

            return Q;
        }
        case 'H' : {
            posX = B.Position.X;
            posY = B.Position.Y;
            posX++;
            posY += 2;
            if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'r' ) || (Elmt(*M, posX, posY).code == 'h' || (Elmt(*M, posX, posY).code == 'b' ) || (Elmt(*M, posX, posY).code == 'k' ) || (Elmt(*M, posX, posY).code == 'q' ) || (Elmt(*M, posX, posY).code == 'p' )) )))) {
                Elmt(*M, posX, posY).Position.X = posX;
                Elmt(*M, posX, posY).Position.Y = posY;
                AddQueue(&Q, Elmt(*M, posX, posY));
            }
            posX = B.Position.X;
            posY = B.Position.Y;
            posX++;
            posY -= 2;
            if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'r' ) || (Elmt(*M, posX, posY).code == 'h' || (Elmt(*M, posX, posY).code == 'b' ) || (Elmt(*M, posX, posY).code == 'k' ) || (Elmt(*M, posX, posY).code == 'q' ) || (Elmt(*M, posX, posY).code == 'p' )) )))) {
                Elmt(*M, posX, posY).Position.X = posX;
                Elmt(*M, posX, posY).Position.Y = posY;
                AddQueue(&Q, Elmt(*M, posX, posY));
            }
            posX = B.Position.X;
            posY = B.Position.Y;
            posX--;
            posY += 2;
            if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'r' ) || (Elmt(*M, posX, posY).code == 'h' || (Elmt(*M, posX, posY).code == 'b' ) || (Elmt(*M, posX, posY).code == 'k' ) || (Elmt(*M, posX, posY).code == 'q' ) || (Elmt(*M, posX, posY).code == 'p' )) )))) {
                Elmt(*M, posX, posY).Position.X = posX;
                Elmt(*M, posX, posY).Position.Y = posY;
                AddQueue(&Q, Elmt(*M, posX, posY));
            }
            posX = B.Position.X;
            posY = B.Position.Y;
            posX--;
            posY -= 2;
            if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'r' ) || (Elmt(*M, posX, posY).code == 'h' || (Elmt(*M, posX, posY).code == 'b' ) || (Elmt(*M, posX, posY).code == 'k' ) || (Elmt(*M, posX, posY).code == 'q' ) || (Elmt(*M, posX, posY).code == 'p' )) )))) {
                Elmt(*M, posX, posY).Position.X = posX;
                Elmt(*M, posX, posY).Position.Y = posY;
                AddQueue(&Q, Elmt(*M, posX, posY));
            }
            posX = B.Position.X;
            posY = B.Position.Y;
            posX+=2;
            posY++;
            if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'r' ) || (Elmt(*M, posX, posY).code == 'h' || (Elmt(*M, posX, posY).code == 'b' ) || (Elmt(*M, posX, posY).code == 'k' ) || (Elmt(*M, posX, posY).code == 'q' ) || (Elmt(*M, posX, posY).code == 'p' )) )))) {
                Elmt(*M, posX, posY).Position.X = posX;
                Elmt(*M, posX, posY).Position.Y = posY;
                AddQueue(&Q, Elmt(*M, posX, posY));
            }
            posX = B.Position.X;
            posY = B.Position.Y;
            posX-=2;
            posY++;
            if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'r' ) || (Elmt(*M, posX, posY).code == 'h' || (Elmt(*M, posX, posY).code == 'b' ) || (Elmt(*M, posX, posY).code == 'k' ) || (Elmt(*M, posX, posY).code == 'q' ) || (Elmt(*M, posX, posY).code == 'p' )) )))) {
                Elmt(*M, posX, posY).Position.X = posX;
                Elmt(*M, posX, posY).Position.Y = posY;
                AddQueue(&Q, Elmt(*M, posX, posY));
            }
            posX = B.Position.X;
            posY = B.Position.Y;
            posX+=2;
            posY--;
            if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'r' ) || (Elmt(*M, posX, posY).code == 'h' || (Elmt(*M, posX, posY).code == 'b' ) || (Elmt(*M, posX, posY).code == 'k' ) || (Elmt(*M, posX, posY).code == 'q' ) || (Elmt(*M, posX, posY).code == 'p' )) )))) {
                Elmt(*M, posX, posY).Position.X = posX;
                Elmt(*M, posX, posY).Position.Y = posY;
                AddQueue(&Q, Elmt(*M, posX, posY));
            }
            posX = B.Position.X;
            posY = B.Position.Y;
            posX-=2;
            posY--;
            if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'r' ) || (Elmt(*M, posX, posY).code == 'h' || (Elmt(*M, posX, posY).code == 'b' ) || (Elmt(*M, posX, posY).code == 'k' ) || (Elmt(*M, posX, posY).code == 'q' ) || (Elmt(*M, posX, posY).code == 'p' )) )))) {
                Elmt(*M, posX, posY).Position.X = posX;
                Elmt(*M, posX, posY).Position.Y = posY;
                AddQueue(&Q, Elmt(*M, posX, posY));
            }
            return Q;
        }
        case 'h' : {
            posX = B.Position.X;
            posY = B.Position.Y;
            posX++;
            posY += 2;
            if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'R' ) || (Elmt(*M, posX, posY).code == 'H' || (Elmt(*M, posX, posY).code == 'B' ) || (Elmt(*M, posX, posY).code == 'K' ) || (Elmt(*M, posX, posY).code == 'Q' ) || (Elmt(*M, posX, posY).code == 'P' )) )))) {
                Elmt(*M, posX, posY).Position.X = posX;
                Elmt(*M, posX, posY).Position.Y = posY;
                AddQueue(&Q, Elmt(*M, posX, posY));
            }
            posX = B.Position.X;
            posY = B.Position.Y;
            posX++;
            posY -= 2;
            if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'R' ) || (Elmt(*M, posX, posY).code == 'H' || (Elmt(*M, posX, posY).code == 'B' ) || (Elmt(*M, posX, posY).code == 'K' ) || (Elmt(*M, posX, posY).code == 'Q' ) || (Elmt(*M, posX, posY).code == 'P' )) )))) {
                Elmt(*M, posX, posY).Position.X = posX;
                Elmt(*M, posX, posY).Position.Y = posY;
                AddQueue(&Q, Elmt(*M, posX, posY));
            }
            posX = B.Position.X;
            posY = B.Position.Y;
            posX--;
            posY += 2;
            if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'R' ) || (Elmt(*M, posX, posY).code == 'H' || (Elmt(*M, posX, posY).code == 'B' ) || (Elmt(*M, posX, posY).code == 'K' ) || (Elmt(*M, posX, posY).code == 'Q' ) || (Elmt(*M, posX, posY).code == 'P' )) )))) {
                Elmt(*M, posX, posY).Position.X = posX;
                Elmt(*M, posX, posY).Position.Y = posY;
                AddQueue(&Q, Elmt(*M, posX, posY));
            }
            posX = B.Position.X;
            posY = B.Position.Y;
            posX--;
            posY -= 2;
            if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'R' ) || (Elmt(*M, posX, posY).code == 'H' || (Elmt(*M, posX, posY).code == 'B' ) || (Elmt(*M, posX, posY).code == 'K' ) || (Elmt(*M, posX, posY).code == 'Q' ) || (Elmt(*M, posX, posY).code == 'P' )) )))) {
                Elmt(*M, posX, posY).Position.X = posX;
                Elmt(*M, posX, posY).Position.Y = posY;
                AddQueue(&Q, Elmt(*M, posX, posY));
            }
            posX = B.Position.X;
            posY = B.Position.Y;
            posX+=2;
            posY++;
            if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'R' ) || (Elmt(*M, posX, posY).code == 'H' || (Elmt(*M, posX, posY).code == 'B' ) || (Elmt(*M, posX, posY).code == 'K' ) || (Elmt(*M, posX, posY).code == 'Q' ) || (Elmt(*M, posX, posY).code == 'P' )) )))) {
                Elmt(*M, posX, posY).Position.X = posX;
                Elmt(*M, posX, posY).Position.Y = posY;
                AddQueue(&Q, Elmt(*M, posX, posY));
            }
            posX = B.Position.X;
            posY = B.Position.Y;
            posX-=2;
            posY++;
            if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'R' ) || (Elmt(*M, posX, posY).code == 'H' || (Elmt(*M, posX, posY).code == 'B' ) || (Elmt(*M, posX, posY).code == 'K' ) || (Elmt(*M, posX, posY).code == 'Q' ) || (Elmt(*M, posX, posY).code == 'P' )) )))) {
                Elmt(*M, posX, posY).Position.X = posX;
                Elmt(*M, posX, posY).Position.Y = posY;
                AddQueue(&Q, Elmt(*M, posX, posY));
            }
            posX = B.Position.X;
            posY = B.Position.Y;
            posX+=2;
            posY--;
            if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'R' ) || (Elmt(*M, posX, posY).code == 'H' || (Elmt(*M, posX, posY).code == 'B' ) || (Elmt(*M, posX, posY).code == 'K' ) || (Elmt(*M, posX, posY).code == 'Q' ) || (Elmt(*M, posX, posY).code == 'P' )) )))) {
                Elmt(*M, posX, posY).Position.X = posX;
                Elmt(*M, posX, posY).Position.Y = posY;
                AddQueue(&Q, Elmt(*M, posX, posY));
            }
            posX = B.Position.X;
            posY = B.Position.Y;
            posX-=2;
            posY--;
            if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'R' ) || (Elmt(*M, posX, posY).code == 'H' || (Elmt(*M, posX, posY).code == 'B' ) || (Elmt(*M, posX, posY).code == 'K' ) || (Elmt(*M, posX, posY).code == 'Q' ) || (Elmt(*M, posX, posY).code == 'P' )) )))) {
                Elmt(*M, posX, posY).Position.X = posX;
                Elmt(*M, posX, posY).Position.Y = posY;
                AddQueue(&Q, Elmt(*M, posX, posY));
            }
            return Q;
        }
        case 'B' : {
            found = false;
               posX = B.Position.X;
               posY = B.Position.Y;
               while (!found && posX<=7 && posX>=0 && posY<=7 && posY>=0){
                   posX++;
                   posY++;
                   if (*Elmt(*M,posX,posY).code != ' ' || *Elmt(*M,posX,posY).code != 'r' || *Elmt(*M,posX,posY).code != 'h' || *Elmt(*M,posX,posY).code != 'b' || *Elmt(*M,posX,posY).code != 'k' || *Elmt(*M,posX,posY).code != 'q' || *Elmt(*M,posX,posY).code != 'p') {
                       Elmt(*M,posX,posY).Position.X = posX;
                       Elmt(*M,posX,posY).Position.Y = posY;
                       AddQueue(&Q, Elmt(*M,posX,posY));
                   } else {
                       found = true;
                   }
                }
                found = false;
                posX = B.Position.X;
                posY = B.Position.Y; 
                while (!found && posX<=7 && posX>=0 && posY<=7 && posY>=0){
                   posX--;
                   posY--;
                   if (*Elmt(*M,posX,posY).code != ' ' || *Elmt(*M,posX,posY).code != 'r' || *Elmt(*M,posX,posY).code != 'h' || *Elmt(*M,posX,posY).code != 'b' || *Elmt(*M,posX,posY).code != 'k' || *Elmt(*M,posX,posY).code != 'q' || *Elmt(*M,posX,posY).code != 'p') {
                       Elmt(*M,posX,posY).Position.X = posX;
                       Elmt(*M,posX,posY).Position.Y = posY;
                       AddQueue(&Q, Elmt(*M,posX,posY));
                    } else {
                       found = true;
                    }
                }
                found = false;
                posX = B.Position.X;
                posY = B.Position.Y;
                while (!found && posX<=7 && posX>=0 && posY<=7 && posY>=0){
                   posX++;
                   posY--;
                   if (*Elmt(*M,posX,posY).code != ' ' || *Elmt(*M,posX,posY).code != 'r' || *Elmt(*M,posX,posY).code != 'h' || *Elmt(*M,posX,posY).code != 'b' || *Elmt(*M,posX,posY).code != 'k' || *Elmt(*M,posX,posY).code != 'q' || *Elmt(*M,posX,posY).code != 'p') {
                       Elmt(*M,posX,posY).Position.X = posX;
                       Elmt(*M,posX,posY).Position.Y = posY;
                       AddQueue(&Q, Elmt(*M,posX,posY));
                   } else {
                       found = true;
                   }
                }
                found = false;
                posX = B.Position.X;
                posY = B.Position.Y;
                while (!found && posX<=7 && posX>=0 && posY<=7 && posY>=0){
                   posX--;
                   posY++;
                   if (*Elmt(*M,posX,posY).code != ' ' || *Elmt(*M,posX,posY).code != 'r' || *Elmt(*M,posX,posY).code != 'h' || *Elmt(*M,posX,posY).code != 'b' || *Elmt(*M,posX,posY).code != 'k' || *Elmt(*M,posX,posY).code != 'q' || *Elmt(*M,posX,posY).code != 'p') {
                       Elmt(*M,posX,posY).Position.X = posX;
                       Elmt(*M,posX,posY).Position.Y = posY;
                       AddQueue(&Q, Elmt(*M,posX,posY));
                   } else {
                       found = true;
                   }
                }
           return Q;
        }
        case 'b' : {  
               found = false;
               posX = B.Position.X;
               posY = B.Position.Y;
               while (!found && posX<=7 && posX>=0 && posY<=7 && posY>=0){
                   posX++;
                   posY++;
                   if (*Elmt(*M,posX,posY).code != ' ' || *Elmt(*M,posX,posY).code != 'R' || *Elmt(*M,posX,posY).code != 'H' || *Elmt(*M,posX,posY).code != 'B' || *Elmt(*M,posX,posY).code != 'K' || *Elmt(*M,posX,posY).code != 'Q' || *Elmt(*M,posX,posY).code != 'P') {
                       Elmt(*M,posX,posY).Position.X = posX;
                       Elmt(*M,posX,posY).Position.Y = posY;
                       AddQueue(&Q, Elmt(*M,posX,posY));
                   } else {
                       found = true;
                   }
                }
                found = false;
                posX = B.Position.X;
                posY = B.Position.Y; 
                while (!found && posX<=7 && posX>=0 && posY<=7 && posY>=0){
                   posX--;
                   posY--;
                   if (*Elmt(*M,posX,posY).code != ' ' || *Elmt(*M,posX,posY).code != 'R' || *Elmt(*M,posX,posY).code != 'H' || *Elmt(*M,posX,posY).code != 'B' || *Elmt(*M,posX,posY).code != 'K' || *Elmt(*M,posX,posY).code != 'Q' || *Elmt(*M,posX,posY).code != 'P') {
                       Elmt(*M,posX,posY).Position.X = posX;
                       Elmt(*M,posX,posY).Position.Y = posY;
                       AddQueue(&Q, Elmt(*M,posX,posY));
                    } else {
                       found = true;
                    }
                }
                found = false;
                posX = B.Position.X;
                posY = B.Position.Y;
                while (!found && posX<=7 && posX>=0 && posY<=7 && posY>=0){
                   posX++;
                   posY--;
                   if (*Elmt(*M,posX,posY).code != ' ' || *Elmt(*M,posX,posY).code != 'R' || *Elmt(*M,posX,posY).code != 'H' || *Elmt(*M,posX,posY).code != 'B' || *Elmt(*M,posX,posY).code != 'K' || *Elmt(*M,posX,posY).code != 'Q' || *Elmt(*M,posX,posY).code != 'P') {
                       Elmt(*M,posX,posY).Position.X = posX;
                       Elmt(*M,posX,posY).Position.Y = posY;
                       AddQueue(&Q, Elmt(*M,posX,posY));
                   } else {
                       found = true;
                   }
                }
                found = false;
                posX = B.Position.X;
                posY = B.Position.Y;
                while (!found && posX<=7 && posX>=0 && posY<=7 && posY>=0){
                   posX--;
                   posY++;
                   if (*Elmt(*M,posX,posY).code != ' ' || *Elmt(*M,posX,posY).code != 'R' || *Elmt(*M,posX,posY).code != 'H' || *Elmt(*M,posX,posY).code != 'B' || *Elmt(*M,posX,posY).code != 'K' || *Elmt(*M,posX,posY).code != 'Q' || *Elmt(*M,posX,posY).code != 'P') {
                       Elmt(*M,posX,posY).Position.X = posX;
                       Elmt(*M,posX,posY).Position.Y = posY;
                       AddQueue(&Q, Elmt(*M,posX,posY));
                   } else {
                       found = true;
                   }
                }
           return Q;
        }
        case 'Q' : {
            // horizontal vertikal //
            if (B.Position.X == 0) {
               found = false;
               posX = B.Position.X;
               while (!found && (posX<=7)) {
                   posX++;
                   if ((*Elmt(*M,posX,B.Position.Y).code != ' ') || *Elmt(*M,posX,B.Position.Y).code == 'r' || *Elmt(*M,posX,B.Position.Y).code =='h' || *Elmt(*M,posX,B.Position.Y).code == 'b' || *Elmt(*M,posX,B.Position.Y).code == 'k' || *Elmt(*M,posX,B.Position.Y).code == 'q' || *Elmt(*M,posX,B.Position.Y).code == 'p') {
                       Elmt(*M,posX,B.Position.Y).Position.X = posX;
                       AddQueue(&Q, Elmt(*M,posX,B.Position.Y));
                   } else {
                       found = true;
                   }
               }
           } else {
               found = false;
               posX = B.Position.X;
               while (!found && (posX <=7)){
                   posX++;
                   if ((*Elmt(*M,posX,B.Position.Y).code != ' ') || *Elmt(*M,posX,B.Position.Y).code == 'r' || *Elmt(*M,posX,B.Position.Y).code =='h' || *Elmt(*M,posX,B.Position.Y).code == 'b' || *Elmt(*M,posX,B.Position.Y).code == 'k' || *Elmt(*M,posX,B.Position.Y).code == 'q' || *Elmt(*M,posX,B.Position.Y).code == 'p') {
                       Elmt(*M,posX,B.Position.Y).Position.X = posX;
                       AddQueue(&Q, Elmt(*M,posX,B.Position.Y));
                   } else {
                       found = true;
                   }
               }
               found = false;
               posX = B.Position.X;
               while (!found && (posX >=0)){
                   posX--;
                   if ((*Elmt(*M,posX,B.Position.Y).code != ' ') || *Elmt(*M,posX,B.Position.Y).code == 'r' || *Elmt(*M,posX,B.Position.Y).code =='h' || *Elmt(*M,posX,B.Position.Y).code == 'b' || *Elmt(*M,posX,B.Position.Y).code == 'k' || *Elmt(*M,posX,B.Position.Y).code == 'q' || *Elmt(*M,posX,B.Position.Y).code == 'p') {
                       Elmt(*M,posX,B.Position.Y).Position.X = posX;
                       AddQueue(&Q, Elmt(*M,posX,B.Position.Y));
                   } else {
                       found = true;
                   }
               }
           }
           if (B.Position.Y == 0) {
               found = false;
               posY = B.Position.Y;
               while (!found && (posY<=7)) {
                   posY++;
                   if ((*Elmt(*M,posX,B.Position.Y).code != ' ') || *Elmt(*M,posX,B.Position.Y).code == 'r' || *Elmt(*M,posX,B.Position.Y).code =='h' || *Elmt(*M,posX,B.Position.Y).code == 'b' || *Elmt(*M,posX,B.Position.Y).code == 'k' || *Elmt(*M,posX,B.Position.Y).code == 'q' || *Elmt(*M,posX,B.Position.Y).code == 'p') {
                       Elmt(*M,B.Position.X,posY).Position.Y = posY;
                       AddQueue(&Q, Elmt(*M,B.Position.X,posY));
                   } else {
                       found = true;
                   }
               }
           } else {
               found = false;
               posY = B.Position.Y;
               while (!found && (posY <=7)){
                   posY++;
                   if ((*Elmt(*M,posX,B.Position.Y).code != ' ') || *Elmt(*M,posX,B.Position.Y).code == 'r' || *Elmt(*M,posX,B.Position.Y).code =='h' || *Elmt(*M,posX,B.Position.Y).code == 'b' || *Elmt(*M,posX,B.Position.Y).code == 'k' || *Elmt(*M,posX,B.Position.Y).code == 'q' || *Elmt(*M,posX,B.Position.Y).code == 'p') {
                       Elmt(*M,B.Position.X,posY).Position.Y = posY;
                       AddQueue(&Q, Elmt(*M,B.Position.X,posY));
                   } else {
                       found = true;
                   }
               }
               found = false;
               posY = B.Position.Y;
               while (!found && (posY >=0)){
                   posY--;
                   if ((*Elmt(*M,posX,B.Position.Y).code != ' ') || *Elmt(*M,posX,B.Position.Y).code == 'r' || *Elmt(*M,posX,B.Position.Y).code =='h' || *Elmt(*M,posX,B.Position.Y).code == 'b' || *Elmt(*M,posX,B.Position.Y).code == 'k' || *Elmt(*M,posX,B.Position.Y).code == 'q' || *Elmt(*M,posX,B.Position.Y).code == 'p') {
                       Elmt(*M,B.Position.X,posY).Position.Y = posY;
                       AddQueue(&Q, Elmt(*M,B.Position.X,posY));
                   } else {
                       found = true;
                   }
                }
           }    
           
            // diagonal //
            found = false;
               posX = B.Position.X;
               posY = B.Position.Y;
               while (!found && posX<=7 && posX>=0 && posY<=7 && posY>=0){
                   posX++;
                   posY++;
                   if (*Elmt(*M,posX,posY).code != ' ' || *Elmt(*M,posX,posY).code != 'r' || *Elmt(*M,posX,posY).code != 'h' || *Elmt(*M,posX,posY).code != 'b' || *Elmt(*M,posX,posY).code != 'k' || *Elmt(*M,posX,posY).code != 'q' || *Elmt(*M,posX,posY).code != 'p') {
                       Elmt(*M,posX,posY).Position.X = posX;
                       Elmt(*M,posX,posY).Position.Y = posY;
                       AddQueue(&Q, Elmt(*M,posX,posY));
                   } else {
                       found = true;
                   }
                }
                found = false;
                posX = B.Position.X;
                posY = B.Position.Y; 
                while (!found && posX<=7 && posX>=0 && posY<=7 && posY>=0){
                   posX--;
                   posY--;
                   if (*Elmt(*M,posX,posY).code != ' ' || *Elmt(*M,posX,posY).code != 'r' || *Elmt(*M,posX,posY).code != 'h' || *Elmt(*M,posX,posY).code != 'b' || *Elmt(*M,posX,posY).code != 'k' || *Elmt(*M,posX,posY).code != 'q' || *Elmt(*M,posX,posY).code != 'p') {
                       Elmt(*M,posX,posY).Position.X = posX;
                       Elmt(*M,posX,posY).Position.Y = posY;
                       AddQueue(&Q, Elmt(*M,posX,posY));
                    } else {
                       found = true;
                    }
                }
                found = false;
                posX = B.Position.X;
                posY = B.Position.Y;
                while (!found && posX<=7 && posX>=0 && posY<=7 && posY>=0){
                   posX++;
                   posY--;
                   if (*Elmt(*M,posX,posY).code != ' ' || *Elmt(*M,posX,posY).code != 'r' || *Elmt(*M,posX,posY).code != 'h' || *Elmt(*M,posX,posY).code != 'b' || *Elmt(*M,posX,posY).code != 'k' || *Elmt(*M,posX,posY).code != 'q' || *Elmt(*M,posX,posY).code != 'p') {
                       Elmt(*M,posX,posY).Position.X = posX;
                       Elmt(*M,posX,posY).Position.Y = posY;
                       AddQueue(&Q, Elmt(*M,posX,posY));
                   } else {
                       found = true;
                   }
                }
                found = false;
                posX = B.Position.X;
                posY = B.Position.Y;
                while (!found && posX<=7 && posX>=0 && posY<=7 && posY>=0){
                   posX--;
                   posY++;
                   if (*Elmt(*M,posX,posY).code != ' ' || *Elmt(*M,posX,posY).code != 'r' || *Elmt(*M,posX,posY).code != 'h' || *Elmt(*M,posX,posY).code != 'b' || *Elmt(*M,posX,posY).code != 'k' || *Elmt(*M,posX,posY).code != 'q' || *Elmt(*M,posX,posY).code != 'p') {
                       Elmt(*M,posX,posY).Position.X = posX;
                       Elmt(*M,posX,posY).Position.Y = posY;
                       AddQueue(&Q, Elmt(*M,posX,posY));
                   } else {
                       found = true;
                   }
                }
            return Q;
        }
        case 'q' : {
        // horizontal dan vertikal //
           if (B.Position.X == 0) {
               found = false;
               posX = B.Position.X;
               while (!found && (posX<=7)) {
                   posX++;
                   if ((*Elmt(*M,posX,B.Position.Y).code != ' ') || *Elmt(*M,posX,B.Position.Y).code == 'R' || *Elmt(*M,posX,B.Position.Y).code =='H' || *Elmt(*M,posX,B.Position.Y).code == 'B' || *Elmt(*M,posX,B.Position.Y).code == 'K' || *Elmt(*M,posX,B.Position.Y).code == 'Q' || *Elmt(*M,posX,B.Position.Y).code == 'P') {
                       Elmt(*M,posX,B.Position.Y).Position.X = posX;
                       AddQueue(&Q, Elmt(*M,posX,B.Position.Y));
                   } else {
                       found = true;
                   }
               }
           } else {
               found = false;
               posX = B.Position.X;
               while (!found && (posX <=7)){
                   posX++;
                   if ((*Elmt(*M,posX,B.Position.Y).code != ' ') || *Elmt(*M,posX,B.Position.Y).code == 'R' || *Elmt(*M,posX,B.Position.Y).code =='H' || *Elmt(*M,posX,B.Position.Y).code == 'B' || *Elmt(*M,posX,B.Position.Y).code == 'K' || *Elmt(*M,posX,B.Position.Y).code == 'Q' || *Elmt(*M,posX,B.Position.Y).code == 'P') {
                       Elmt(*M,posX,B.Position.Y).Position.X = posX;
                       AddQueue(&Q, Elmt(*M,posX,B.Position.Y));
                   } else {
                       found = true;
                   }
               }
               found = false;
               posX = B.Position.X;
               while (!found && (posX >=0)){
                   posX--;
                   if (((*Elmt(*M,posX,B.Position.Y).code != ' ') || *Elmt(*M,posX,B.Position.Y).code == 'R' || *Elmt(*M,posX,B.Position.Y).code =='H' || *Elmt(*M,posX,B.Position.Y).code == 'B' || *Elmt(*M,posX,B.Position.Y).code == 'K' || *Elmt(*M,posX,B.Position.Y).code == 'Q' || *Elmt(*M,posX,B.Position.Y).code == 'P')) {
                       Elmt(*M,posX,B.Position.Y).Position.X = posX;
                       AddQueue(&Q, Elmt(*M,posX,B.Position.Y));
                   } else {
                       found = true;
                   }
               }
           }
           if (B.Position.Y == 0) {
               found = false;
               posY = B.Position.Y;
               while (!found && (posY<=7)) {
                   posY++;
                   if (((*Elmt(*M,posX,B.Position.Y).code != ' ') || *Elmt(*M,posX,B.Position.Y).code == 'R' || *Elmt(*M,posX,B.Position.Y).code =='H' || *Elmt(*M,posX,B.Position.Y).code == 'B' || *Elmt(*M,posX,B.Position.Y).code == 'K' || *Elmt(*M,posX,B.Position.Y).code == 'Q' || *Elmt(*M,posX,B.Position.Y).code == 'P')) {
                       Elmt(*M,B.Position.X,posY).Position.Y = posY;
                       AddQueue(&Q, Elmt(*M,B.Position.X,posY));
                   } else {
                       found = true;
                   }
               }
           } else {
               found = false;
               posY = B.Position.Y;
               while (!found && (posY <=7)){
                   posY++;
                   if (((*Elmt(*M,posX,B.Position.Y).code != ' ') || *Elmt(*M,posX,B.Position.Y).code == 'R' || *Elmt(*M,posX,B.Position.Y).code =='H' || *Elmt(*M,posX,B.Position.Y).code == 'B' || *Elmt(*M,posX,B.Position.Y).code == 'K' || *Elmt(*M,posX,B.Position.Y).code == 'Q' || *Elmt(*M,posX,B.Position.Y).code == 'P')) {
                       Elmt(*M,B.Position.X,posY).Position.Y = posY;
                       AddQueue(&Q, Elmt(*M,B.Position.X,posY));
                   } else {
                       found = true;
                   }
               }
               found = false;
               posY = B.Position.Y;
               while (!found && (posY >=0)){
                   posY--;
                   if (((*Elmt(*M,posX,B.Position.Y).code != ' ') || *Elmt(*M,posX,B.Position.Y).code == 'R' || *Elmt(*M,posX,B.Position.Y).code =='H' || *Elmt(*M,posX,B.Position.Y).code == 'B' || *Elmt(*M,posX,B.Position.Y).code == 'K' || *Elmt(*M,posX,B.Position.Y).code == 'Q' || *Elmt(*M,posX,B.Position.Y).code == 'P')) {
                       Elmt(*M,B.Position.X,posY).Position.Y = posY;
                       AddQueue(&Q, Elmt(*M,B.Position.X,posY));
                   } else {
                       found = true;
                   }
                }
           }
           

            // Diagonal  //

                found = false;
                posX = B.Position.X;
                posY = B.Position.Y;
                while (!found && posX<=7 && posX>=0 && posY<=7 && posY>=0){
                   posX++;
                   posY++;
                   if (*Elmt(*M,posX,posY).code != ' ' || *Elmt(*M,posX,posY).code != 'R' || *Elmt(*M,posX,posY).code != 'H' || *Elmt(*M,posX,posY).code != 'B' || *Elmt(*M,posX,posY).code != 'K' || *Elmt(*M,posX,posY).code != 'Q' || *Elmt(*M,posX,posY).code != 'P') {
                       Elmt(*M,posX,posY).Position.X = posX;
                       Elmt(*M,posX,posY).Position.Y = posY;
                       AddQueue(&Q, Elmt(*M,posX,posY));
                   } else {
                       found = true;
                   }
                }
                found = false;
                posX = B.Position.X;
                posY = B.Position.Y; 
                while (!found && posX<=7 && posX>=0 && posY<=7 && posY>=0){
                   posX--;
                   posY--;
                   if (*Elmt(*M,posX,posY).code != ' ' || *Elmt(*M,posX,posY).code != 'R' || *Elmt(*M,posX,posY).code != 'H' || *Elmt(*M,posX,posY).code != 'B' || *Elmt(*M,posX,posY).code != 'K' || *Elmt(*M,posX,posY).code != 'Q' || *Elmt(*M,posX,posY).code != 'P') {
                       Elmt(*M,posX,posY).Position.X = posX;
                       Elmt(*M,posX,posY).Position.Y = posY;
                       AddQueue(&Q, Elmt(*M,posX,posY));
                    } else {
                       found = true;
                    }
                }
                found = false;
                posX = B.Position.X;
                posY = B.Position.Y;
                while (!found && posX<=7 && posX>=0 && posY<=7 && posY>=0){
                   posX++;
                   posY--;
                   if (*Elmt(*M,posX,posY).code != ' ' || *Elmt(*M,posX,posY).code != 'R' || *Elmt(*M,posX,posY).code != 'H' || *Elmt(*M,posX,posY).code != 'B' || *Elmt(*M,posX,posY).code != 'K' || *Elmt(*M,posX,posY).code != 'Q' || *Elmt(*M,posX,posY).code != 'P') {
                       Elmt(*M,posX,posY).Position.X = posX;
                       Elmt(*M,posX,posY).Position.Y = posY;
                       AddQueue(&Q, Elmt(*M,posX,posY));
                   } else {
                       found = true;
                   }
                }
                found = false;
                posX = B.Position.X;
                posY = B.Position.Y;
                while (!found && posX<=7 && posX>=0 && posY<=7 && posY>=0){
                   posX--;
                   posY++;
                   if (*Elmt(*M,posX,posY).code != ' ' || *Elmt(*M,posX,posY).code != 'R' || *Elmt(*M,posX,posY).code != 'H' || *Elmt(*M,posX,posY).code != 'B' || *Elmt(*M,posX,posY).code != 'K' || *Elmt(*M,posX,posY).code != 'Q' || *Elmt(*M,posX,posY).code != 'P') {
                       Elmt(*M,posX,posY).Position.X = posX;
                       Elmt(*M,posX,posY).Position.Y = posY;
                       AddQueue(&Q, Elmt(*M,posX,posY));
                   } else {
                       found = true;
                   }
                }
            return Q;
        }
        case 'K' : {
             posX=B.Position.X;
            posY=B.Position.Y;
            posX++;
            if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'r' ) || (Elmt(*M, posX, posY).code == 'h' || (Elmt(*M, posX, posY).code == 'b' ) || (Elmt(*M, posX, posY).code == 'k' ) || (Elmt(*M, posX, posY).code == 'q' ) || (Elmt(*M, posX, posY).code == 'p' )) )))) {
                Elmt(*M, posX, posY).Position.X = posX;
                Elmt(*M, posX, posY).Position.Y = posY;
                AddQueue(&Q, Elmt(*M, posX, posY));
            }
            posX=B.Position.X;
            posY=B.Position.Y;
            posX--;
            if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'r' ) || (Elmt(*M, posX, posY).code == 'h' || (Elmt(*M, posX, posY).code == 'b' ) || (Elmt(*M, posX, posY).code == 'k' ) || (Elmt(*M, posX, posY).code == 'q' ) || (Elmt(*M, posX, posY).code == 'p' )) )))) {
                Elmt(*M, posX, posY).Position.X = posX;
                Elmt(*M, posX, posY).Position.Y = posY;
                AddQueue(&Q, Elmt(*M, posX, posY));
            }
            posX=B.Position.X;
            posY=B.Position.Y;
            posY++;
            if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'r' ) || (Elmt(*M, posX, posY).code == 'h' || (Elmt(*M, posX, posY).code == 'b' ) || (Elmt(*M, posX, posY).code == 'k' ) || (Elmt(*M, posX, posY).code == 'q' ) || (Elmt(*M, posX, posY).code == 'p' )) )))) {
                Elmt(*M, posX, posY).Position.X = posX;
                Elmt(*M, posX, posY).Position.Y = posY;
                AddQueue(&Q, Elmt(*M, posX, posY));
            }
            posX=B.Position.X;
            posY=B.Position.Y;
            posY--;
            if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'r' ) || (Elmt(*M, posX, posY).code == 'h' || (Elmt(*M, posX, posY).code == 'b' ) || (Elmt(*M, posX, posY).code == 'k' ) || (Elmt(*M, posX, posY).code == 'q' ) || (Elmt(*M, posX, posY).code == 'p' )) )))) {
                Elmt(*M, posX, posY).Position.X = posX;
                Elmt(*M, posX, posY).Position.Y = posY;
                AddQueue(&Q, Elmt(*M, posX, posY));
            }
            posX=B.Position.X;
            posY=B.Position.Y;
            posX++;
            posY++;
            if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'r' ) || (Elmt(*M, posX, posY).code == 'h' || (Elmt(*M, posX, posY).code == 'b' ) || (Elmt(*M, posX, posY).code == 'k' ) || (Elmt(*M, posX, posY).code == 'q' ) || (Elmt(*M, posX, posY).code == 'p' )) )))) {
                Elmt(*M, posX, posY).Position.X = posX;
                Elmt(*M, posX, posY).Position.Y = posY;
                AddQueue(&Q, Elmt(*M, posX, posY));
            }
            posX=B.Position.X;
            posY=B.Position.Y;
            posX++;
            posY--;
            if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'r' ) || (Elmt(*M, posX, posY).code == 'h' || (Elmt(*M, posX, posY).code == 'b' ) || (Elmt(*M, posX, posY).code == 'k' ) || (Elmt(*M, posX, posY).code == 'q' ) || (Elmt(*M, posX, posY).code == 'p' )) )))) {
                Elmt(*M, posX, posY).Position.X = posX;
                Elmt(*M, posX, posY).Position.Y = posY;
                AddQueue(&Q, Elmt(*M, posX, posY));
            }
            posX=B.Position.X;
            posY=B.Position.Y;
            posX--;
            posY++;
            if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'r' ) || (Elmt(*M, posX, posY).code == 'h' || (Elmt(*M, posX, posY).code == 'b' ) || (Elmt(*M, posX, posY).code == 'k' ) || (Elmt(*M, posX, posY).code == 'q' ) || (Elmt(*M, posX, posY).code == 'p' )) )))) {
                Elmt(*M, posX, posY).Position.X = posX;
                Elmt(*M, posX, posY).Position.Y = posY;
                AddQueue(&Q, Elmt(*M, posX, posY));
            }
            posX=B.Position.X;
            posY=B.Position.Y;
            posX--;
            posY--;
            if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'r' ) || (Elmt(*M, posX, posY).code == 'h' || (Elmt(*M, posX, posY).code == 'b' ) || (Elmt(*M, posX, posY).code == 'k' ) || (Elmt(*M, posX, posY).code == 'q' ) || (Elmt(*M, posX, posY).code == 'p' )) )))) {
                Elmt(*M, posX, posY).Position.X = posX;
                Elmt(*M, posX, posY).Position.Y = posY;
                AddQueue(&Q, Elmt(*M, posX, posY));
            }

            return Q;
        }
        case 'k' : {
            posX=B.Position.X;
            posY=B.Position.Y;
            posX++;
            if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'R' ) || (Elmt(*M, posX, posY).code == 'H' || (Elmt(*M, posX, posY).code == 'B' ) || (Elmt(*M, posX, posY).code == 'K' ) || (Elmt(*M, posX, posY).code == 'Q' ) || (Elmt(*M, posX, posY).code == 'P' )) )))) {
                Elmt(*M, posX, posY).Position.X = posX;
                Elmt(*M, posX, posY).Position.Y = posY;
                AddQueue(&Q, Elmt(*M, posX, posY));
            }
            posX=B.Position.X;
            posY=B.Position.Y;
            posX--;
            if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'R' ) || (Elmt(*M, posX, posY).code == 'H' || (Elmt(*M, posX, posY).code == 'B' ) || (Elmt(*M, posX, posY).code == 'K' ) || (Elmt(*M, posX, posY).code == 'Q' ) || (Elmt(*M, posX, posY).code == 'P' )) )))) {
                Elmt(*M, posX, posY).Position.X = posX;
                Elmt(*M, posX, posY).Position.Y = posY;
                AddQueue(&Q, Elmt(*M, posX, posY));
            }
            posX=B.Position.X;
            posY=B.Position.Y;
            posY++;
            if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'R' ) || (Elmt(*M, posX, posY).code == 'H' || (Elmt(*M, posX, posY).code == 'B' ) || (Elmt(*M, posX, posY).code == 'K' ) || (Elmt(*M, posX, posY).code == 'Q' ) || (Elmt(*M, posX, posY).code == 'P' )) )))) {
                Elmt(*M, posX, posY).Position.X = posX;
                Elmt(*M, posX, posY).Position.Y = posY;
                AddQueue(&Q, Elmt(*M, posX, posY));
            }
            posX=B.Position.X;
            posY=B.Position.Y;
            posY--;
            if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'R' ) || (Elmt(*M, posX, posY).code == 'H' || (Elmt(*M, posX, posY).code == 'B' ) || (Elmt(*M, posX, posY).code == 'K' ) || (Elmt(*M, posX, posY).code == 'Q' ) || (Elmt(*M, posX, posY).code == 'P' )) )))) {
                Elmt(*M, posX, posY).Position.X = posX;
                Elmt(*M, posX, posY).Position.Y = posY;
                AddQueue(&Q, Elmt(*M, posX, posY));
            }
            posX=B.Position.X;
            posY=B.Position.Y;
            posX++;
            posY++;
            if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'R' ) || (Elmt(*M, posX, posY).code == 'H' || (Elmt(*M, posX, posY).code == 'B' ) || (Elmt(*M, posX, posY).code == 'K' ) || (Elmt(*M, posX, posY).code == 'Q' ) || (Elmt(*M, posX, posY).code == 'P' )) )))) {
                Elmt(*M, posX, posY).Position.X = posX;
                Elmt(*M, posX, posY).Position.Y = posY;
                AddQueue(&Q, Elmt(*M, posX, posY));
            }
            posX=B.Position.X;
            posY=B.Position.Y;
            posX++;
            posY--;
            if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'R' ) || (Elmt(*M, posX, posY).code == 'H' || (Elmt(*M, posX, posY).code == 'B' ) || (Elmt(*M, posX, posY).code == 'K' ) || (Elmt(*M, posX, posY).code == 'Q' ) || (Elmt(*M, posX, posY).code == 'P' )) )))) {
                Elmt(*M, posX, posY).Position.X = posX;
                Elmt(*M, posX, posY).Position.Y = posY;
                AddQueue(&Q, Elmt(*M, posX, posY));
            }
            posX=B.Position.X;
            posY=B.Position.Y;
            posX--;
            posY++;
            if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'R' ) || (Elmt(*M, posX, posY).code == 'H' || (Elmt(*M, posX, posY).code == 'B' ) || (Elmt(*M, posX, posY).code == 'K' ) || (Elmt(*M, posX, posY).code == 'Q' ) || (Elmt(*M, posX, posY).code == 'P' )) )))) {
                Elmt(*M, posX, posY).Position.X = posX;
                Elmt(*M, posX, posY).Position.Y = posY;
                AddQueue(&Q, Elmt(*M, posX, posY));
            }
            posX=B.Position.X;
            posY=B.Position.Y;
            posX--;
            posY--;
            if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'R' ) || (Elmt(*M, posX, posY).code == 'H' || (Elmt(*M, posX, posY).code == 'B' ) || (Elmt(*M, posX, posY).code == 'K' ) || (Elmt(*M, posX, posY).code == 'Q' ) || (Elmt(*M, posX, posY).code == 'P' )) )))) {
                Elmt(*M, posX, posY).Position.X = posX;
                Elmt(*M, posX, posY).Position.Y = posY;
                AddQueue(&Q, Elmt(*M, posX, posY));
            }

            return Q; 
        }
        case 'P' : {
            posX=B.Position.X;
            posY=B.Position.Y;
            if (posY=7){
                posX--;
                posY--;
                if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'r' ) || (Elmt(*M, posX, posY).code == 'h' || (Elmt(*M, posX, posY).code == 'b' ) || (Elmt(*M, posX, posY).code == 'k' ) || (Elmt(*M, posX, posY).code == 'q' ) || (Elmt(*M, posX, posY).code == 'p' )) )))) {
                    Elmt(*M, posX, posY).Position.X = posX;
                    Elmt(*M, posX, posY).Position.Y = posY;
                    AddQueue(&Q, Elmt(*M, posX, posY));
                }
                posX--;
                posY--;
                if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'r' ) || (Elmt(*M, posX, posY).code == 'h' || (Elmt(*M, posX, posY).code == 'b' ) || (Elmt(*M, posX, posY).code == 'k' ) || (Elmt(*M, posX, posY).code == 'q' ) || (Elmt(*M, posX, posY).code == 'p' )) )))) {
                    Elmt(*M, posX, posY).Position.X = posX;
                    Elmt(*M, posX, posY).Position.Y = posY;
                    AddQueue(&Q, Elmt(*M, posX, posY));
                }
            } else {
                posX=B.Position.X;
                posY=B.Position.Y;
                posX--;
                posY--;
                if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'r' ) || (Elmt(*M, posX, posY).code == 'h' || (Elmt(*M, posX, posY).code == 'b' ) || (Elmt(*M, posX, posY).code == 'k' ) || (Elmt(*M, posX, posY).code == 'q' ) || (Elmt(*M, posX, posY).code == 'p' )) )))) {
                    Elmt(*M, posX, posY).Position.X = posX;
                    Elmt(*M, posX, posY).Position.Y = posY;
                    AddQueue(&Q, Elmt(*M, posX, posY));
                }
            }
            return Q;
        }
        case 'p' : {
            posX=B.Position.X;
            posY=B.Position.Y;
            if (posY=2){
                posX++;
                posY++;
                if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'R' ) || (Elmt(*M, posX, posY).code == 'H' || (Elmt(*M, posX, posY).code == 'B' ) || (Elmt(*M, posX, posY).code == 'K' ) || (Elmt(*M, posX, posY).code == 'Q' ) || (Elmt(*M, posX, posY).code == 'P' )) )))) {
                    Elmt(*M, posX, posY).Position.X = posX;
                    Elmt(*M, posX, posY).Position.Y = posY;
                    AddQueue(&Q, Elmt(*M, posX, posY));
                }
                posX++;
                posY++;
                if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'R' ) || (Elmt(*M, posX, posY).code == 'H' || (Elmt(*M, posX, posY).code == 'B' ) || (Elmt(*M, posX, posY).code == 'K' ) || (Elmt(*M, posX, posY).code == 'Q' ) || (Elmt(*M, posX, posY).code == 'P' )) )))) {
                    Elmt(*M, posX, posY).Position.X = posX;
                    Elmt(*M, posX, posY).Position.Y = posY;
                    AddQueue(&Q, Elmt(*M, posX, posY));
                }
            } else {
                posX=B.Position.X;
                posY=B.Position.Y;
                posX++;
                posY++;
                if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'R' ) || (Elmt(*M, posX, posY).code == 'H' || (Elmt(*M, posX, posY).code == 'B' ) || (Elmt(*M, posX, posY).code == 'K' ) || (Elmt(*M, posX, posY).code == 'Q' ) || (Elmt(*M, posX, posY).code == 'P' )) )))) {
                    Elmt(*M, posX, posY).Position.X = posX;
                    Elmt(*M, posX, posY).Position.Y = posY;
                    AddQueue(&Q, Elmt(*M, posX, posY));
                }
            }
            return Q;
            }
        break;
    }
        
}


Queue cekGerak (MATRIKS *M, List *L) {
    int i, n;
    Queue Q;
    Bidak B;
    int posX, posY;
    addressL P;


    CreateEmptyQueue(&Q, 100);
    P=FirstL(*L);

    while (infoL(P)!=NilL) {

    switch(*B.code) {
        case 'R' : {
            if (B.Position.X == 0) {
                posX = B.Position.X;
                posX++;
                    if ((*Elmt(*M,posX,B.Position.Y).code != ' ') || (*Elmt(*M,posX,B.Position.Y).code == 'r') || (*Elmt(*M,posX,B.Position.Y).code =='h') || (*Elmt(*M,posX,B.Position.Y).code == 'b') || (*Elmt(*M,posX,B.Position.Y).code == 'k') || (*Elmt(*M,posX,B.Position.Y).code == 'q') || (*Elmt(*M,posX,B.Position.Y).code == 'p')) {
                        Elmt(*M,posX,B.Position.Y).Position.X = posX;
                        AddQueue(&Q, Elmt(*M,posX,B.Position.Y));
                    } 
           } else {
               posX = B.Position.X;
                   posX++;
                   if ((*Elmt(*M,posX,B.Position.Y).code != ' ') || *Elmt(*M,posX,B.Position.Y).code == 'r' || *Elmt(*M,posX,B.Position.Y).code =='h' || *Elmt(*M,posX,B.Position.Y).code == 'b' || *Elmt(*M,posX,B.Position.Y).code == 'k' || *Elmt(*M,posX,B.Position.Y).code == 'q' || *Elmt(*M,posX,B.Position.Y).code == 'p') {
                       Elmt(*M,posX,B.Position.Y).Position.X = posX;
                       AddQueue(&Q, Elmt(*M,posX,B.Position.Y));
                   } 
               posX = B.Position.X;
                   posX--;
                   if ((*Elmt(*M,posX,B.Position.Y).code != ' ') || *Elmt(*M,posX,B.Position.Y).code == 'r' || *Elmt(*M,posX,B.Position.Y).code =='h' || *Elmt(*M,posX,B.Position.Y).code == 'b' || *Elmt(*M,posX,B.Position.Y).code == 'k' || *Elmt(*M,posX,B.Position.Y).code == 'q' || *Elmt(*M,posX,B.Position.Y).code == 'p') {
                       Elmt(*M,posX,B.Position.Y).Position.X = posX;
                       AddQueue(&Q, Elmt(*M,posX,B.Position.Y));
                   } 

           }
           if (B.Position.Y == 0) {
               posY = B.Position.Y;
                   posY++;
                   if ((*Elmt(*M,posX,B.Position.Y).code != ' ') || *Elmt(*M,posX,B.Position.Y).code == 'r' || *Elmt(*M,posX,B.Position.Y).code =='h' || *Elmt(*M,posX,B.Position.Y).code == 'b' || *Elmt(*M,posX,B.Position.Y).code == 'k' || *Elmt(*M,posX,B.Position.Y).code == 'q' || *Elmt(*M,posX,B.Position.Y).code == 'p') {
                       Elmt(*M,B.Position.X,posY).Position.Y = posY;
                       AddQueue(&Q, Elmt(*M,B.Position.X,posY));
                   } 
           } else {
               posY = B.Position.Y;
                   posY++;
                   if ((*Elmt(*M,posX,B.Position.Y).code != ' ') || *Elmt(*M,posX,B.Position.Y).code == 'r' || *Elmt(*M,posX,B.Position.Y).code =='h' || *Elmt(*M,posX,B.Position.Y).code == 'b' || *Elmt(*M,posX,B.Position.Y).code == 'k' || *Elmt(*M,posX,B.Position.Y).code == 'q' || *Elmt(*M,posX,B.Position.Y).code == 'p') {
                       Elmt(*M,B.Position.X,posY).Position.Y = posY;
                       AddQueue(&Q, Elmt(*M,B.Position.X,posY));
                   } 

               posY = B.Position.Y;
                   posY--;
                   if ((*Elmt(*M,posX,B.Position.Y).code != ' ') || *Elmt(*M,posX,B.Position.Y).code == 'r' || *Elmt(*M,posX,B.Position.Y).code =='h' || *Elmt(*M,posX,B.Position.Y).code == 'b' || *Elmt(*M,posX,B.Position.Y).code == 'k' || *Elmt(*M,posX,B.Position.Y).code == 'q' || *Elmt(*M,posX,B.Position.Y).code == 'p') {
                       Elmt(*M,B.Position.X,posY).Position.Y = posY;
                       AddQueue(&Q, Elmt(*M,B.Position.X,posY));
                   } 
                }
            return Q;
        }
        case 'r' : {
           if (B.Position.X == 0) {
               posX = B.Position.X;
                   posX++;
                   if ((*Elmt(*M,posX,B.Position.Y).code != ' ') || *Elmt(*M,posX,B.Position.Y).code == 'R' || *Elmt(*M,posX,B.Position.Y).code =='H' || *Elmt(*M,posX,B.Position.Y).code == 'B' || *Elmt(*M,posX,B.Position.Y).code == 'K' || *Elmt(*M,posX,B.Position.Y).code == 'Q' || *Elmt(*M,posX,B.Position.Y).code == 'P') {
                       Elmt(*M,posX,B.Position.Y).Position.X = posX;
                       AddQueue(&Q, Elmt(*M,posX,B.Position.Y));
                   } 
           } else {
               posX = B.Position.X;
                   posX++;
                   if ((*Elmt(*M,posX,B.Position.Y).code != ' ') || *Elmt(*M,posX,B.Position.Y).code == 'R' || *Elmt(*M,posX,B.Position.Y).code =='H' || *Elmt(*M,posX,B.Position.Y).code == 'B' || *Elmt(*M,posX,B.Position.Y).code == 'K' || *Elmt(*M,posX,B.Position.Y).code == 'Q' || *Elmt(*M,posX,B.Position.Y).code == 'P') {
                       Elmt(*M,posX,B.Position.Y).Position.X = posX;
                       AddQueue(&Q, Elmt(*M,posX,B.Position.Y));
                   } 
               posX = B.Position.X;
                   posX--;
                   if (((*Elmt(*M,posX,B.Position.Y).code != ' ') || *Elmt(*M,posX,B.Position.Y).code == 'R' || *Elmt(*M,posX,B.Position.Y).code =='H' || *Elmt(*M,posX,B.Position.Y).code == 'B' || *Elmt(*M,posX,B.Position.Y).code == 'K' || *Elmt(*M,posX,B.Position.Y).code == 'Q' || *Elmt(*M,posX,B.Position.Y).code == 'P')) {
                       Elmt(*M,posX,B.Position.Y).Position.X = posX;
                       AddQueue(&Q, Elmt(*M,posX,B.Position.Y));
                   } 
           }
        
           if (B.Position.Y == 0) {

               posY = B.Position.Y;
                   posY++;
                   if (((*Elmt(*M,posX,B.Position.Y).code != ' ') || *Elmt(*M,posX,B.Position.Y).code == 'R' || *Elmt(*M,posX,B.Position.Y).code =='H' || *Elmt(*M,posX,B.Position.Y).code == 'B' || *Elmt(*M,posX,B.Position.Y).code == 'K' || *Elmt(*M,posX,B.Position.Y).code == 'Q' || *Elmt(*M,posX,B.Position.Y).code == 'P')) {
                       Elmt(*M,B.Position.X,posY).Position.Y = posY;
                       AddQueue(&Q, Elmt(*M,B.Position.X,posY));
                   } 
           } else {
               posY = B.Position.Y;
                   posY++;
                   if (((*Elmt(*M,posX,B.Position.Y).code != ' ') || *Elmt(*M,posX,B.Position.Y).code == 'R' || *Elmt(*M,posX,B.Position.Y).code =='H' || *Elmt(*M,posX,B.Position.Y).code == 'B' || *Elmt(*M,posX,B.Position.Y).code == 'K' || *Elmt(*M,posX,B.Position.Y).code == 'Q' || *Elmt(*M,posX,B.Position.Y).code == 'P')) {
                       Elmt(*M,B.Position.X,posY).Position.Y = posY;
                       AddQueue(&Q, Elmt(*M,B.Position.X,posY));
                   } 
               posY = B.Position.Y;
                   posY--;
                   if (((*Elmt(*M,posX,B.Position.Y).code != ' ') || *Elmt(*M,posX,B.Position.Y).code == 'R' || *Elmt(*M,posX,B.Position.Y).code =='H' || *Elmt(*M,posX,B.Position.Y).code == 'B' || *Elmt(*M,posX,B.Position.Y).code == 'K' || *Elmt(*M,posX,B.Position.Y).code == 'Q' || *Elmt(*M,posX,B.Position.Y).code == 'P')) {
                       Elmt(*M,B.Position.X,posY).Position.Y = posY;
                       AddQueue(&Q, Elmt(*M,B.Position.X,posY));
                   } 
           }
            return Q;
        }
        case 'H' : {
        posX = B.Position.X;
        posY = B.Position.Y;
        posX++;
        posY += 2;
        if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'r' ) || (Elmt(*M, posX, posY).code == 'h' || (Elmt(*M, posX, posY).code == 'b' ) || (Elmt(*M, posX, posY).code == 'k' ) || (Elmt(*M, posX, posY).code == 'q' ) || (Elmt(*M, posX, posY).code == 'p' )) )))) {
            Elmt(*M, posX, posY).Position.X = posX;
            Elmt(*M, posX, posY).Position.Y = posY;
            AddQueue(&Q, Elmt(*M, posX, posY));
        }
        posX = B.Position.X;
        posY = B.Position.Y;
        posX++;
        posY -= 2;
        if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'r' ) || (Elmt(*M, posX, posY).code == 'h' || (Elmt(*M, posX, posY).code == 'b' ) || (Elmt(*M, posX, posY).code == 'k' ) || (Elmt(*M, posX, posY).code == 'q' ) || (Elmt(*M, posX, posY).code == 'p' )) )))) {
            Elmt(*M, posX, posY).Position.X = posX;
            Elmt(*M, posX, posY).Position.Y = posY;
            AddQueue(&Q, Elmt(*M, posX, posY));
        }
        posX = B.Position.X;
        posY = B.Position.Y;
        posX--;
        posY += 2;
        if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'r' ) || (Elmt(*M, posX, posY).code == 'h' || (Elmt(*M, posX, posY).code == 'b' ) || (Elmt(*M, posX, posY).code == 'k' ) || (Elmt(*M, posX, posY).code == 'q' ) || (Elmt(*M, posX, posY).code == 'p' )) )))) {
            Elmt(*M, posX, posY).Position.X = posX;
            Elmt(*M, posX, posY).Position.Y = posY;
            AddQueue(&Q, Elmt(*M, posX, posY));
        }
        posX = B.Position.X;
        posY = B.Position.Y;
        posX--;
        posY -= 2;
        if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'r' ) || (Elmt(*M, posX, posY).code == 'h' || (Elmt(*M, posX, posY).code == 'b' ) || (Elmt(*M, posX, posY).code == 'k' ) || (Elmt(*M, posX, posY).code == 'q' ) || (Elmt(*M, posX, posY).code == 'p' )) )))) {
            Elmt(*M, posX, posY).Position.X = posX;
            Elmt(*M, posX, posY).Position.Y = posY;
            AddQueue(&Q, Elmt(*M, posX, posY));
        }
        posX = B.Position.X;
        posY = B.Position.Y;
        posX+=2;
        posY++;
        if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'r' ) || (Elmt(*M, posX, posY).code == 'h' || (Elmt(*M, posX, posY).code == 'b' ) || (Elmt(*M, posX, posY).code == 'k' ) || (Elmt(*M, posX, posY).code == 'q' ) || (Elmt(*M, posX, posY).code == 'p' )) )))) {
            Elmt(*M, posX, posY).Position.X = posX;
            Elmt(*M, posX, posY).Position.Y = posY;
            AddQueue(&Q, Elmt(*M, posX, posY));
        }
        posX = B.Position.X;
        posY = B.Position.Y;
        posX-=2;
        posY++;
        if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'r' ) || (Elmt(*M, posX, posY).code == 'h' || (Elmt(*M, posX, posY).code == 'b' ) || (Elmt(*M, posX, posY).code == 'k' ) || (Elmt(*M, posX, posY).code == 'q' ) || (Elmt(*M, posX, posY).code == 'p' )) )))) {
            Elmt(*M, posX, posY).Position.X = posX;
            Elmt(*M, posX, posY).Position.Y = posY;
            AddQueue(&Q, Elmt(*M, posX, posY));
        }
        posX = B.Position.X;
        posY = B.Position.Y;
        posX+=2;
        posY--;
        if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'r' ) || (Elmt(*M, posX, posY).code == 'h' || (Elmt(*M, posX, posY).code == 'b' ) || (Elmt(*M, posX, posY).code == 'k' ) || (Elmt(*M, posX, posY).code == 'q' ) || (Elmt(*M, posX, posY).code == 'p' )) )))) {
            Elmt(*M, posX, posY).Position.X = posX;
            Elmt(*M, posX, posY).Position.Y = posY;
            AddQueue(&Q, Elmt(*M, posX, posY));
        }
        posX = B.Position.X;
        posY = B.Position.Y;
        posX-=2;
        posY--;
        if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'r' ) || (Elmt(*M, posX, posY).code == 'h' || (Elmt(*M, posX, posY).code == 'b' ) || (Elmt(*M, posX, posY).code == 'k' ) || (Elmt(*M, posX, posY).code == 'q' ) || (Elmt(*M, posX, posY).code == 'p' )) )))) {
            Elmt(*M, posX, posY).Position.X = posX;
            Elmt(*M, posX, posY).Position.Y = posY;
            AddQueue(&Q, Elmt(*M, posX, posY));
        }
            return Q;
        }
        case 'h' : {
        posX = B.Position.X;
        posY = B.Position.Y;
        posX++;
        posY += 2;
        if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'R' ) || (Elmt(*M, posX, posY).code == 'H' || (Elmt(*M, posX, posY).code == 'B' ) || (Elmt(*M, posX, posY).code == 'K' ) || (Elmt(*M, posX, posY).code == 'Q' ) || (Elmt(*M, posX, posY).code == 'P' )) )))) {
            Elmt(*M, posX, posY).Position.X = posX;
            Elmt(*M, posX, posY).Position.Y = posY;
            AddQueue(&Q, Elmt(*M, posX, posY));
        }
        posX = B.Position.X;
        posY = B.Position.Y;
        posX++;
        posY -= 2;
        if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'R' ) || (Elmt(*M, posX, posY).code == 'H' || (Elmt(*M, posX, posY).code == 'B' ) || (Elmt(*M, posX, posY).code == 'K' ) || (Elmt(*M, posX, posY).code == 'Q' ) || (Elmt(*M, posX, posY).code == 'P' )) )))) {
            Elmt(*M, posX, posY).Position.X = posX;
            Elmt(*M, posX, posY).Position.Y = posY;
            AddQueue(&Q, Elmt(*M, posX, posY));
        }
        posX = B.Position.X;
        posY = B.Position.Y;
        posX--;
        posY += 2;
        if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'R' ) || (Elmt(*M, posX, posY).code == 'H' || (Elmt(*M, posX, posY).code == 'B' ) || (Elmt(*M, posX, posY).code == 'K' ) || (Elmt(*M, posX, posY).code == 'Q' ) || (Elmt(*M, posX, posY).code == 'P' )) )))) {
            Elmt(*M, posX, posY).Position.X = posX;
            Elmt(*M, posX, posY).Position.Y = posY;
            AddQueue(&Q, Elmt(*M, posX, posY));
        }
        posX = B.Position.X;
        posY = B.Position.Y;
        posX--;
        posY -= 2;
        if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'R' ) || (Elmt(*M, posX, posY).code == 'H' || (Elmt(*M, posX, posY).code == 'B' ) || (Elmt(*M, posX, posY).code == 'K' ) || (Elmt(*M, posX, posY).code == 'Q' ) || (Elmt(*M, posX, posY).code == 'P' )) )))) {
            Elmt(*M, posX, posY).Position.X = posX;
            Elmt(*M, posX, posY).Position.Y = posY;
            AddQueue(&Q, Elmt(*M, posX, posY));
        }
        posX = B.Position.X;
        posY = B.Position.Y;
        posX+=2;
        posY++;
        if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'R' ) || (Elmt(*M, posX, posY).code == 'H' || (Elmt(*M, posX, posY).code == 'B' ) || (Elmt(*M, posX, posY).code == 'K' ) || (Elmt(*M, posX, posY).code == 'Q' ) || (Elmt(*M, posX, posY).code == 'P' )) )))) {
            Elmt(*M, posX, posY).Position.X = posX;
            Elmt(*M, posX, posY).Position.Y = posY;
            AddQueue(&Q, Elmt(*M, posX, posY));
        }
        posX = B.Position.X;
        posY = B.Position.Y;
        posX-=2;
        posY++;
        if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'R' ) || (Elmt(*M, posX, posY).code == 'H' || (Elmt(*M, posX, posY).code == 'B' ) || (Elmt(*M, posX, posY).code == 'K' ) || (Elmt(*M, posX, posY).code == 'Q' ) || (Elmt(*M, posX, posY).code == 'P' )) )))) {
            Elmt(*M, posX, posY).Position.X = posX;
            Elmt(*M, posX, posY).Position.Y = posY;
            AddQueue(&Q, Elmt(*M, posX, posY));
        }
        posX = B.Position.X;
        posY = B.Position.Y;
        posX+=2;
        posY--;
        if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'R' ) || (Elmt(*M, posX, posY).code == 'H' || (Elmt(*M, posX, posY).code == 'B' ) || (Elmt(*M, posX, posY).code == 'K' ) || (Elmt(*M, posX, posY).code == 'Q' ) || (Elmt(*M, posX, posY).code == 'P' )) )))) {
            Elmt(*M, posX, posY).Position.X = posX;
            Elmt(*M, posX, posY).Position.Y = posY;
            AddQueue(&Q, Elmt(*M, posX, posY));
        }
        posX = B.Position.X;
        posY = B.Position.Y;
        posX-=2;
        posY--;
        if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'R' ) || (Elmt(*M, posX, posY).code == 'H' || (Elmt(*M, posX, posY).code == 'B' ) || (Elmt(*M, posX, posY).code == 'K' ) || (Elmt(*M, posX, posY).code == 'Q' ) || (Elmt(*M, posX, posY).code == 'P' )) )))) {
            Elmt(*M, posX, posY).Position.X = posX;
            Elmt(*M, posX, posY).Position.Y = posY;
            AddQueue(&Q, Elmt(*M, posX, posY));
        }
            return Q;
        }
        case 'B' : {
               posX = B.Position.X;
               posY = B.Position.Y;
                   posX++;
                   posY++;
                   if (*Elmt(*M,posX,posY).code != ' ' || *Elmt(*M,posX,posY).code != 'r' || *Elmt(*M,posX,posY).code != 'h' || *Elmt(*M,posX,posY).code != 'b' || *Elmt(*M,posX,posY).code != 'k' || *Elmt(*M,posX,posY).code != 'q' || *Elmt(*M,posX,posY).code != 'p') {
                       Elmt(*M,posX,posY).Position.X = posX;
                       Elmt(*M,posX,posY).Position.Y = posY;
                       AddQueue(&Q, Elmt(*M,posX,posY));
                   } 
                posX = B.Position.X;
                posY = B.Position.Y; 
                   posX--;
                   posY--;
                   if (*Elmt(*M,posX,posY).code != ' ' || *Elmt(*M,posX,posY).code != 'r' || *Elmt(*M,posX,posY).code != 'h' || *Elmt(*M,posX,posY).code != 'b' || *Elmt(*M,posX,posY).code != 'k' || *Elmt(*M,posX,posY).code != 'q' || *Elmt(*M,posX,posY).code != 'p') {
                       Elmt(*M,posX,posY).Position.X = posX;
                       Elmt(*M,posX,posY).Position.Y = posY;
                       AddQueue(&Q, Elmt(*M,posX,posY));
                    } 
                posX = B.Position.X;
                posY = B.Position.Y;
                   posX++;
                   posY--;
                   if (*Elmt(*M,posX,posY).code != ' ' || *Elmt(*M,posX,posY).code != 'r' || *Elmt(*M,posX,posY).code != 'h' || *Elmt(*M,posX,posY).code != 'b' || *Elmt(*M,posX,posY).code != 'k' || *Elmt(*M,posX,posY).code != 'q' || *Elmt(*M,posX,posY).code != 'p') {
                       Elmt(*M,posX,posY).Position.X = posX;
                       Elmt(*M,posX,posY).Position.Y = posY;
                       AddQueue(&Q, Elmt(*M,posX,posY));
                   } 
                posX = B.Position.X;
                posY = B.Position.Y;
                   posX--;
                   posY++;
                   if (*Elmt(*M,posX,posY).code != ' ' || *Elmt(*M,posX,posY).code != 'r' || *Elmt(*M,posX,posY).code != 'h' || *Elmt(*M,posX,posY).code != 'b' || *Elmt(*M,posX,posY).code != 'k' || *Elmt(*M,posX,posY).code != 'q' || *Elmt(*M,posX,posY).code != 'p') {
                       Elmt(*M,posX,posY).Position.X = posX;
                       Elmt(*M,posX,posY).Position.Y = posY;
                       AddQueue(&Q, Elmt(*M,posX,posY));
                   } 
           return Q;
        }
        case 'b' : {  
               posX = B.Position.X;
               posY = B.Position.Y;
                   posX++;
                   posY++;
                   if (*Elmt(*M,posX,posY).code != ' ' || *Elmt(*M,posX,posY).code != 'R' || *Elmt(*M,posX,posY).code != 'H' || *Elmt(*M,posX,posY).code != 'B' || *Elmt(*M,posX,posY).code != 'K' || *Elmt(*M,posX,posY).code != 'Q' || *Elmt(*M,posX,posY).code != 'P') {
                       Elmt(*M,posX,posY).Position.X = posX;
                       Elmt(*M,posX,posY).Position.Y = posY;
                       AddQueue(&Q, Elmt(*M,posX,posY));
                   } 
                posX = B.Position.X;
                posY = B.Position.Y; 
                   posX--;
                   posY--;
                   if (*Elmt(*M,posX,posY).code != ' ' || *Elmt(*M,posX,posY).code != 'R' || *Elmt(*M,posX,posY).code != 'H' || *Elmt(*M,posX,posY).code != 'B' || *Elmt(*M,posX,posY).code != 'K' || *Elmt(*M,posX,posY).code != 'Q' || *Elmt(*M,posX,posY).code != 'P') {
                       Elmt(*M,posX,posY).Position.X = posX;
                       Elmt(*M,posX,posY).Position.Y = posY;
                       AddQueue(&Q, Elmt(*M,posX,posY));
                    } 
                posX = B.Position.X;
                posY = B.Position.Y;
                   posX++;
                   posY--;
                   if (*Elmt(*M,posX,posY).code != ' ' || *Elmt(*M,posX,posY).code != 'R' || *Elmt(*M,posX,posY).code != 'H' || *Elmt(*M,posX,posY).code != 'B' || *Elmt(*M,posX,posY).code != 'K' || *Elmt(*M,posX,posY).code != 'Q' || *Elmt(*M,posX,posY).code != 'P') {
                       Elmt(*M,posX,posY).Position.X = posX;
                       Elmt(*M,posX,posY).Position.Y = posY;
                       AddQueue(&Q, Elmt(*M,posX,posY));
                   } 
                posX = B.Position.X;
                posY = B.Position.Y;
                   posX--;
                   posY++;
                   if (*Elmt(*M,posX,posY).code != ' ' || *Elmt(*M,posX,posY).code != 'R' || *Elmt(*M,posX,posY).code != 'H' || *Elmt(*M,posX,posY).code != 'B' || *Elmt(*M,posX,posY).code != 'K' || *Elmt(*M,posX,posY).code != 'Q' || *Elmt(*M,posX,posY).code != 'P') {
                       Elmt(*M,posX,posY).Position.X = posX;
                       Elmt(*M,posX,posY).Position.Y = posY;
                       AddQueue(&Q, Elmt(*M,posX,posY));
                   } 
           return Q;
        }
        case 'Q' : {
            // horizontal vertikal //
            if (B.Position.X == 0) {
               posX = B.Position.X;
                   posX++;
                   if ((*Elmt(*M,posX,B.Position.Y).code != ' ') || *Elmt(*M,posX,B.Position.Y).code == 'r' || *Elmt(*M,posX,B.Position.Y).code =='h' || *Elmt(*M,posX,B.Position.Y).code == 'b' || *Elmt(*M,posX,B.Position.Y).code == 'k' || *Elmt(*M,posX,B.Position.Y).code == 'q' || *Elmt(*M,posX,B.Position.Y).code == 'p') {
                       Elmt(*M,posX,B.Position.Y).Position.X = posX;
                       AddQueue(&Q, Elmt(*M,posX,B.Position.Y));
                   } 
           } else {
               posX = B.Position.X;
                   posX++;
                   if ((*Elmt(*M,posX,B.Position.Y).code != ' ') || *Elmt(*M,posX,B.Position.Y).code == 'r' || *Elmt(*M,posX,B.Position.Y).code =='h' || *Elmt(*M,posX,B.Position.Y).code == 'b' || *Elmt(*M,posX,B.Position.Y).code == 'k' || *Elmt(*M,posX,B.Position.Y).code == 'q' || *Elmt(*M,posX,B.Position.Y).code == 'p') {
                       Elmt(*M,posX,B.Position.Y).Position.X = posX;
                       AddQueue(&Q, Elmt(*M,posX,B.Position.Y));
                   } 
               posX = B.Position.X;
                   posX--;
                   if ((*Elmt(*M,posX,B.Position.Y).code != ' ') || *Elmt(*M,posX,B.Position.Y).code == 'r' || *Elmt(*M,posX,B.Position.Y).code =='h' || *Elmt(*M,posX,B.Position.Y).code == 'b' || *Elmt(*M,posX,B.Position.Y).code == 'k' || *Elmt(*M,posX,B.Position.Y).code == 'q' || *Elmt(*M,posX,B.Position.Y).code == 'p') {
                       Elmt(*M,posX,B.Position.Y).Position.X = posX;
                       AddQueue(&Q, Elmt(*M,posX,B.Position.Y));
                   } 
           }
           if (B.Position.Y == 0) {
               posY = B.Position.Y;
                   posY++;
                   if ((*Elmt(*M,posX,B.Position.Y).code != ' ') || *Elmt(*M,posX,B.Position.Y).code == 'r' || *Elmt(*M,posX,B.Position.Y).code =='h' || *Elmt(*M,posX,B.Position.Y).code == 'b' || *Elmt(*M,posX,B.Position.Y).code == 'k' || *Elmt(*M,posX,B.Position.Y).code == 'q' || *Elmt(*M,posX,B.Position.Y).code == 'p') {
                       Elmt(*M,B.Position.X,posY).Position.Y = posY;
                       AddQueue(&Q, Elmt(*M,B.Position.X,posY));
                   } 
           } else {
               posY = B.Position.Y;
                   posY++;
                   if ((*Elmt(*M,posX,B.Position.Y).code != ' ') || *Elmt(*M,posX,B.Position.Y).code == 'r' || *Elmt(*M,posX,B.Position.Y).code =='h' || *Elmt(*M,posX,B.Position.Y).code == 'b' || *Elmt(*M,posX,B.Position.Y).code == 'k' || *Elmt(*M,posX,B.Position.Y).code == 'q' || *Elmt(*M,posX,B.Position.Y).code == 'p') {
                       Elmt(*M,B.Position.X,posY).Position.Y = posY;
                       AddQueue(&Q, Elmt(*M,B.Position.X,posY));
                   } 
               posY = B.Position.Y;
                   posY--;
                   if ((*Elmt(*M,posX,B.Position.Y).code != ' ') || *Elmt(*M,posX,B.Position.Y).code == 'r' || *Elmt(*M,posX,B.Position.Y).code =='h' || *Elmt(*M,posX,B.Position.Y).code == 'b' || *Elmt(*M,posX,B.Position.Y).code == 'k' || *Elmt(*M,posX,B.Position.Y).code == 'q' || *Elmt(*M,posX,B.Position.Y).code == 'p') {
                       Elmt(*M,B.Position.X,posY).Position.Y = posY;
                       AddQueue(&Q, Elmt(*M,B.Position.X,posY));
                   } 
           }    
           
            // diagonal //
               posX = B.Position.X;
               posY = B.Position.Y;
                   posX++;
                   posY++;
                   if (*Elmt(*M,posX,posY).code != ' ' || *Elmt(*M,posX,posY).code != 'r' || *Elmt(*M,posX,posY).code != 'h' || *Elmt(*M,posX,posY).code != 'b' || *Elmt(*M,posX,posY).code != 'k' || *Elmt(*M,posX,posY).code != 'q' || *Elmt(*M,posX,posY).code != 'p') {
                       Elmt(*M,posX,posY).Position.X = posX;
                       Elmt(*M,posX,posY).Position.Y = posY;
                       AddQueue(&Q, Elmt(*M,posX,posY));
                   } 
                posX = B.Position.X;
                posY = B.Position.Y; 
                   posX--;
                   posY--;
                   if (*Elmt(*M,posX,posY).code != ' ' || *Elmt(*M,posX,posY).code != 'r' || *Elmt(*M,posX,posY).code != 'h' || *Elmt(*M,posX,posY).code != 'b' || *Elmt(*M,posX,posY).code != 'k' || *Elmt(*M,posX,posY).code != 'q' || *Elmt(*M,posX,posY).code != 'p') {
                       Elmt(*M,posX,posY).Position.X = posX;
                       Elmt(*M,posX,posY).Position.Y = posY;
                       AddQueue(&Q, Elmt(*M,posX,posY));
                    } 
                posX = B.Position.X;
                posY = B.Position.Y;
                   posX++;
                   posY--;
                   if (*Elmt(*M,posX,posY).code != ' ' || *Elmt(*M,posX,posY).code != 'r' || *Elmt(*M,posX,posY).code != 'h' || *Elmt(*M,posX,posY).code != 'b' || *Elmt(*M,posX,posY).code != 'k' || *Elmt(*M,posX,posY).code != 'q' || *Elmt(*M,posX,posY).code != 'p') {
                       Elmt(*M,posX,posY).Position.X = posX;
                       Elmt(*M,posX,posY).Position.Y = posY;
                       AddQueue(&Q, Elmt(*M,posX,posY));
                   } 
                posX = B.Position.X;
                posY = B.Position.Y;
                   posX--;
                   posY++;
                   if (*Elmt(*M,posX,posY).code != ' ' || *Elmt(*M,posX,posY).code != 'r' || *Elmt(*M,posX,posY).code != 'h' || *Elmt(*M,posX,posY).code != 'b' || *Elmt(*M,posX,posY).code != 'k' || *Elmt(*M,posX,posY).code != 'q' || *Elmt(*M,posX,posY).code != 'p') {
                       Elmt(*M,posX,posY).Position.X = posX;
                       Elmt(*M,posX,posY).Position.Y = posY;
                       AddQueue(&Q, Elmt(*M,posX,posY));
                   } 
            return Q;
        }
        case 'q' : {
        // horizontal dan vertikal //
           if (B.Position.X == 0) {
               posX = B.Position.X;
                   posX++;
                   if ((*Elmt(*M,posX,B.Position.Y).code != ' ') || *Elmt(*M,posX,B.Position.Y).code == 'R' || *Elmt(*M,posX,B.Position.Y).code =='H' || *Elmt(*M,posX,B.Position.Y).code == 'B' || *Elmt(*M,posX,B.Position.Y).code == 'K' || *Elmt(*M,posX,B.Position.Y).code == 'Q' || *Elmt(*M,posX,B.Position.Y).code == 'P') {
                       Elmt(*M,posX,B.Position.Y).Position.X = posX;
                       AddQueue(&Q, Elmt(*M,posX,B.Position.Y));
                   } 
           } else {
               posX = B.Position.X;
                   posX++;
                   if ((*Elmt(*M,posX,B.Position.Y).code != ' ') || *Elmt(*M,posX,B.Position.Y).code == 'R' || *Elmt(*M,posX,B.Position.Y).code =='H' || *Elmt(*M,posX,B.Position.Y).code == 'B' || *Elmt(*M,posX,B.Position.Y).code == 'K' || *Elmt(*M,posX,B.Position.Y).code == 'Q' || *Elmt(*M,posX,B.Position.Y).code == 'P') {
                       Elmt(*M,posX,B.Position.Y).Position.X = posX;
                       AddQueue(&Q, Elmt(*M,posX,B.Position.Y));
                   } 
               posX = B.Position.X;
                   posX--;
                   if (((*Elmt(*M,posX,B.Position.Y).code != ' ') || *Elmt(*M,posX,B.Position.Y).code == 'R' || *Elmt(*M,posX,B.Position.Y).code =='H' || *Elmt(*M,posX,B.Position.Y).code == 'B' || *Elmt(*M,posX,B.Position.Y).code == 'K' || *Elmt(*M,posX,B.Position.Y).code == 'Q' || *Elmt(*M,posX,B.Position.Y).code == 'P')) {
                       Elmt(*M,posX,B.Position.Y).Position.X = posX;
                       AddQueue(&Q, Elmt(*M,posX,B.Position.Y));
                   } 
           }
           if (B.Position.Y == 0) {
               posY = B.Position.Y;
                   posY++;
                   if (((*Elmt(*M,posX,B.Position.Y).code != ' ') || *Elmt(*M,posX,B.Position.Y).code == 'R' || *Elmt(*M,posX,B.Position.Y).code =='H' || *Elmt(*M,posX,B.Position.Y).code == 'B' || *Elmt(*M,posX,B.Position.Y).code == 'K' || *Elmt(*M,posX,B.Position.Y).code == 'Q' || *Elmt(*M,posX,B.Position.Y).code == 'P')) {
                       Elmt(*M,B.Position.X,posY).Position.Y = posY;
                       AddQueue(&Q, Elmt(*M,B.Position.X,posY));
                   } 
           } else {
               posY = B.Position.Y;
                   posY++;
                   if (((*Elmt(*M,posX,B.Position.Y).code != ' ') || *Elmt(*M,posX,B.Position.Y).code == 'R' || *Elmt(*M,posX,B.Position.Y).code =='H' || *Elmt(*M,posX,B.Position.Y).code == 'B' || *Elmt(*M,posX,B.Position.Y).code == 'K' || *Elmt(*M,posX,B.Position.Y).code == 'Q' || *Elmt(*M,posX,B.Position.Y).code == 'P')) {
                       Elmt(*M,B.Position.X,posY).Position.Y = posY;
                       AddQueue(&Q, Elmt(*M,B.Position.X,posY));
                   } 
               posY = B.Position.Y;
                   posY--;
                   if (((*Elmt(*M,posX,B.Position.Y).code != ' ') || *Elmt(*M,posX,B.Position.Y).code == 'R' || *Elmt(*M,posX,B.Position.Y).code =='H' || *Elmt(*M,posX,B.Position.Y).code == 'B' || *Elmt(*M,posX,B.Position.Y).code == 'K' || *Elmt(*M,posX,B.Position.Y).code == 'Q' || *Elmt(*M,posX,B.Position.Y).code == 'P')) {
                       Elmt(*M,B.Position.X,posY).Position.Y = posY;
                       AddQueue(&Q, Elmt(*M,B.Position.X,posY));
                   } 
           }
           

            // Diagonal  //
                posX = B.Position.X;
                posY = B.Position.Y;
                   posX++;
                   posY++;
                   if (*Elmt(*M,posX,posY).code != ' ' || *Elmt(*M,posX,posY).code != 'R' || *Elmt(*M,posX,posY).code != 'H' || *Elmt(*M,posX,posY).code != 'B' || *Elmt(*M,posX,posY).code != 'K' || *Elmt(*M,posX,posY).code != 'Q' || *Elmt(*M,posX,posY).code != 'P') {
                       Elmt(*M,posX,posY).Position.X = posX;
                       Elmt(*M,posX,posY).Position.Y = posY;
                       AddQueue(&Q, Elmt(*M,posX,posY));
                   } 
                posX = B.Position.X;
                posY = B.Position.Y; 
                   posX--;
                   posY--;
                   if (*Elmt(*M,posX,posY).code != ' ' || *Elmt(*M,posX,posY).code != 'R' || *Elmt(*M,posX,posY).code != 'H' || *Elmt(*M,posX,posY).code != 'B' || *Elmt(*M,posX,posY).code != 'K' || *Elmt(*M,posX,posY).code != 'Q' || *Elmt(*M,posX,posY).code != 'P') {
                       Elmt(*M,posX,posY).Position.X = posX;
                       Elmt(*M,posX,posY).Position.Y = posY;
                       AddQueue(&Q, Elmt(*M,posX,posY));
                    } 
                posX = B.Position.X;
                posY = B.Position.Y;
                   posX++;
                   posY--;
                   if (*Elmt(*M,posX,posY).code != ' ' || *Elmt(*M,posX,posY).code != 'R' || *Elmt(*M,posX,posY).code != 'H' || *Elmt(*M,posX,posY).code != 'B' || *Elmt(*M,posX,posY).code != 'K' || *Elmt(*M,posX,posY).code != 'Q' || *Elmt(*M,posX,posY).code != 'P') {
                       Elmt(*M,posX,posY).Position.X = posX;
                       Elmt(*M,posX,posY).Position.Y = posY;
                       AddQueue(&Q, Elmt(*M,posX,posY));
                   } 
                posX = B.Position.X;
                posY = B.Position.Y;
                   posX--;
                   posY++;
                   if (*Elmt(*M,posX,posY).code != ' ' || *Elmt(*M,posX,posY).code != 'R' || *Elmt(*M,posX,posY).code != 'H' || *Elmt(*M,posX,posY).code != 'B' || *Elmt(*M,posX,posY).code != 'K' || *Elmt(*M,posX,posY).code != 'Q' || *Elmt(*M,posX,posY).code != 'P') {
                       Elmt(*M,posX,posY).Position.X = posX;
                       Elmt(*M,posX,posY).Position.Y = posY;
                       AddQueue(&Q, Elmt(*M,posX,posY));
                   } 
            return Q;
        }
        case 'K' : {
             posX=B.Position.X;
            posY=B.Position.Y;
            posX++;
            if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'r' ) || (Elmt(*M, posX, posY).code == 'h' || (Elmt(*M, posX, posY).code == 'b' ) || (Elmt(*M, posX, posY).code == 'k' ) || (Elmt(*M, posX, posY).code == 'q' ) || (Elmt(*M, posX, posY).code == 'p' )) )))) {
                Elmt(*M, posX, posY).Position.X = posX;
                Elmt(*M, posX, posY).Position.Y = posY;
                AddQueue(&Q, Elmt(*M, posX, posY));
            }
            posX=B.Position.X;
            posY=B.Position.Y;
            posX--;
            if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'r' ) || (Elmt(*M, posX, posY).code == 'h' || (Elmt(*M, posX, posY).code == 'b' ) || (Elmt(*M, posX, posY).code == 'k' ) || (Elmt(*M, posX, posY).code == 'q' ) || (Elmt(*M, posX, posY).code == 'p' )) )))) {
                Elmt(*M, posX, posY).Position.X = posX;
                Elmt(*M, posX, posY).Position.Y = posY;
                AddQueue(&Q, Elmt(*M, posX, posY));
            }
            posX=B.Position.X;
            posY=B.Position.Y;
            posY++;
            if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'r' ) || (Elmt(*M, posX, posY).code == 'h' || (Elmt(*M, posX, posY).code == 'b' ) || (Elmt(*M, posX, posY).code == 'k' ) || (Elmt(*M, posX, posY).code == 'q' ) || (Elmt(*M, posX, posY).code == 'p' )) )))) {
                Elmt(*M, posX, posY).Position.X = posX;
                Elmt(*M, posX, posY).Position.Y = posY;
                AddQueue(&Q, Elmt(*M, posX, posY));
            }
            posX=B.Position.X;
            posY=B.Position.Y;
            posY--;
            if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'r' ) || (Elmt(*M, posX, posY).code == 'h' || (Elmt(*M, posX, posY).code == 'b' ) || (Elmt(*M, posX, posY).code == 'k' ) || (Elmt(*M, posX, posY).code == 'q' ) || (Elmt(*M, posX, posY).code == 'p' )) )))) {
                Elmt(*M, posX, posY).Position.X = posX;
                Elmt(*M, posX, posY).Position.Y = posY;
                AddQueue(&Q, Elmt(*M, posX, posY));
            }
            posX=B.Position.X;
            posY=B.Position.Y;
            posX++;
            posY++;
            if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'r' ) || (Elmt(*M, posX, posY).code == 'h' || (Elmt(*M, posX, posY).code == 'b' ) || (Elmt(*M, posX, posY).code == 'k' ) || (Elmt(*M, posX, posY).code == 'q' ) || (Elmt(*M, posX, posY).code == 'p' )) )))) {
                Elmt(*M, posX, posY).Position.X = posX;
                Elmt(*M, posX, posY).Position.Y = posY;
                AddQueue(&Q, Elmt(*M, posX, posY));
            }
            posX=B.Position.X;
            posY=B.Position.Y;
            posX++;
            posY--;
            if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'r' ) || (Elmt(*M, posX, posY).code == 'h' || (Elmt(*M, posX, posY).code == 'b' ) || (Elmt(*M, posX, posY).code == 'k' ) || (Elmt(*M, posX, posY).code == 'q' ) || (Elmt(*M, posX, posY).code == 'p' )) )))) {
                Elmt(*M, posX, posY).Position.X = posX;
                Elmt(*M, posX, posY).Position.Y = posY;
                AddQueue(&Q, Elmt(*M, posX, posY));
            }
            posX=B.Position.X;
            posY=B.Position.Y;
            posX--;
            posY++;
            if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'r' ) || (Elmt(*M, posX, posY).code == 'h' || (Elmt(*M, posX, posY).code == 'b' ) || (Elmt(*M, posX, posY).code == 'k' ) || (Elmt(*M, posX, posY).code == 'q' ) || (Elmt(*M, posX, posY).code == 'p' )) )))) {
                Elmt(*M, posX, posY).Position.X = posX;
                Elmt(*M, posX, posY).Position.Y = posY;
                AddQueue(&Q, Elmt(*M, posX, posY));
            }
            posX=B.Position.X;
            posY=B.Position.Y;
            posX--;
            posY--;
            if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'r' ) || (Elmt(*M, posX, posY).code == 'h' || (Elmt(*M, posX, posY).code == 'b' ) || (Elmt(*M, posX, posY).code == 'k' ) || (Elmt(*M, posX, posY).code == 'q' ) || (Elmt(*M, posX, posY).code == 'p' )) )))) {
                Elmt(*M, posX, posY).Position.X = posX;
                Elmt(*M, posX, posY).Position.Y = posY;
                AddQueue(&Q, Elmt(*M, posX, posY));
            }

            return Q;
        }
        case 'k' : {
            posX=B.Position.X;
            posY=B.Position.Y;
            posX++;
            if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'R' ) || (Elmt(*M, posX, posY).code == 'H' || (Elmt(*M, posX, posY).code == 'B' ) || (Elmt(*M, posX, posY).code == 'K' ) || (Elmt(*M, posX, posY).code == 'Q' ) || (Elmt(*M, posX, posY).code == 'P' )) )))) {
                Elmt(*M, posX, posY).Position.X = posX;
                Elmt(*M, posX, posY).Position.Y = posY;
                AddQueue(&Q, Elmt(*M, posX, posY));
            }
            posX=B.Position.X;
            posY=B.Position.Y;
            posX--;
            if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'R' ) || (Elmt(*M, posX, posY).code == 'H' || (Elmt(*M, posX, posY).code == 'B' ) || (Elmt(*M, posX, posY).code == 'K' ) || (Elmt(*M, posX, posY).code == 'Q' ) || (Elmt(*M, posX, posY).code == 'P' )) )))) {
                Elmt(*M, posX, posY).Position.X = posX;
                Elmt(*M, posX, posY).Position.Y = posY;
                AddQueue(&Q, Elmt(*M, posX, posY));
            }
            posX=B.Position.X;
            posY=B.Position.Y;
            posY++;
            if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'R' ) || (Elmt(*M, posX, posY).code == 'H' || (Elmt(*M, posX, posY).code == 'B' ) || (Elmt(*M, posX, posY).code == 'K' ) || (Elmt(*M, posX, posY).code == 'Q' ) || (Elmt(*M, posX, posY).code == 'P' )) )))) {
                Elmt(*M, posX, posY).Position.X = posX;
                Elmt(*M, posX, posY).Position.Y = posY;
                AddQueue(&Q, Elmt(*M, posX, posY));
            }
            posX=B.Position.X;
            posY=B.Position.Y;
            posY--;
            if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'R' ) || (Elmt(*M, posX, posY).code == 'H' || (Elmt(*M, posX, posY).code == 'B' ) || (Elmt(*M, posX, posY).code == 'K' ) || (Elmt(*M, posX, posY).code == 'Q' ) || (Elmt(*M, posX, posY).code == 'P' )) )))) {
                Elmt(*M, posX, posY).Position.X = posX;
                Elmt(*M, posX, posY).Position.Y = posY;
                AddQueue(&Q, Elmt(*M, posX, posY));
            }
            posX=B.Position.X;
            posY=B.Position.Y;
            posX++;
            posY++;
            if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'R' ) || (Elmt(*M, posX, posY).code == 'H' || (Elmt(*M, posX, posY).code == 'B' ) || (Elmt(*M, posX, posY).code == 'K' ) || (Elmt(*M, posX, posY).code == 'Q' ) || (Elmt(*M, posX, posY).code == 'P' )) )))) {
                Elmt(*M, posX, posY).Position.X = posX;
                Elmt(*M, posX, posY).Position.Y = posY;
                AddQueue(&Q, Elmt(*M, posX, posY));
            }
            posX=B.Position.X;
            posY=B.Position.Y;
            posX++;
            posY--;
            if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'R' ) || (Elmt(*M, posX, posY).code == 'H' || (Elmt(*M, posX, posY).code == 'B' ) || (Elmt(*M, posX, posY).code == 'K' ) || (Elmt(*M, posX, posY).code == 'Q' ) || (Elmt(*M, posX, posY).code == 'P' )) )))) {
                Elmt(*M, posX, posY).Position.X = posX;
                Elmt(*M, posX, posY).Position.Y = posY;
                AddQueue(&Q, Elmt(*M, posX, posY));
            }
            posX=B.Position.X;
            posY=B.Position.Y;
            posX--;
            posY++;
            if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'R' ) || (Elmt(*M, posX, posY).code == 'H' || (Elmt(*M, posX, posY).code == 'B' ) || (Elmt(*M, posX, posY).code == 'K' ) || (Elmt(*M, posX, posY).code == 'Q' ) || (Elmt(*M, posX, posY).code == 'P' )) )))) {
                Elmt(*M, posX, posY).Position.X = posX;
                Elmt(*M, posX, posY).Position.Y = posY;
                AddQueue(&Q, Elmt(*M, posX, posY));
            }
            posX=B.Position.X;
            posY=B.Position.Y;
            posX--;
            posY--;
            if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'R' ) || (Elmt(*M, posX, posY).code == 'H' || (Elmt(*M, posX, posY).code == 'B' ) || (Elmt(*M, posX, posY).code == 'K' ) || (Elmt(*M, posX, posY).code == 'Q' ) || (Elmt(*M, posX, posY).code == 'P' )) )))) {
                Elmt(*M, posX, posY).Position.X = posX;
                Elmt(*M, posX, posY).Position.Y = posY;
                AddQueue(&Q, Elmt(*M, posX, posY));
            }

            return Q; 
        }
        case 'P' : {
            posX=B.Position.X;
            posY=B.Position.Y;
            if (posY=7){
                posX--;
                posY--;
                if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'r' ) || (Elmt(*M, posX, posY).code == 'h' || (Elmt(*M, posX, posY).code == 'b' ) || (Elmt(*M, posX, posY).code == 'k' ) || (Elmt(*M, posX, posY).code == 'q' ) || (Elmt(*M, posX, posY).code == 'p' )) )))) {
                    Elmt(*M, posX, posY).Position.X = posX;
                    Elmt(*M, posX, posY).Position.Y = posY;
                    AddQueue(&Q, Elmt(*M, posX, posY));
                }
                posX--;
                posY--;
                if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'r' ) || (Elmt(*M, posX, posY).code == 'h' || (Elmt(*M, posX, posY).code == 'b' ) || (Elmt(*M, posX, posY).code == 'k' ) || (Elmt(*M, posX, posY).code == 'q' ) || (Elmt(*M, posX, posY).code == 'p' )) )))) {
                    Elmt(*M, posX, posY).Position.X = posX;
                    Elmt(*M, posX, posY).Position.Y = posY;
                    AddQueue(&Q, Elmt(*M, posX, posY));
                }
            } else {
                posX=B.Position.X;
                posY=B.Position.Y;
                posX--;
                posY--;
                if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'r' ) || (Elmt(*M, posX, posY).code == 'h' || (Elmt(*M, posX, posY).code == 'b' ) || (Elmt(*M, posX, posY).code == 'k' ) || (Elmt(*M, posX, posY).code == 'q' ) || (Elmt(*M, posX, posY).code == 'p' )) )))) {
                    Elmt(*M, posX, posY).Position.X = posX;
                    Elmt(*M, posX, posY).Position.Y = posY;
                    AddQueue(&Q, Elmt(*M, posX, posY));
                }
            }
            return Q;
        }
        case 'p' : {
            posX=B.Position.X;
            posY=B.Position.Y;
            if (posY=2){
                posX++;
                posY++;
                if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'R' ) || (Elmt(*M, posX, posY).code == 'H' || (Elmt(*M, posX, posY).code == 'B' ) || (Elmt(*M, posX, posY).code == 'K' ) || (Elmt(*M, posX, posY).code == 'Q' ) || (Elmt(*M, posX, posY).code == 'P' )) )))) {
                    Elmt(*M, posX, posY).Position.X = posX;
                    Elmt(*M, posX, posY).Position.Y = posY;
                    AddQueue(&Q, Elmt(*M, posX, posY));
                }
                posX++;
                posY++;
                if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'R' ) || (Elmt(*M, posX, posY).code == 'H' || (Elmt(*M, posX, posY).code == 'B' ) || (Elmt(*M, posX, posY).code == 'K' ) || (Elmt(*M, posX, posY).code == 'Q' ) || (Elmt(*M, posX, posY).code == 'P' )) )))) {
                    Elmt(*M, posX, posY).Position.X = posX;
                    Elmt(*M, posX, posY).Position.Y = posY;
                    AddQueue(&Q, Elmt(*M, posX, posY));
                }
            } else {
                posX=B.Position.X;
                posY=B.Position.Y;
                posX++;
                posY++;
                if (!(((posX <= 0) || (posX >= 7) || (posY <= 0) || (posY >= 0)) && ((Elmt(*M, posX, posY).code == ' ' || (Elmt(*M, posX, posY).code == 'R' ) || (Elmt(*M, posX, posY).code == 'H' || (Elmt(*M, posX, posY).code == 'B' ) || (Elmt(*M, posX, posY).code == 'K' ) || (Elmt(*M, posX, posY).code == 'Q' ) || (Elmt(*M, posX, posY).code == 'P' )) )))) {
                    Elmt(*M, posX, posY).Position.X = posX;
                    Elmt(*M, posX, posY).Position.Y = posY;
                    AddQueue(&Q, Elmt(*M, posX, posY));
                }
            }
            return Q;
            }
        }
    }
}

void printBisaGerak(Queue Q) {
    int i, v1, h1;
    Bidak B;

    for(i=1;i<=NBElmtQueue(Q);i++){
        DelQueue(&Q, &B);
        printf("%d", &i);
        printf(B.code[v1][&h1]);
        AddQueue(&Q, B);
    }
    return 0;
}

void printGerak(Queue Q) {
    int i, v1, h1;
    Bidak B;

    for(i=1;i<=NBElmtQueue(Q);i++){
        DelQueue(&Q, &B);
        printf("%d", &i);
        printf(B.code[v1][&h1]);
        AddQueue(&Q, B);
    }

    return 0;
}