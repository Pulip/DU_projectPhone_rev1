//
// Created by clsma on 2018-04-30.
//

#include "common.h"
#include "screenOut.h"
#include "phoneFunc.h"
enum{INPUT=1,SHOWALL,SEARCH,DELETE,QUIT};
int main (void){
    int inputMenu = 0;
    while(1){
        ShowMenu();
        fputs("Select : ",stdout);
        scanf("%d",&inputMenu);
        fflush(stdin);
        switch(inputMenu){
            case INPUT:
                InputPhoneData();
                break;
            case SHOWALL:
                ShowAllData();
                break;
            case SEARCH:
                SearchPhoneData();
                break;
            case DELETE:
                DeletePhoneData();
                break;
        }
        if (inputMenu==QUIT){
            puts("thanks for using");
            break;
        }
    }
    return 0;
}