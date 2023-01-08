if (import.meta.main)
    while (true) {
        const input = prompt('Enter a number to convert:');

        if (input === null) break;

        console.log(getResult(input));
    }

function getResult(input: string): string {
    let inputNumber = 0;

    if (input.toLowerCase().startsWith('bcd')) {
        input = input.slice(3).replaceAll(/\s+/g, '');
        for (let i = 0; i < input.length; i += 4) {
            const bcd = input.slice(i, i + 4);
            const num = parseInt(bcd, 2);

            if (num > 9) return 'Invalid BCD\n';

            inputNumber = inputNumber * 10 + num;
        }
    } else inputNumber = /^[bodx]/i.test(input) ? +('0' + input) : +input;

    if (isNaN(inputNumber)) return 'Invalid input\n';

    return ''.concat(
        `IEEE 754: ${toIEEE754(inputNumber)}\n`,
        `Binary: ${inputNumber.toString(2)}\n`,
        `Octal: ${inputNumber.toString(8)}\n`,
        `Decimal: ${inputNumber.toString(10)}\n`,
        `Hexadecimal: ${inputNumber.toString(16).toUpperCase()}\n`,
        `BCD: ${[...inputNumber.toString()]
            .map(ch =>
                /^\d+$/.test(ch) ? (+ch).toString(2).padStart(4, '0') : ch
            )
            .join(' ')}\n`
    );
}

function toIEEE754(number: number): string {
    const floatArray = new Float64Array(1);
    floatArray[0] = number;
    const view = new Uint8Array(floatArray.buffer);
    const binaryStrings = [...view].map(b => b.toString(2).padStart(8, '0'));
    return binaryStrings.reverse().join('');
}
