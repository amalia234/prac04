//ALL HEADER FILES HAVE TO HAVE A HEADER GUARD!!!
//1 header file = 1 header guard

#ifndef ORDER_H
#define ORDER_H

/*Write all declarations here*/
void asc2(int* piNum1, int* piNum2);
void asc3(int* piNum1, int* piNum2, int* piNum3);
void dsc2(int* piNum1, int* piNum2);
void readInts(int* piNum1, int* piNum2, char* pcOrder);
typedef void (*FuncptrT)(int*, int*);
FuncptrT getOrderingFunc(char cOrder);


#endif
