//OBJETO
let exemploOBJ = { //objeto
    nome: 'Fulana',
    email: 'Fulana@hotmail.com',
    peso: '72',
    altura: '155'
    msg: ()=>{
        console.log('teste de função dentro de um objeto');
    }
}
exemploOBJ.msg();

//destruturando objeto
let nome = exemploOBJ.nome; //estrutura que pega um por um
let {nome, email, peso} = exemploOBJ; // estrutura que pega varios

console.log(nome);
console.log(nome, email, peso, altura); 


//VETOR
let vetor = [1, 45, 64, 24, 30]; //vetor

console.log(vetor); //imprime vetor
console.log(exemploOBJ); //imprime objeto

//destruturando o vetor
let num1 =  vetor[0];//pegou numero 1
let num2 = vetor[1];//pegou numero 45
let vetor2 = [];
let i, j=0;

for(i=2; i<vetor.length; i++){//vetor2 pegou 67, 24, 30
    vetor2[j] = vetor[i];
    j++
}

console.log('Valor do num1 = ' + num1);
console.log('Valor do num2 = ' + num2);
console.log('Valor do vetor2 = ' + vetor2);

//destruturando vetor de outra forma
let [num1, num2, ...vetor2] = vetor; // ... operator rest (pega o restante)

/*
//referencias do DOM -  HTML

const estados = document.getElementById('estados');
const btnClique = document.getElementById('btnClique');

//estrutura de if
let op = ['RJ', 'SP', 'MG', 'TO'];
let resp = op[0];

if(op[0] == 'RJ'){
    console.log('Opção escolhida = RJ');
};
if(op[1] == 'SP'){
    console.log('Opção escolhida = SP');
};
if(op[2] == 'MG'){
    console.log('Opção escolhida = MG');
};
if(op[3] == 'TO'){
    console.log('Opção escolhida = TO');
};

btnClique.onclick = () =>{
    resp = estados.nodeValue;
}

*/

// tipos de funções em JS

Function nome(){
    console.log('teste');
};

nome();

Function(){// função anonima

}