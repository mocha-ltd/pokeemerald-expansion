ShivervaleTown_Mart_MapScripts::
	.byte 0


ShivervaleTown_Mart_EventScript_Clerk::
# 6 "data/maps/ShivervaleTown_Mart/scripts.pory"
	lock
# 7 "data/maps/ShivervaleTown_Mart/scripts.pory"
	applymovement 1, ShivervaleTown_Mart_EventScript_Clerk_Movement_0
# 8 "data/maps/ShivervaleTown_Mart/scripts.pory"
	waitmovement 1
# 9 "data/maps/ShivervaleTown_Mart/scripts.pory"
	msgbox ShivervaleTown_Mart_EventScript_Clerk_Text_0
# 10 "data/maps/ShivervaleTown_Mart/scripts.pory"
	waitmessage
# 11 "data/maps/ShivervaleTown_Mart/scripts.pory"
	pokemart 0
# 12 "data/maps/ShivervaleTown_Mart/scripts.pory"
	msgbox ShivervaleTown_Mart_EventScript_Clerk_Text_1
# 13 "data/maps/ShivervaleTown_Mart/scripts.pory"
	closemessage
# 14 "data/maps/ShivervaleTown_Mart/scripts.pory"
	release
	end


ShivervaleTown_Mart_Antidote::
# 19 "data/maps/ShivervaleTown_Mart/scripts.pory"
	lock
# 20 "data/maps/ShivervaleTown_Mart/scripts.pory"
	applymovement 2, ShivervaleTown_Mart_EventScript_Clerk_Movement_0
# 21 "data/maps/ShivervaleTown_Mart/scripts.pory"
	waitmovement 2
# 22 "data/maps/ShivervaleTown_Mart/scripts.pory"
	msgbox ShivervaleTown_Mart_Antidote_Text_0
# 23 "data/maps/ShivervaleTown_Mart/scripts.pory"
	closemessage
# 24 "data/maps/ShivervaleTown_Mart/scripts.pory"
	applymovement 2, ShivervaleTown_Mart_Antidote_Movement_0
# 25 "data/maps/ShivervaleTown_Mart/scripts.pory"
	waitmovement 2
# 26 "data/maps/ShivervaleTown_Mart/scripts.pory"
	release
	return


ShivervaleTown_Mart_Repel::
# 30 "data/maps/ShivervaleTown_Mart/scripts.pory"
	lock
# 31 "data/maps/ShivervaleTown_Mart/scripts.pory"
	applymovement 3, ShivervaleTown_Mart_EventScript_Clerk_Movement_0
# 32 "data/maps/ShivervaleTown_Mart/scripts.pory"
	waitmovement 3
# 33 "data/maps/ShivervaleTown_Mart/scripts.pory"
	msgbox ShivervaleTown_Mart_Repel_Text_0
# 34 "data/maps/ShivervaleTown_Mart/scripts.pory"
	closemessage
# 35 "data/maps/ShivervaleTown_Mart/scripts.pory"
	applymovement 3, ShivervaleTown_Mart_Antidote_Movement_0
# 36 "data/maps/ShivervaleTown_Mart/scripts.pory"
	waitmovement 3
# 37 "data/maps/ShivervaleTown_Mart/scripts.pory"
	release
	return


# 7 "data/maps/ShivervaleTown_Mart/scripts.pory"
ShivervaleTown_Mart_EventScript_Clerk_Movement_0:
# 7 "data/maps/ShivervaleTown_Mart/scripts.pory"
	face_player
	step_end

# 24 "data/maps/ShivervaleTown_Mart/scripts.pory"
ShivervaleTown_Mart_Antidote_Movement_0:
# 24 "data/maps/ShivervaleTown_Mart/scripts.pory"
	face_original_direction
	step_end

ShivervaleTown_Mart_EventScript_Clerk_Text_0:
# 9 "data/maps/ShivervaleTown_Mart/scripts.pory"
	.string "Welcome! How may I serve you?$"

ShivervaleTown_Mart_EventScript_Clerk_Text_1:
# 12 "data/maps/ShivervaleTown_Mart/scripts.pory"
	.string "Please come again!$"

ShivervaleTown_Mart_Antidote_Text_0:
# 22 "data/maps/ShivervaleTown_Mart/scripts.pory"
	.string "Do you have any ANTIDOTES with you? If\n"
	.string "you walk around with a poisoned\l"
	.string "Pokémon, it will lose HP.$"

ShivervaleTown_Mart_Repel_Text_0:
# 33 "data/maps/ShivervaleTown_Mart/scripts.pory"
	.string "Do you use REPEL? It keeps Pokémon\n"
	.string "away, so it's useful when you're in a\l"
	.string "hurry.$"
