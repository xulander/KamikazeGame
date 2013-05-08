# Game Design Document
This is a place holder for your game design document. You are advised to write your document in [Markdown](http://daringfireball.net/projects/markdown/) and the following section will show you how to write a document using Markdown markup.

Alternativley, you can write your document in plain text if you wish.

----

# Game Overview
I will be creating a space shooter game, where you will be traveling forward in space shooting down
asteroids and bad guys. Eventually, you will find the boss. There will only be 1 level, but
as you continue, the level will become increasingly harder with more items popping up.

Basic Picture showing what it will look like: IMAG0691.jpg

#Game Extra Credit Changes To Look For

##Thing 1 (EC Tracking Thing)
The New bomb. It comes out of the face every time a new level starts. He tracks you, albeit slightly
differently than how you recommended we should code it in the wiki. It still does track you though,
so it still counts. The only way to stop it from hitting you is killing it first.

##Thing 2 (EC Tracking Thing)
The other thing is the angry bird pig at the top. He doesn't do anything, but if you try to
shoot a bomb at him, he will dodge it. That should fulfill the "Avoid Being Hit" tracking thing.

##NewBackgrounds (EC)
The backgrounds now just change into solid background colors if you make it to the next level.
No more cool animation bckgrounds. I asked if it was okay in an issue, and they said yeah.

##High Scores
I included an exampleScores.txt. Just go to line 714 and 791 to "exampleScores.txt" if you want
to have scores already included. If not, just keep playing and the scores will auto update.
If you want to play a few games, just dont touch the code at all. It is still coded for
"scores.txt"


# Game Play
You will be using the keyboard for gameplay. The keyboard directions will move the spaceship,
while the spacebar will shoot the missle. The 'b' button will shoot a bomb with a big blast
radius. You may only use the big bomb 'b' once. Then you have to wait for the cooldown before
you can relaunch it. I will probably use the time counter %150==0 or something for it.

## The Background
It will just be a sliding background.

==See picture scroller.jpg

## The Spaceship
The spaceship will be a simple picture of a spaceship. It will just move side to side, and up
and down. Pressing the spacebar will shoot. Nothing too special here. You have a health bar.
In reality, it just takes 5 hits to kill you. If you get a life that floats around, it will
refill your whole health bar. If you die, the game goes to a GAME OVER screen with your score.
Keep track of life via counter

==Open newship.png

## Thing #1
Thing #1 will be simple asteroids that just fly around that you can try to avoid, or shoot down
to make them dissapear or explode. They will randomly move from a random direction straight from
1 end of the screen to another. They will generally move pretty slow.

==Checkout asteroid.png

## Thing #2
The 1st bullet that shoots out of the front of his ship. Kills 1 thing on collision.

==Check out dabomb.png

## Thing #3
The 2nd bomb bullet. This one will be deployed like a normal bullet, with a different picture.
Upon detonation, it has a giant blast radius. The bottom right corner will tell you when a 
bomb is ready vs not ready.

===check out BlueExplosion.png and bombmain.png

## Thing #4
The enemies that fly towards you in a different way than asteroids. They will not try to follow you,
but most likely follow a simple movement pattern & bounce off the wall, unlike the roids.
They will take 2 hits to kill. o0o a TWIST! They will move slightly faster than the asteroid.

===Checkout enemy.png for sprite.

## Thing #5
The big bad boss, or so his name says. He is actually just kind of like a blackhole. Your bullets
and bomb do not affect him, and if you touch him, you die.



## Scoring
If you hit something, your score will go up. The score will be revealed at the bottom left,
unless i find an easy way to reveal it WHILE you play. Hitting an enemy is 10pts. enemy ships
take 2 hits, thus give 20 pts.

==See shipLives.png for the little ship lives, and Lives.png for the lives icon.

## Other buttons, interface, actions
There isn't much more. The whole beginning interface is buttons & a qlineedit.
 After that, the only actions would be the keyboard actions with a scrolling interface. T
 here isn't much after that!
 

##Interface Menu
Interface is extremely simple. It will just have a background with buttons to click with
your mouse. I will draw a crude example of it. JK now i have the full example. I have 3 
buttons. 1 is start, 2nd is how to play, and 3rd is exit. How to play puts rules at the bottom.
Must need name input to play. 

==see space.png for background menu


