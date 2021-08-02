class node:
    def __init__(self, symbol, frequency, left=None, right=None):
        self.symbol = symbol
        self.frequency = frequency
        self.left = left
        self.right = right
        self.huffCode = ''


def printNodes(root, val=""):
    huffCode = val + str(root.huffCode)

    if root.left:
        printNodes(root.left, huffCode)
    if root.left:
        printNodes(root.right, huffCode)

    if not root.left and not root.right:
        print(f"{root.symbol} -> {huffCode}")


def huffmanCode(S, f):
    nodes = []
    for i in range(len(f)):
        nodes.append(node(S[i], f[i]))

    while len(nodes) > 1:
        nodes = sorted(nodes, key=lambda x: x.frequency)

        left = nodes[0]
        right = nodes[1]

        left.huffCode = 0
        right.huffCode = 1

        newNode = node(left.symbol+right.symbol, left.frequency+right.frequency, left, right)

        nodes.remove(left)
        nodes.remove(right)
        nodes.append(newNode)

    printNodes(nodes[0])


if __name__ == '__main__':
    S = "abcdef"
    f = [5, 9, 12, 13, 16, 45]
    huffmanCode(S, f)

