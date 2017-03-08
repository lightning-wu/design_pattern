/* Copyright(C)
 * For free
 * All right reserved
 * 
 */
/**
 * @file machine.cpp
 * @brief 
 * @author wuzhibin(@baidu.com)
 * @version 
 * @date 2017-02-27
 */
#include "machine.h"
#include "factory.cpp"
#include "util.h"
#include <iostream>

namespace dragon{
      
    static int _ = global_initiate_machine(new Machine());
    
    int Machine::initiate_machine(){
        Factory<Machine> * factory = Factory<Machine>::instance();
        std::string machine_name = name();
        factory->register_object(machine_name, this); 
        std::cout << "register " << machine_name << std::endl;
        return 0;
    }
         
}
