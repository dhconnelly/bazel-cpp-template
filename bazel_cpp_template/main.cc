#include <iostream>
#include "absl/strings/str_cat.h"
#include "bazel_cpp_template/greeting.pb.h"

int main(int argc, char *argv[]) {
    auto greeting = bazel_cpp_template::Greeting::default_instance();
    greeting.set_greeting(absl::StrCat("hello", "world"));
    std::cout << greeting.DebugString();
    return 0;
}
