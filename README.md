bazel-cpp-template
==================

## usage

    bazel test //bazel-cpp-template/... --test_output=all
    bazel run //bazel-cpp-template:main

to get clangd working:

    bazel run @hedron_compile_commands//:refresh_all
