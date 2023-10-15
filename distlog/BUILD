load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library", "cc_test", "cc_proto_library")
load("@rules_proto//proto:defs.bzl", "proto_library")

proto_library(
    name = "greeting_proto",
    srcs = ["greeting.proto"],
    deps = [],
)

cc_proto_library(
    name = "greeting_cc_proto",
    deps = [":greeting_proto"],
)

cc_test(
    name = "main_test",
    srcs = ["test.cc"],
    deps = [
        ":greeting_cc_proto",
        "@com_google_googletest//:gtest_main",
    ],
)

cc_binary(
    name = "main",
    srcs = ["main.cc"],
    deps = [":greeting_cc_proto"],
)
