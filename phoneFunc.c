//
// Created by clsma on 2018-04-30.
//

#include "common.h"
#include "phoneData.h"
#include "screenOut.h"

#define LIST_NUM 100
int numOfData = 0;
phoneData* phoneList[LIST_NUM];

void InputPhoneData(void){
    phoneData* pData;
    if(numOfData>=LIST_NUM){
        puts("Can't write - Low Memory");
        return;
    }
    pData=(phoneData *)malloc(sizeof(phoneData));
    fputs("Name : ",stdout);
    gets(pData->name);
    fputs("Phone Number : ",stdout);
    gets(pData->phoneNum);
    phoneList[numOfData]=pData;
    numOfData++;
    for (int i = 0; i < numOfData; i++) {
        if(!strcmp(phoneList[i]->name,pData->name)&&!strcmp(phoneList[i]->phoneNum,pData->phoneNum)){
            puts("Already Exist Data");
            free(pData);
            getchar();
            return;;
        }
    }
    phoneList[numOfData]=pData;
    numOfData++;
    puts("Success Insert");
    getchar();
}
void ShowAllData(void){
    for (int i = 0; i < numOfData; i++) {
        ShowPhoneInfoByptr(phoneList[i]);
    }
    puts("Success Print.");
    getchar();
}
void SearchPhoneData(void){
    char searchName[NAME_LEN];
    fputs("Serching Name : ",stdout);
    gets(searchName);
    for (int i = 0; i < numOfData; i++) {
        if(!strcmp(phoneList[i]->name,searchName)){
            ShowPhoneInfoByptr(phoneList[i]);
            puts("Success Searching");
            getchar();
            return;
        }
    }
    puts("Can't find target name");
    getchar();
}
void DeletePhoneData(void){
    char delName[NAME_LEN];
    fputs("Deleting Name : ",stdout);
    gets(delName);
    for (int i = 0; i < numOfData; i++) {
        if(!strcmp(phoneList[i]->name,delName)){
            for (int j = i; j < numOfData-1; j++) {
                phoneList[j]=phoneList[j+1];
            }
            numOfData--;
            puts("Success Deleting");
            getchar();
            return;
        }
    }
    puts("Can't find target name");
    getchar();
}