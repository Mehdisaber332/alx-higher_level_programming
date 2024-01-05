#!/usr/bin/python3
"""
a function that finds a peak in a list of unsorted integers.
"""


def find_peak(list_of_integers):
    """
    finds the peak using binary search
    """
    left, right = 0, len(list_of_integers) - 1

    if len(list_of_integers) == 0:
        return None

    while left < right:
        mid = (left + right) // 2

        if list_of_integers[mid] < list_of_integers[mid + 1]:
            left = mid + 1
        else:
            right = mid

    if list_of_integers[left] >= list_of_integers[right]:
        return list_of_integers[left]
    else:
        return list_of_integers[right]
