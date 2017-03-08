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
 * @date 2017-03-08
 */

#include "command.h"
#include "state.h"
#include "context.h"

using namespace dragon;

int main(int argc, char* argv[]){

    Receiver *receiver = new Receiver();
    Command *cmd1 = new Command1(receiver);
    Command *cmd2 = new Command2(receiver);
    Caller *caller = new Caller(cmd1);
    caller->take();

    Context* ctx = new Context();
    ctx->handle();
    ctx->handle();

    return 0;
}
