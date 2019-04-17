template <char... C> constexpr int operator"" _my() { return 0; }

void Do(int) {}

void Crash() { Do(12_my); }