# Game Design Document
This is a place holder for your game design document. You are advised to write your document in [Markdown](http://daringfireball.net/projects/markdown/) and the following section will show you how to write a document using Markdown markup.

Alternativley, you can write your document in plain text if you wish.

----

# Game Overview
I will be creating a space shooter game, where you will be traveling forward in space shooting down
asteroids and bad guys. Eventually, you will find the boss. There will only be 1 level, but
as you continue, the level will become increasingly harder with more items popping up.

Basic Picture showing what it will look like: IMAG0691.jpg

# Game Play
You will be using the keyboard for gameplay. The keyboard directions will move the spaceship,
while the spacebar will shoot the missle. The 'b' button will shoot a bomb with a big blast
radius. You may only use the big bomb 'b' once. Then you have to wait for the cooldown before
you can relaunch it. I will probably use the time counter %150==0 or something for it.

## The Background
It will just be a sliding background.

## The Spaceship
The spaceship will be a simple picture of a spaceship. It will just move side to side, and up
and down. Pressing the spacebar will shoot. Nothing too special here. You have a health bar.
In reality, it just takes 5 hits to kill you. If you get a life that floats around, it will
refill your whole health bar. If you die, the game goes to a GAME OVER screen with your score.
Keep track of life via counter

## Thing #1
Thing #1 will be simple asteroids that just fly around that you can try to avoid, or shoot down
to make them dissapear or explode. They will randomly move from a random direction straight from
1 end of the screen to another. They will generally move pretty slow.
Checkout asteroidBeforeCrop.jpg or asteroid-sprite.gif

## Thing #2
The 1st bullet that shoots out of the front of his ship. Kills 1 thing on collision.

## Thing #3
The 2nd bomb bullet. This one will be deployed like a normal bullet, with a different picture.
Upon detonation, it has a giant blast radius. 
check out blast.jpg. I will prob size it down.

## Thing #4
The enemies that fly towards you and try to shoot you down too. They will not try to follow you,
but most likely follow a simple movement pattern shooting once every x amount of seconds.
They will take 2 hits to kill. o0o a TWIST! They will move slightly faster than the asteroid.
Checkout enemy.png for sprite.

## Thing #5
The big bad boss. He will be probably a cool image I find on Google, or Mr Crowleys head. Whichever
suffices :) He will need roughly 20 hits to kill. Maybe the bomb will do 3 hits equivalent to a 
normal bullet????????? WE WILL SEEE THE SUSPENSEE!

## Scoring
If you hit something, your score will go up. The score will be revealed at the end of the game,
unless i find an easy way to reveal it WHILE you play. Asteroid = 50 pts. Enemy ship = 150.
Boss = 1000. may change later.

## Other buttons, interface, actions
There isn't much more. The whole beginning interface is buttons. After that, the only actions
would be the keyboard actions with a scrolling interface. There isn't much after that!


##Interface 
Interface is extremely simple. It will just have a background with buttons to click with
your mouse. I will draw a crude example of it.


