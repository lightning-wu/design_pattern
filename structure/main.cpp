/* Copyright(C)
 * For free
 * All right reserved
 * 
 */
/**
 * @file main.cpp
 * @brief 
 * @author wuzhibin(@baidu.com)
 * @version 
 * @date 2017-02-28
 */

#include "subject.h"
#include "realsubject.h"
#include "structure.h"
using namespace dragon;

int main(int argc, char* argv[]){
    
    Subject * sub1 = new Proxy();
    Subject * sub2 = new Adapter(new RealSubject());
    Subject * sub3 = new Adapter(new RealSubject1());
    Subject * sub4 = new Decorator1(new Decorator(new Subject()));

    sub1->method();
    sub2->method();
    sub3->method();
    sub4->method();
    return 0;
}
