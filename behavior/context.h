/* Copyright(C)
 * For free
 * All right reserved
 * 
 */
/**
 * @file context.h
 * @brief 
 * @author wuzhibin(@baidu.com)
 * @version 
 * @date 2017-03-08
 */

#ifndef DRAGON_CONTEXT_H
#define DRAGON_CONTEXT_H

#include <iostream>

namespace dragon{
    class State;
    class Context{
        
        public:
            Context();
            void handle();
            void changeState(State* state);
            State *_state;
    };
}

#endif
