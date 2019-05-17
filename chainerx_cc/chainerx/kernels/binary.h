#pragma once

#include <cstdint>

#include "chainerx/array.h"
#include "chainerx/kernel.h"
#include "chainerx/scalar.h"

namespace chainerx {

class BitwiseAndKernel : public Kernel {
public:
    static const char* name() { return "BitwiseAnd"; }

    virtual void Call(const Array& x1, const Array& x2, const Array& out) = 0;
};

class BitwiseAndASKernel : public Kernel {
public:
    static const char* name() { return "BitwiseAndAS"; }

    virtual void Call(const Array& x1, Scalar x2, const Array& out) = 0;
};

class BitwiseOrKernel : public Kernel {
public:
    static const char* name() { return "BitwiseOr"; }

    virtual void Call(const Array& x1, const Array& x2, const Array& out) = 0;
};

class BitwiseOrASKernel : public Kernel {
public:
    static const char* name() { return "BitwiseOrAS"; }

    virtual void Call(const Array& x1, Scalar x2, const Array& out) = 0;
};

class BitwiseXorKernel : public Kernel {
public:
    static const char* name() { return "BitwiseXor"; }

    virtual void Call(const Array& x1, const Array& x2, const Array& out) = 0;
};

class BitwiseXorASKernel : public Kernel {
public:
    static const char* name() { return "BitwiseXorAS"; }

    virtual void Call(const Array& x1, Scalar x2, const Array& out) = 0;
};

}  // namespace chainerx
