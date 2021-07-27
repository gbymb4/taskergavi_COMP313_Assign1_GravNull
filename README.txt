Course Code: 
	COMP 313

Student Name: 
	Gavin Tasker

Assignment Number: 
	1

Game Title: 
	Some Kind of Assignment Game?.exe.pdf.why.gif

Video Link: 
	https://mega.nz/file/QR4kCQxK#OQfL0GrhCsf1W9ui98Lk8QNvKxCS0k8vrGoRJoWS0LA

Game Description:

	My game is a 2.5D platformer where the objective is to collect all 5 scoring items
	without dying to the hazards within the level. Jumppads and powerups can be used to help
 	traverse the world, while enemies are to be avoided.

	The hardest part of my game to implement and get working were the C_SensingEnemies which 
	use raycasts to prevent themselves from getting stuck against walls or falling off the
 	edge. For-loops in blueprint EventGraphs are just unintuitive compared to standard code,
 	which made defining the start and end points of each raycast confusing before I made more 	
	sense of it. It should be noted too, that the wall detectors and floor detectors only go
 	so far down as the NPC's step height, meaning they could walk up any inclines are through
 	small ditches if they encounter them.

	The most interesting part of this game is being able to take advantage of different
 	features of the Unreal Engine implementation to play the game faster: moving platforms
 	can be used to get jump-boosts, you can jump before landing on jumppads to go higher on
 	your first bounce, and you can get shunted by enemies which kick you backwards to get
 	through a crowd of them faster/more easily.

Note: A file titled 'toignore.txt' is included in my local repository and is outlined to be ignored by my '.gitignore' file. This can be tested by the marker when pulling my repo.

All credit for the sound effects and music used in my game goes to Runescape and JAGeX.