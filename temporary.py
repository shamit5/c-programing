encoded = "灩捯䍔䙻ㄶ形楴獟楮獴㌴摟潦弸彥ㄴㅡて㝽"

# Decoding
decoded = ''.join([chr(ord(c) >> 8) + chr(ord(c) & 0xFF) for c in encoded])

print(decoded)
