/* Copyright(C)
 * For free
 * All right reserved
 * 
 */
/**
 * @file state.h
 * @brief 
 * @author wuzhibin(@baidu.com)
 * @version 
 * @date 2017-03-08
 */

#ifndef DRAGON_STATE_H
#define DRAGON_STATE_H

#include <iostream>

namespace dragon{
    class Context;
    class State{
        public:
            virtual void handle(Context* ctx){}
    };

    class State1 : public State{
        public:
            virtual void handle(Context* ctx);
    };

    class State2 : public State{
        public:
            virtual void handle(Context* ctx);
    };

}

#endif
