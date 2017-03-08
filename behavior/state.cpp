/* Copyright(C)
 * For free
 * All right reserved
 * 
 */
/**
 * @file state.cpp
 * @brief 
 * @author wuzhibin(@baidu.com)
 * @version 
 * @date 2017-03-08
 */


#include <iostream>
#include "state.h"
#include "context.h"

namespace dragon{

            void State1::handle(Context* ctx){
                std::cout << "state1" << std::endl;
                ctx->changeState(new State2());
            }

            void State2::handle(Context* ctx){
                std::cout << "state2" << std::endl;    
            }

        
            Context::Context(){
                _state = new State1();
            }

            void Context::handle(){
                _state->handle(this);
            }
            void Context::changeState(State* state){
                _state = state;
            }
}

