const radixMap = new Map<string, number>([
    ['b', 2],
    ['o', 8],
    ['d', 10],
    ['h', 16],
    ['x', 16],
]);

if (import.meta.main)
    while (true) {
        const input = prompt('Enter a number to convert:');

        if (input === null) break;

        console.log(getResult(input));
    }

function getResult(input: string): string {
    const radix = radixMap.get(input[0]);

    const inputNumber = parseInt(
        radix === undefined ? input : input.slice(1),
        radix
    );

    if (isNaN(inputNumber)) return 'Invalid input\n';

    return ''.concat(
        `Binary: ${inputNumber.toString(2)}\n`,
        `Octal: ${inputNumber.toString(8)}\n`,
        `Decimal: ${inputNumber.toString(10)}\n`,
        `Hexadecimal: ${inputNumber.toString(16).toUpperCase()}\n`
    );
}
