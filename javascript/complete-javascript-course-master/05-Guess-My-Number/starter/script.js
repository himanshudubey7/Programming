'use strict';
//DOM MANIPULATION AND SELECTION OF DOM OBJECTS THROUGH JS

// console.log(document.querySelector('.message').textContent);
// document.querySelector('.message').textContent = 'Correct Number !🥳';
// console.log(document.querySelector('.message').textContent);

// document.querySelector('.number').textContent = 132;
// document.querySelector('.score').textContent = 100;

// document.querySelector('.guess').value = 23;
// console.log(document.querySelector('.guess').value);

//------------------------------------------------------------------------

//HANDLING CLICK EVENTS AND LEARNING ABOUT EVENTS ON WEBPAGE :
/*
An event is something what happens on the page for example a mouse click or a curser move or a button press and with the help 
of event listener we can actually react to a certain event .
*/

let secretNumber = Math.trunc(Math.random() * 20) + 1; //for generating any random number

let score_var = 20;

let high_score = 0;

const displayMessage = function (message) {
  document.querySelector('.message').textContent = message;
};

//Again button functionality.....

document.querySelector('.again').addEventListener('click', function () {
  score_var = 20;
  document.querySelector('.score').textContent = 20;
  // document.querySelector('.message').textContent = 'Start Guessing....';
  displayMessage('Start Guessing....');
  document.querySelector('.number').textContent = '?';
  document.querySelector('body').style.backgroundColor = '#222';
  document.querySelector('.number').style.width = '15rem';
  document.querySelector('.guess').value = null;
  secretNumber = Math.trunc(Math.random() * 20) + 1;
});

//Check button functionality.....
document.querySelector('.check').addEventListener('click', function () {
  /*we have to implement a function to state 
the function when the event (click) happens  */
  const guess = Number(document.querySelector('.guess').value); // intially any input we get from a user is a string so we have to convert it into a number

  //   console.log(guess);
  //   console.log(typeof guess);

  //when there is no input
  if (!guess) {
    displayMessage('No Number 🛑');
  }

  // when player wins the game
  else if (guess == secretNumber) {
    // document.querySelector('.message').textContent = '🥳 Correct Number';
    displayMessage('🥳 Correct Number');
    document.querySelector('.number').textContent = secretNumber;

    document.querySelector('body').style.backgroundColor = '#60b347';

    document.querySelector('.number').style.width = '30rem';

    if (score_var > high_score) {
      high_score = score_var;
      document.querySelector('.highscore').textContent = high_score;
    }
  }
  //
  //
  //when guess is wrong
  else if (guess != secretNumber) {
    if (score_var > 1) {
      //   document.querySelector('.message').textContent =
      //     guess > secretNumber ? 'Too High!!! 🙃' : 'Too Low!!! 🙃';

      displayMessage(guess > secretNumber ? 'Too High!!! 🙃' : 'Too Low!!! 🙃');
      score_var--;
      document.querySelector('.score').textContent = score_var;
    } else {
      // document.querySelector('.message').textContent =
      //'You lost the game !!! 😥';
      displayMessage('You lost the game !!! 😥');

      document.querySelector('.score').textContent = 0;
    }
  }
});
