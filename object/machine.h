/* Copyright(C)
 * For free
 * All right reserved
 * 
 */
/**
 * @file machine.h
 * @brief 
 * @author wuzhibin(@baidu.com)
 * @version 
 * @date 2017-02-27
 */

#ifndef DRAGON_MACHINE_H
#define DRAGON_MACHINE_H
#include "goods.h"

namespace dragon{
    class Machine : public Goods{
        public:
            Machine(){
                _name = "machine";
            }
            ~Machine(){}
            virtual Machine* clone(){
                return new Machine();
            }
            virtual int initiate_machine();
    };

}

#endif
