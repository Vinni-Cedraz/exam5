#include "Dummy.hpp"


Dummy::~Dummy() {}
Dummy::Dummy() : ATarget("Target Practice Dummy") {}
ASpell* Dummy::clone() const { return new Dummy(); }
