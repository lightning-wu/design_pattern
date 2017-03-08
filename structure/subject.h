/* Copyright(C)
 * For free
 * All right reserved
 * 
 */
/**
 * @file subject.h
 * @brief 
 * @author wuzhibin(@baidu.com)
 * @version 
 * @date 2017-02-28
 */

#ifndef DRAGON_SUBJECT_H
#define DRAGON_SUBJECT_H

#include <iostream>

namespace dragon{
    
    class Subject{
        
        public:
                Subject(){}
                ~Subject(){}

                virtual void method(){
                    std::cout << "subject method " << std::endl;
                }

    };

}

#endif
