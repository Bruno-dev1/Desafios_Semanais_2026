const altura = 8;
const enfeites = ["*", "o", "@", "+"];

for (let i = 0; i < altura; i++) {
    let linha = "";

    // espaços
    linha += " ".repeat(altura - i - 1);

    // folhas com enfeites
    for (let j = 0; j < 2 * i + 1; j++) {
        if (Math.random() < 0.2) {
            linha += enfeites[Math.floor(Math.random() * enfeites.length)];
        } else {
            linha += "X";
        }
    }

    console.log(linha);
}

// tronco
for (let i = 0; i < 2; i++) {
    console.log(" ".repeat(altura - 1) + "|");
}

// base
console.log(" ".repeat(altura - 2) + "###");