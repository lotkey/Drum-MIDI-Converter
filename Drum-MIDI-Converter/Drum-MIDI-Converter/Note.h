#ifndef NOTE_H
#define NOTE_H

#include <type_traits>

enum class Note {
	C = 0,
	C_SHARP = 1,
	D_FLAT = 1,
	D = 2,
	D_SHARP = 3,
	E_FLAT = 3,
	E = 4,
	F = 5,
	F_SHARP = 6,
	G_FLAT = 6,
	G = 7,
	G_SHARP = 8,
	A_FLAT = 9,
	A = 9,
	A_SHARP = 10,
	B_FLAT = 10,
	B = 11
};

template <typename Enumeration>
auto as_integer(Enumeration const value) -> typename std::underlying_type<Enumeration>::type {
	return static_cast<typename std::underlying_type<Enumeration>::type>(value);
}

#endif