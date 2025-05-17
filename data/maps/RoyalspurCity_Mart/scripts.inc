RoyalspurCity_Mart_MapScripts::
	.byte 0


RoyalspurCity_Mart_EventScript_Clerk::
# 6 "data/maps/RoyalspurCity_Mart/scripts.pory"
	lock
# 7 "data/maps/RoyalspurCity_Mart/scripts.pory"
	applymovement 1, RoyalspurCity_Mart_EventScript_Clerk_Movement_0
# 8 "data/maps/RoyalspurCity_Mart/scripts.pory"
	waitmovement 1
# 9 "data/maps/RoyalspurCity_Mart/scripts.pory"
	msgbox RoyalspurCity_Mart_EventScript_Clerk_Text_0
# 10 "data/maps/RoyalspurCity_Mart/scripts.pory"
	waitmessage
# 11 "data/maps/RoyalspurCity_Mart/scripts.pory"
	pokemart 0
# 12 "data/maps/RoyalspurCity_Mart/scripts.pory"
	msgbox RoyalspurCity_Mart_EventScript_Clerk_Text_1
# 13 "data/maps/RoyalspurCity_Mart/scripts.pory"
	closemessage
# 14 "data/maps/RoyalspurCity_Mart/scripts.pory"
	release
	end


RoyalspurCity_Mart_Gentleman::
# 19 "data/maps/RoyalspurCity_Mart/scripts.pory"
	lock
# 20 "data/maps/RoyalspurCity_Mart/scripts.pory"
	applymovement 2, RoyalspurCity_Mart_EventScript_Clerk_Movement_0
# 21 "data/maps/RoyalspurCity_Mart/scripts.pory"
	waitmovement 2
# 22 "data/maps/RoyalspurCity_Mart/scripts.pory"
	msgbox RoyalspurCity_Mart_Gentleman_Text_0
# 23 "data/maps/RoyalspurCity_Mart/scripts.pory"
	closemessage
# 24 "data/maps/RoyalspurCity_Mart/scripts.pory"
	applymovement 2, RoyalspurCity_Mart_Gentleman_Movement_0
# 25 "data/maps/RoyalspurCity_Mart/scripts.pory"
	waitmovement 2
# 26 "data/maps/RoyalspurCity_Mart/scripts.pory"
	release
	return


# 7 "data/maps/RoyalspurCity_Mart/scripts.pory"
RoyalspurCity_Mart_EventScript_Clerk_Movement_0:
# 7 "data/maps/RoyalspurCity_Mart/scripts.pory"
	face_player
	step_end

# 24 "data/maps/RoyalspurCity_Mart/scripts.pory"
RoyalspurCity_Mart_Gentleman_Movement_0:
# 24 "data/maps/RoyalspurCity_Mart/scripts.pory"
	face_original_direction
	step_end

RoyalspurCity_Mart_EventScript_Clerk_Text_0:
# 9 "data/maps/RoyalspurCity_Mart/scripts.pory"
	.string "Welcome! How may I serve you?$"

RoyalspurCity_Mart_EventScript_Clerk_Text_1:
# 12 "data/maps/RoyalspurCity_Mart/scripts.pory"
	.string "Please come again!$"

RoyalspurCity_Mart_Gentleman_Text_0:
# 22 "data/maps/RoyalspurCity_Mart/scripts.pory"
	.string "Why are there so many options of the\n"
	.string "same thing? I can't tell the difference!$"
