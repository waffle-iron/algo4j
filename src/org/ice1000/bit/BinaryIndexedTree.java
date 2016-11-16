package org.ice1000.bit;

/**
 * A binary indexed tree, implemented by using jni.
 * Created by ice1000 on 2016/11/15.
 *
 * @author ice1000
 */
@SuppressWarnings("WeakerAccess")
public abstract class BinaryIndexedTree {
	private long[] data;

	protected BinaryIndexedTree(int length) {
		data = new long[length];
	}

	protected void add(int index, long value) {
		add(data, data.length, index, value);
	}

	protected long sum(int index) {
		return sum(data, data.length, index);
	}

	private native void add(long[] data, int length, int index, long value);

	private native long sum(long[] data, int length, int index);
}
