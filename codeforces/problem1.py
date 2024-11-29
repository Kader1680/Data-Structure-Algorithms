




def vec(str):
    result = []
    for i in str:
        if i.isupper():
            result.append(i.lower())
        else:
            result.append(i)
    new = "".join(result)
    return new

print(vec("meliisa"))