# import os
# import struct

# def get_random_u8():
#     return struct.unpack("<B", os.urandom(1))[0]

# def encrypt():
#     a = "a"
#     k = 100
#     res = ""
#     for i, c in enumerate(a):
#         # 0 <= u8 <= 255
#         # i = 0~43
#         # k = 45
#         # %= 255
#         enc = (get_random_u8() + k * i) % 0xff
#         # ord => char to int
#         enc = ord(c) & enc
#         # string
#         res += hex(enc)[2:].rjust(2, "0")
#     return res

# if __name__ == '__main__':
#     l = set([""])
#     for i in range(10000):
#         l.add(encrypt())
    
#     for j in l:
#         print(j)

l = [0x67, 0x55, 0x5c, 0x53, 0x5f, 0x5d, 0x55, 0x10, 0x44, 0x5f, 0x10, 0x51, 0x43, 0x43, 0x55, 0x5d, 0x52, 0x5c, 0x49, 0x10, 0x47, 0x5f, 0x42, 0x5c, 0x54, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00]
dl = 0x30

for i in l:
    print(chr(i^dl))