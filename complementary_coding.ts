function toBinary(n: number) {
    return (n >>> 0).toString(2);
}

class ComplementaryCoding {
    constructor(
        private readonly to: number,
        private readonly from: number = 0,
        private readonly smallestNeg: number = to / 2
    ) {
        if (to < from) throw new Error('to must be greater than from');
        if (smallestNeg < from || smallestNeg > to)
            throw new Error('smallestNeg must be between from and to');
    }

    get size() {
        return this.to - this.from;
    }

    toComplementary(n: number) {
        if (n >= this.smallestNeg || n < this.smallestNeg - this.size)
            throw new Error(
                'n must be between smallestNeg and smallestNeg-size'
            );

        while (n < this.from) n += this.size;
        while (n > this.to) n -= this.size;
        return n;
    }

    fromComplementary(c: number) {
        if (c < this.from || c > this.to)
            throw new Error('n must be between from and to');

        if (c < this.smallestNeg) return c;
        return c - this.size;
    }
}

const cc = new ComplementaryCoding(1000);

// example of x - y using complementary coding

// explanation of x - y using complementary coding
// x = 100, y = 200
// x - y = x + (-y)
// x - y = 100 + (-200)
// c(x - y) = 100 + c(-200)
// c(x - y) = 100 + 800
// c(x - y) = 900
// x - y = 900 - 1000
// x - y = -100

const x = 100,
    y = 200;

const cX = cc.toComplementary(x);

const cNegY = cc.toComplementary(-y);

const cXMinusY = cX + cNegY;

const xMinusY = cc.fromComplementary(cXMinusY);

console.log(xMinusY);
