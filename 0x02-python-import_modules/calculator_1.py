#!/usr/bin/python3

def add(a, b):
    """Addition function"""
    return a + b

def sub(a, b):
    """Subtraction function"""
    return a - b

def mul(a, b):
    """Multiplication function"""
    return a * b

def div(a, b):
    """Division function"""
    if b == 0:
        return "Division by zero is not allowed"
    return a / b
