//
// Created by clsma on 2018-04-30.
//

#include "common.h"
#include "phoneData.h"
void ShowMenu(void){
    //system("clear");
    puts("------Menu------");
    puts("1. insert phone number");
    puts("2. printf data");
    puts("3. data search");
    puts("4. delete data");
    puts("5. exit");
    puts("----------------");
    printf("Selct > ");
}
void ShowPhoneInfo(phoneData phone){
    puts("------------------");
    printf("> Name : %s \n",phone.name);
    printf("> Phone : %s \n",phone.phoneNum);
    puts("------------------");
}
void ShowPhoneInfoByptr(phoneData* pPhone){
    puts("------------------");
    printf("> Name : %s \n",pPhone->name);
    printf("> Phone : %s \n",pPhone->phoneNum);
    puts("------------------");
}