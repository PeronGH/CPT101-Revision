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
        while (n < this.from) n += this.size;
        while (n > this.to) n -= this.size;
        return n;
    }

    fromComplementary(n: number) {
        if (n < this.from || n > this.to)
            throw new Error('n must be between from and to');

        if (n < this.smallestNeg) return n;
        return n - this.size;
    }
}

const cc = new ComplementaryCoding(1000);

// example of x - y using complementary coding

const x = 100;
const y = 200;

const xMinusY = cc.fromComplementary(
    cc.toComplementary(x) + cc.toComplementary(-y)
);

// explanation of x - y using complementary coding
// x = 100, y = 200
// x - y = x + (-y)
// x - y = 100 + (-200)
// c(x - y) = 100 + c(-200)
// c(x - y) = 100 + 800
// c(x - y) = 900
// x - y = 900 - 1000
// x - y = -100

console.log(xMinusY);
