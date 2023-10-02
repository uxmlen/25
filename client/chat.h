#pragma once

#include <arpa/inet.h>
#include <filesystem>
#include <string>
#include <sys/socket.h>
#include <vector>

#include "db.h"
#include "user.h"
const int msg_length = 1024;

class Chat final {
public:
    void showMenu();
    void selectAction(int action);
    void showAuthMenu();

    void signUp();
    void signIn();

private:
    std::vector<User> users_;
    int current_user_id_ = 0;
    bool is_authorize_ = false;
    DB conn_to_db_;
};
