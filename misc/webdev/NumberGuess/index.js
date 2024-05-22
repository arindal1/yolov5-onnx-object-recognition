// console.log(parseInt(Math.random()*100 +1));
const randomNum = parseInt(Math.random()*100 +1);

const submit = document.querySelector('#subt');
const userInput = document.querySelector('#guessField');
const guessSlot = document.querySelector('.guesses');
const remaining = document.querySelector('.lastResult');
const lowOrHi = document.querySelector('.lowOrHi');
const startOver = document.querySelector('.resultParas');




let prevGuess = []
let numGuess = 1

let playGame =true

if(playGame) {
    submit.addEventListener('click', function(e){
        e.preventDefault();
        const guess = parseInt(userInput.value);
        console.log(guess);
        validateGuess(guess);
    });
}


function validateGuess(guess){
    if(isNaN(guess)) {
        alert('Please Enter a Valid number');
    } else if (guess > 100){
        alert('Please enter a number less than 100');
    } else if(guess < 1) {
        alert('Please enter a positive number');
    } else {
        prevGuess.push(guess);
        if(numGuess === 11) {
            displayGuess(guess);
            displayMessage(`Game Over. Random number was ${randomNum}.`)
            endGame();
        } else {
            displayGuess(guess);
            checkGuess(guess);
        }
    }
}

function checkGuess(guess) {
    if (guess === randomNum){
        displayMessage(`You guessed it RIGHT !`);
        endGame
    } else if (guess < randomNum){
        displayMessage(`Number is Too LOW `);
    } else if (guess > randomNum){
        displayMessage(`Number is Too HIGH `);
    }
}

function displayGuess(guess) {
    userInput.value = '';
    guessSlot.innerHTML += `${guess}, `;
    numGuess++;
    remaining.innerHTML = `${11 - numGuess}`;
}

function displayMessage(message) {
    lowOrHi.innerHTML = `<h2>${message}</h2>`;
}

function endGame(guess) {
    userInput.value = '';
    userInput.setAttribute('disabled', '')
    p.classList.add('button');
    p.innerHTML = `<h2 id="newGame">Start New Game</h2>`;
    playGame = false;
    startOver.appendChild(p)
}

function newGame (guess) {
    document.querySelector('#newGame');
    newGameButton.addEventListener('click', function (e){
        randomNum = parseInt(Math.random()*100 +1);
        prevGuess = [];
        numGuess = 1;
        guessSlot.innerHTML = '';
        remaining.innerHTML = `${11 - numGuess}`;
        userInput.removeAttribute('disabled')
        startOver.removeChild(p);
        playGame = true;
    })
}




