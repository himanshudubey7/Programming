'strict mode'
let secretNumber = Math.trunc(Math.random() * 20) + 1; //for generating any random number
console.log(document.querySelector('.number').textContent= secretNumber);

let score_var = 20;

let high_score = 0;

const displayMessage = function (message) {
  document.querySelector('.message').textContent = message;
};


// check button functionality
document.querySelector(".check").addEventListener('click',function(){
    const guess = Number(document.querySelector('.guess').value);
    // console.log(guess);
if(!guess){
    displayMessage('No Number!')
}
else if(guess!=secretNumber){
    if(score_var>1){
    --score_var;
    document.querySelector('.score').textContent = score_var;
    }
    else{
        --score_var;
        document.querySelector('.score').textContent = score_var;
        displayMessage('You lost the game😒🥲🥲')
    }
}
else if(guess == secretNumber){
    displayMessage('Correct Guess!!🥳🎉');
    if(high_score<score_var){
    high_score = score_var;
    }
    document.querySelector('.highscore').textContent = high_score;
}
}
);

//again button functionality
document.querySelector(".again").addEventListener("click",function(){
    score_var = 20;
    document.querySelector('.score').textContent = score_var; 

let secretNumber = Math.trunc(Math.random() * 20) + 1; //for generating any random number
document.querySelector('.number').textContent= secretNumber
displayMessage('Start Guessing......');
document.querySelector('.guess').value = null;
}); 