#include <iostream>
#include "absl/strings/str_cat.h"
#include "distlog/greeting.pb.h"

int main(int argc, char *argv[]) {
    auto greeting = distlog::Greeting::default_instance();
    greeting.set_greeting(absl::StrCat("hello", "world"));
    std::cout << greeting.DebugString();
    return 0;
}
