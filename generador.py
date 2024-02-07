pintas=["Picas","Treboles","diamantes","Corazones"]
valores=["A","J","Q","K"]

mazo=[(u,p) for u in valores for p in pintas]

for c in mazo:
    print(c)