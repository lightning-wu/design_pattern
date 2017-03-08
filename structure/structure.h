/* Copyright(C)
 * For free
 * All right reserved
 * 
 */
/**
 * @file structure.h
 * @brief
 * @author wuzhibin(@baidu.com)
 * @version 
 * @date 2017-02-28
 */

#ifndef DRAGON_STRUCTURE_H
#define DRAGON_STRUCTURE_H

#include "subject.h"
#include "realsubject.h"

namespace dragon{

    class Proxy : public Subject{
    
        public:
            Proxy(){
                _realsub = new RealSubject();
            }
            ~Proxy(){}

            virtual void method();

            RealSubject *_realsub;
    };
    
    class Adapter : public Subject{
        public:
            Adapter(RealSubject* realsub){
                _realsub = realsub;
            }
            ~Adapter(){}
            virtual void method();
            RealSubject *_realsub;
    };

    class Decorator : public Subject{
        public:
            Decorator(Subject *sub){
                _sub = sub;
            }
            ~Decorator(){}
            virtual void method();
            virtual void self_method();
            Subject *_sub;
    };

    class Decorator1 : public Decorator{
        public:
            Decorator1(Subject *sub) : Decorator(sub){
            }
            ~Decorator1(){}
            virtual void self_method(); 

    };
}

#endif

