/* Copyright(C)
 * For free
 * All right reserved
 * 
 */
/**
 * @file realsubject.h
 * @brief 
 * @author wuzhibin(@baidu.com)
 * @version 
 * @date 2017-02-28
 */
#ifndef DRAGON_REAL_SUBJECT_H
#define DRAGON_REAL_SUBJECT_H

#include <iostream>

namespace dragon{
    
    class RealSubject{
        public:
            RealSubject(){}
            ~RealSubject(){}

            virtual void method(){
                std::cout << "realsubject method" << std::endl;
            }
    };

    class RealSubject1 : public RealSubject{
        public:
            RealSubject1(){}
            ~RealSubject1(){}

            virtual void method(){
                std::cout << "realsubject1 method" << std::endl;
            }
    };

    class RealSubject2 : public RealSubject{
        public:
            RealSubject2(){}
            ~RealSubject2(){}

            virtual void method(){
                std::cout << "realsubject2 method" << std::endl;
            }
    };

}

#endif

