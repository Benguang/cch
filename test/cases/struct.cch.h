#ifndef __test_cases_struct_cch__
#define __test_cases_struct_cch__

struct named {
    struct /* unnamed type member */ {
        int x;
        union /* unnamed union member */ {
            long y;
            void* p;
        };
    } s;
    double d;
};

#endif
