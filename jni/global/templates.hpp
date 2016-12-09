//
// Created by ice1000 at 2016/11
//

#include <ostream>
#include <istream>

#include "sort.hpp"

#pragma clang diagnostic push
#pragma ide diagnostic ignored "OCUnusedStructInspection"
#pragma ide diagnostic ignored "OCUnusedGlobalDeclarationInspection"

#ifndef __ICE1000_TEMPLATES_HPP__
#define __ICE1000_TEMPLATES_HPP__

namespace ice1000_util {

	template<typename T1, typename T2>
	class Ice1000Pair {
	public:
		T1 first;
		T2 second;

		Ice1000Pair(const T1 &f, const T2 &s) : first(f), second(s) { }
		
		explicit Ice1000Pair(const T1 &o) : first(o), second(static_cast<T2>(o)) { };

		explicit Ice1000Pair() { }

		~Ice1000Pair() { }

		void setValue(const T1 &f, const T2 &s) {
			first = f;
			second = s;
		}

		constexpr auto operator<(const Ice1000Pair &o) const -> const bool {
			return first == o.first ? second < o.second : first < o.first;
		}

		constexpr auto operator==(const Ice1000Pair &o) const -> const bool {
			return first == o.first and second == o.second;
		}

		constexpr auto operator<=(const Ice1000Pair &o) const -> const bool {
			return *this < o or *this == o;
		}

		constexpr auto operator>(const Ice1000Pair &o) const -> const bool {
			return !(*this <= o);
		}

		constexpr auto operator>=(const Ice1000Pair &o) const -> const bool {
			return !(*this < o);
		}

		constexpr const bool operator!=(const Ice1000Pair &o) const {
			return !(*this == o);
		}

		friend auto operator<<(std::ostream &os, const Ice1000Pair &pair) -> std::ostream& {
			os << "first: " << pair.first << " second: " << pair.second;
			return os;
		}

		friend auto operator>>(std::istream &is, Ice1000Pair &pair) -> std::istream& {
			is >> pair.first >> pair.second;
			return is;
		}
	};

	/// 离散化
	/// discretization is to reduce the range of data
	template<typename T>
	auto discretization (T *data, const jsize len) -> T* {
		auto pair = new ice1000_util::Ice1000Pair<T, jint>[len]();
		auto after = new T[len]();
		for (auto i = 0; i < len; ++i) pair[i].setValue(data[i], i);
		// TODO change into quick sort
		ice1000_sort::merge_sort(pair, len);
		for (auto i = 0, j = 0; i < len; ++i, ++j) {
			after[pair[i].second] = j;
			if ((i + 1 < len) and pair[i].first == pair[i + 1].first) --j;
		}
		return after;
	}
}

#endif /// __ICE1000_TEMPLATES_HPP__


#pragma clang diagnostic pop
