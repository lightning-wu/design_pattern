/* Copyright(C)
 * For free
 * All right reserved
 * 
 */
/**
 * @file command.h
 * @brief 
 * @author wuzhibin(@baidu.com)
 * @version 
 * @date 2017-03-08
 */

#ifndef DRAGON_COMMAND_H
#define DRAGON_COMMAND_H

#include <iostream>

namespace dragon{
    
    class Receiver{
        public:
            void fun1(){
                std::cout << "receiver: fun1" << std::endl;
            }

            void fun2(){
                std::cout << "receiver: fun2" << std::endl;
            }
    };

    class Command{
        public:

            Command(Receiver* receiver){
                _receiver = receiver;
            }

            virtual void execute() = 0;
            Receiver* _receiver;
    };

    class Command1 : public Command{
        public:
            Command1(Receiver* receiver) : Command(receiver){
            }

            virtual void execute(){
                _receiver->fun1();
            }
    };

    class Command2 : public Command{
        public:
            Command2(Receiver* receiver) : Command(receiver){
            }

            virtual void execute(){
                _receiver->fun2();
            }
    };

    class Caller{
        public:
            Caller(Command* command){
                _command = command;
            }

            void take(){
                _command->execute();
            }
            Command* _command;
    };

}

#endif

