#!/usr/bin/python3

def list_division(my_list_1, my_list_2, list_length):
    list3 = []
    for i in range(list_length):
        try:
            result = my_list_1[i] / my_list_2[i]
        except ZeroDivisionError:
            print("division by 0")
            result = 0
        except (TypeError, ValueError):
            print("wrong type")
            result = 0
        except IndexError:
            print("out of range")
        finally:
            list3.append(result)
    return list3