#ifndef __tests_static_cch__
#define __tests_static_cch__

static int x;

static int foo();

class bar {
public:
    static const int cid;
    static const map<string, string> m;
    static const int fnc;
};
#endif
