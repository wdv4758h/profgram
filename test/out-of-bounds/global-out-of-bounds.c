// from https://code.google.com/p/address-sanitizer/wiki/ExampleGlobalOutOfBounds

int global_array[100] = {-1};

int main(int argc, char **argv) {
    return global_array[argc + 100];    // BOOM
}
