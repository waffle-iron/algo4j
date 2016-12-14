/**
 * Created by ice1000 on 2016/11/24.
 *
 * @author ice1000
 */
package org.algo4j.test

import org.algo4j.util.SeqUtilsTest
import java.util.*

inline fun loop(block: () -> Unit) {
	while (true) block.invoke()
}

inline fun loop(times: Int, block: (Int) -> Unit) {
	var cnt = times
	while (cnt-- > 0) block.invoke(times - cnt)
}

inline fun test(times: Int, block: (Int) -> Unit) {
	println("$times test cases")
	loop(times, block)
	println("test passed")
}

fun <T> T.println(): T {
	println(toString())
	return this
}

fun <T> T.print(): T {
	print(toString())
	return this
}

object Monoid {
	inline fun <T> combine(crossinline func: (T, T) -> T) = { i: T, j: T -> func(i, j) }
}

fun <T> MutableList<T>.append(ls: List<T>): MutableList<T> {
	addAll(ls)
	return this
}

inline val shuffledIntList: List<Int>
	get() {
		val rand = Random(System.currentTimeMillis())
		return listOf(
				rand.nextInt(SeqUtilsTest.bound), rand.nextInt(SeqUtilsTest.bound), rand.nextInt(SeqUtilsTest.bound),
				rand.nextInt(SeqUtilsTest.bound), rand.nextInt(SeqUtilsTest.bound), rand.nextInt(SeqUtilsTest.bound),
				rand.nextInt(SeqUtilsTest.bound), rand.nextInt(SeqUtilsTest.bound), rand.nextInt(SeqUtilsTest.bound),
				rand.nextInt(SeqUtilsTest.bound), rand.nextInt(SeqUtilsTest.bound), rand.nextInt(SeqUtilsTest.bound),
				rand.nextInt(SeqUtilsTest.bound), rand.nextInt(SeqUtilsTest.bound), rand.nextInt(SeqUtilsTest.bound),
				rand.nextInt(SeqUtilsTest.bound), rand.nextInt(SeqUtilsTest.bound), rand.nextInt(SeqUtilsTest.bound),
				rand.nextInt(SeqUtilsTest.bound), rand.nextInt(SeqUtilsTest.bound), rand.nextInt(SeqUtilsTest.bound),
				rand.nextInt(SeqUtilsTest.bound), rand.nextInt(SeqUtilsTest.bound), rand.nextInt(SeqUtilsTest.bound),
				rand.nextInt(SeqUtilsTest.bound), rand.nextInt(SeqUtilsTest.bound), rand.nextInt(SeqUtilsTest.bound),
				rand.nextInt(SeqUtilsTest.bound), rand.nextInt(SeqUtilsTest.bound), rand.nextInt(SeqUtilsTest.bound)
		)
	}

inline val shuffledDoubleList: List<Double>
	get() {
		val rand = Random(System.currentTimeMillis())
		return listOf(
				rand.nextDouble() * 1000, rand.nextDouble() * 1000, rand.nextDouble() * 1000,
				rand.nextDouble() * 1000, rand.nextDouble() * 1000, rand.nextDouble() * 1000,
				rand.nextDouble() * 1000, rand.nextDouble() * 1000, rand.nextDouble() * 1000,
				rand.nextDouble() * 1000, rand.nextDouble() * 1000, rand.nextDouble() * 1000,
				rand.nextDouble() * 1000, rand.nextDouble() * 1000, rand.nextDouble() * 1000,
				rand.nextDouble() * 1000, rand.nextDouble() * 1000, rand.nextDouble() * 1000,
				rand.nextDouble() * 1000, rand.nextDouble() * 1000, rand.nextDouble() * 1000,
				rand.nextDouble() * 1000, rand.nextDouble() * 1000, rand.nextDouble() * 1000,
				rand.nextDouble() * 1000, rand.nextDouble() * 1000, rand.nextDouble() * 1000,
				rand.nextDouble() * 1000, rand.nextDouble() * 1000, rand.nextDouble() * 1000
		)
	}

inline val strongIntArray: List<Int>
	get() {
		val list = shuffledIntList
				.toMutableList()
				.append(shuffledIntList)
				.append(shuffledIntList)
		for (i in 1..2000) list.addAll(shuffledIntList)
		return list
	}
