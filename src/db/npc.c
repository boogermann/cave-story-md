#include "tables.h"
#include "resources.h"
#include "ai.h"

const npc_info_def npc_info[NPC_COUNT + 8] = {
	{ NULL, 		PAL0, 3, "Nothing",
		&ai_op2pushdn_onCreate, NULL, NULL, NULL },
	{ &SPR_EnergyS, PAL1, 2, "Weapon Energy",
		&ai_energy_onCreate, &ai_energy_onUpdate, NULL, NULL },
	{ &SPR_Behem, 	PAL1, 3, "Behemoth",
		NULL, &ai_behemoth_onUpdate, &ai_behemoth_onState, NULL },
	{ NULL, 		PAL0, 3, "Nothing",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, 3, "Nothing",
		NULL, NULL, NULL, NULL },
	{ &SPR_CritHG, 	PAL3, 3, "Green Hopping Critter",
		&ai_pushdn_onCreate, &ai_critter_onUpdate, &ai_critter_onState, &ai_critter_onHurt },
	{ &SPR_BtlHG, 	PAL3, 3, "Green Beetle",
		NULL, &ai_beetle_onUpdate, &ai_default_onState, NULL },
	{ &SPR_Basil, 	PAL1, 3, "Basil",
		&ai_basil_onCreate, &ai_basil_onUpdate, NULL, NULL },
	{ &SPR_BtlHG, 	PAL3, 3, "Green Beetle (Follow)",
		&ai_beetleFollow_onCreate, &ai_beetleFollow_onUpdate, &ai_default_onState, NULL },
	{ &SPR_Balrog, 	PAL1, 3, "Balrog (Drops in)",
		NULL, &ai_balrog_onUpdate, &ai_balrog_onState, NULL },
	{ NULL, 		PAL0, 3, "Nothing",
		NULL, NULL, NULL, NULL },
	{ &SPR_EnergyShot, PAL1, 3, "Igor Projectile",
		NULL, &ai_genericproj_onUpdate, NULL, NULL },
	{ &SPR_Balrog, 	PAL1, 3, "Balrog (Scene)",
		NULL, &ai_balrog_onUpdate, &ai_balrog_onState, NULL },
	{ &SPR_ForceField, PAL1, 3, "Force Field",
		NULL, NULL, NULL, NULL },
	{ &SPR_Key, 	PAL1, 2, "Santa's Key",
		NULL, NULL, NULL, NULL },
	{ &SPR_Chest, 	PAL1, 2, "Treasure Chest",
		NULL, NULL, NULL, NULL },
	/* 0x010 (16) */
	{ &SPR_Save, 	PAL1, 2, "Save Point",
		NULL, &ai_grav_onUpdate, NULL, NULL },
	{ &SPR_Refill, 	PAL1, 2, "Health & Ammo Refill",
		NULL, &ai_grav_onUpdate, NULL, NULL },
	{ &SPR_Door, 	PAL1, 2, "Door",
		&ai_door_onCreate, &ai_door_onUpdate, NULL, NULL },
	{ &SPR_Balrog, 	PAL1, 3, "Balrog (Mimiga Village)",
		NULL, &ai_balrog_onUpdate, &ai_balrog_onState, NULL },
	{ &SPR_Computer, PAL1, 2, "Computer",
		&ai_op2anim_onCreate, NULL, NULL, NULL },
	{ &SPR_Chest2, 	PAL1, 2, "Opened Chest",
		&ai_pushdn_onCreate, NULL, NULL, NULL },
	{ &SPR_Tele, 	PAL1, 2, "Teleporter",
		NULL, NULL, NULL, NULL },
	{ &SPR_TeleLight, PAL1, 4, "Teleporter Lights",
		&ai_teleLight_onCreate, &ai_teleLight_onUpdate, &ai_teleLight_onState, NULL },
	{ &SPR_CritBig, PAL0, 3, "Power Critter",
		&ai_pushdn_onCreate, &ai_critter_onUpdate, &ai_critter_onState, &ai_critter_onHurt },
	{ &SPR_Platform, PAL1, 3, "Lift Platform",
		&ai_lift_onCreate, &ai_lift_onUpdate, NULL, NULL },
	{ &SPR_Bat, 	PAL0, 3, "Bat (Circling)", // TODO
		NULL, NULL, &ai_default_onState, NULL },
	{ &SPR_Trap, 	PAL1, 3, "Death Trap",
		NULL, NULL, NULL, NULL },
	{ &SPR_CritHG, 	PAL3, 3, "Flying Critter",
		&ai_pushdn_onCreate, &ai_critter_onUpdate, &ai_critter_onState, &ai_critter_onHurt },
	{ &SPR_Cthu, 	PAL3, 3, "Cthulhu",
		NULL, NULL, NULL, NULL },
	{ &SPR_Gunsmith, PAL3, 3, "Hermit Gunsmith",
		&ai_pushdn_onCreate, NULL, NULL, NULL },
	{ &SPR_Bat, 	PAL0, 3, "Bat (Hanging)",
		&ai_batHang_onCreate, &ai_batHang_onUpdate, &ai_default_onState, NULL },
	/* 0x020 (32) */
	{ &SPR_LifeUp, 	PAL1, 2, "Life Capsule",
		NULL, NULL, NULL, NULL },
	{ &SPR_EnergyShot, PAL1, 3, "Balrog Energy Bounce", // TODO
		NULL, NULL, NULL, NULL },
	{ &SPR_Bed, 	PAL1, 2, "Bed",
		NULL, NULL, NULL, NULL },
	{ &SPR_Mannan, 	PAL3, 3, "Mannan",
		NULL, &ai_mannan_onUpdate, &ai_mannan_onState, &ai_mannan_onHurt },
	{ &SPR_Balrog, 	PAL1, 3, "Balrog (Second Fight)", // TODO
		NULL, NULL, &ai_default_onState, NULL },
	{ &SPR_Sign, 	PAL1, 2, "Sign Post",
		NULL, NULL, NULL, NULL },
	{ &SPR_Fire, 	PAL1, 2, "Fireplace Fire",
		NULL, NULL, NULL, NULL },
	{ &SPR_SaveSign, PAL1, 2, "Save Sign",
		&ai_op2frame_onCreate, NULL, NULL, NULL },
	{ &SPR_Santa, 	PAL3, 3, "Santa",
		NULL, &ai_santa_onUpdate, &ai_santa_onState, NULL },
	{ NULL, 		PAL0, 2, "Busted Doorway",
		&ai_door_onCreate, NULL, NULL, NULL },
	{ &SPR_Sue, 	PAL3, 3, "Sue",
		NULL, &ai_sue_onUpdate, &ai_sue_onState, NULL },
	{ &SPR_Board, 	PAL1, 2, "Blackboard",
		&ai_blackboard_onCreate, NULL, NULL, NULL },
	{ &SPR_Polish, 	PAL3, 3, "Polish", // TODO
		NULL, NULL, &ai_default_onState, NULL },
	{ &SPR_Baby, 	PAL3, 3, "Baby", // TODO
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Horiz/Vert Trigger",
		NULL, &ai_trigger_onUpdate, NULL, NULL },
	{ &SPR_Sandcroc, PAL3, 3, "Green Sandcroc", // TODO
		NULL, NULL, &ai_default_onState, NULL },
	/* 0x030 (48) */
	{ NULL, 		PAL0, 3, "Omega Projectile", // TODO
		NULL, NULL, NULL, NULL },
	{ &SPR_Skullhead, PAL1, 3, "Skullhead", // TODO
		NULL, NULL, &ai_default_onState, NULL },
	{ &SPR_Skullhead, PAL1, 3, "Skeleton", // TODO
		NULL, NULL, &ai_default_onState, NULL },
	{ &SPR_Crow, 	PAL3, 3, "Crow & Skullhead", // TODO
		NULL, NULL, &ai_default_onState, NULL },
	{ &SPR_Robot, 	PAL3, 3, "Blue Robot (Sitting)",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, 3, "???",
		NULL, NULL, NULL, NULL },
	{ &SPR_Skullhead, PAL1, 3, "Skullstep",
		NULL, NULL, &ai_default_onState, NULL },
	{ &SPR_Kazuma, 	PAL3, 3, "Kazuma",
		NULL, NULL, NULL, NULL },
	{ &SPR_BtlHB, 	PAL3, 3, "Brown Beetle",
		NULL, &ai_beetle_onUpdate, &ai_default_onState, NULL },
	{ &SPR_Crow, 	PAL3, 3, "Crow",
		NULL, NULL, &ai_default_onState, NULL },
	{ &SPR_Basu, 	PAL3, 3, "Basu",
		&ai_basu_onCreate, &ai_basu_onUpdate, &ai_default_onState, NULL },
	{ &SPR_DoorE, 	PAL1, 2, "Door Enemy",
		NULL, &ai_theDoor_onUpdate, &ai_default_onState, &ai_theDoor_onHurt },
	{ &SPR_Toroko, 	PAL3, 3, "Toroko",
		&ai_op2flip_onCreate, &ai_toroko_onUpdate, &ai_toroko_onState, NULL },
	{ &SPR_King, 	PAL3, 3, "King",
		&ai_op2flip_onCreate, &ai_king_onUpdate, &ai_king_onState, NULL },
	{ &SPR_KazuCom, PAL3, 3, "Kazuma (Computer)",
		&ai_pushdn_onCreate, &ai_kazuComp_onUpdate, NULL, NULL },
	{ &SPR_Toroko, 	PAL3, 3, "Toroko (Attacking)",
		&ai_torokoAtk_onCreate, &ai_toroko_onUpdate, &ai_toroko_onState, NULL },
	/* 0x040 (64) */
	{ &SPR_CritHB, 	PAL2, 3, "Blue Hopping Critter",
		&ai_pushdn_onCreate, &ai_critter_onUpdate, &ai_critter_onState, &ai_critter_onHurt },
	{ &SPR_Bat, 	PAL0, 3, "Bat",
		&ai_batVertical_onCreate, &ai_batVertical_onUpdate, &ai_default_onState, NULL },
	{ &SPR_Bubble, 	PAL0, 3, "Misery's Bubble",
		NULL, &ai_miseryBubble_onUpdate, NULL, NULL },
	{ &SPR_Misery, 	PAL0, 3, "Misery (Floating)",
		NULL, &ai_miseryFloat_onUpdate, &ai_miseryFloat_onState, NULL },
	{ &SPR_Balrog, 	PAL1, 3, "Balrog (First Fight)",
		NULL, &ai_balrogRunning_onUpdate, &ai_balrogRunning_onState, NULL },
	{ &SPR_Pignon, 	PAL1, 3, "Pignon",
		NULL, &ai_pignon_onUpdate, &ai_default_onState, &ai_pignon_onHurt },
	{ &SPR_Sparkle, PAL1, 2, "Sparkling Item",
		NULL, NULL, NULL, NULL },
	{ &SPR_Fish, 	PAL0, 3, "Chinfish",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 2, "Sprinkler",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, 2, "Water Drop",
		NULL, NULL, NULL, NULL },
	{ &SPR_Jack, 	PAL3, 3, "Jack",
		&ai_pushdn_onCreate, &ai_jack_onUpdate, &ai_jack_onState, NULL },
	{ &SPR_Kanpachi, PAL3, 3, "Kanpachi (Fishing)",
		NULL, NULL, NULL, NULL },
	{ &SPR_Flower, 	PAL3, 2, "Flowers",
		&ai_flower_onCreate, NULL, NULL, NULL },
	{ &SPR_Sanda, 	PAL3, 2, "Sandame's Pavilion",
		NULL, NULL, NULL, NULL },
	{ &SPR_Pot, 	PAL1 , 2, "Pot",
		&ai_op2frame_onCreate, NULL, NULL, NULL },
	{ &SPR_Mahin, 	PAL3, 3, "Mahin",
		&ai_pushdn_onCreate, NULL, NULL, NULL },
	/* 0x050 (80) */
	{ &SPR_Keeper, 	PAL1, 3, "Gravekeeper",
		&ai_gkeeper_onCreate, &ai_gkeeper_onUpdate, &ai_default_onState, NULL },
	{ &SPR_PignonB, PAL1, 3, "Big Pignon",
		NULL, &ai_pignon_onUpdate, &ai_default_onState, &ai_pignon_onHurt },
	{ &SPR_Misery, 	PAL0, 3, "Misery (Standing)",
		NULL, NULL, NULL, NULL },
	{ &SPR_Igor, 	PAL3, 3, "Igor (Scene)",
		&ai_igor_onCreate, &ai_igorscene_onUpdate, &ai_igorscene_onState, NULL },
	{ NULL, 		PAL0, 3, "Basu Projectile",
		NULL, NULL, NULL, NULL },
	{ &SPR_Term, 	PAL1, 2, "Terminal",
		NULL, &ai_terminal_onUpdate, NULL, NULL },
	{ &SPR_MisslP, 	PAL1, 3, "Missile",
		&ai_op2anim_onCreate, &ai_missile_onUpdate, NULL, NULL },
	{ &SPR_Heart, 	PAL1, 3, "Heart",
		&ai_op2anim_onCreate, &ai_heart_onUpdate, NULL, NULL },
	{ &SPR_Igor, 	PAL3, 3, "Igor (Boss)",
		&ai_igor_onCreate, &ai_igor_onUpdate, &ai_igor_onState, NULL },
	{ &SPR_Igor, 	PAL3, 3, "Igor (Defeated)",
		&ai_igor_onCreate, &ai_igordead_onUpdate, NULL, NULL },
	{ NULL, 		PAL0, 3, "Nothing",
		NULL, &ai_behemoth_onUpdate, &ai_behemoth_onState, NULL },
	{ &SPR_Cage, 	PAL1, 4, "Cage",
		&ai_pushdn_onCreate, NULL, NULL, NULL },
	{ NULL, 		PAL0, 3, "Sue (Computer)",
		NULL, NULL, NULL, NULL },
	{ &SPR_Chaco, 		PAL3, 3, "Chaco",
		NULL, &ai_chaco_onUpdate, &ai_chaco_onState, NULL },
	{ &SPR_Kulala, 	PAL0, 3, "Kulala",
		NULL, NULL, &ai_default_onState, NULL },
	{ &SPR_Jelly, 	PAL0, 3, "Jelly",
		&ai_op2flip_onCreate, &ai_jelly_onUpdate, &ai_default_onState, &ai_jelly_onHurt },
	/* 0x060 (96) */
	{ &SPR_Fan, 	PAL1, 3, "Fan (Left)",
		&ai_fan_onCreate, &ai_fan_onUpdate, NULL, NULL },
	{ &SPR_Fan, 	PAL1, 3, "Fan (Up)",
		&ai_fan_onCreate, &ai_fan_onUpdate, NULL, NULL },
	{ &SPR_Fan, 	PAL1, 3, "Fan (Right)",
		&ai_fan_onCreate, &ai_fan_onUpdate, NULL, NULL },
	{ &SPR_Fan, 	PAL1, 3, "Fan (Down)",
		&ai_fan_onCreate, &ai_fan_onUpdate, NULL, NULL },
	{ NULL, 		PAL0, 3, "Grate",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL1, 2, "Power Controls (Screen)",
		NULL, NULL, NULL, NULL },
	{ &SPR_Wave, 	PAL1, 2, "Power Controls (Flow)",
		&ai_powerc_onCreate, NULL, NULL, NULL },
	{ &SPR_ManShot, PAL1, 3, "Mannan Projectile",
		NULL, &ai_mannanShot_onUpdate, NULL, NULL },
	{ &SPR_Frog, 	PAL3, 3, "Frog",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Hey! (Low)",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, 3, "Hey! (High)",
		NULL, NULL, NULL, NULL },
	{ &SPR_Malco, 	PAL1, 3, "Malco",
		NULL, &ai_malco_onUpdate, &ai_malco_onUpdate, NULL },
	{ NULL, 		PAL0, 3, "Balfrog Projectile",
		NULL, NULL, NULL, NULL },
	{ &SPR_Malco, 	PAL1, 3, "Malco (Damaged)",
		&ai_malcoBroken_onCreate, NULL, &ai_malcoBroken_onState, NULL },
	{ NULL, 		PAL0, 3, "Puchi",
		NULL, NULL, &ai_default_onState, NULL },
	{ &SPR_Quotele, PAL0, 3, "Quote Teleporting Out",
		&ai_teleOut_onCreate, &ai_teleOut_onUpdate, NULL, NULL },
	/* 0x070 (112) */
	{ &SPR_Quotele, PAL0, 3, "Quote Teleporting In",
		&ai_teleIn_onCreate, &ai_teleIn_onUpdate, NULL, NULL },
	{ &SPR_Booster, PAL3, 3, "Prof. Booster",
		NULL, NULL, NULL, NULL },
	{ &SPR_Press, 	PAL1, 3, "Press",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Ravil",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 2, "Red Flower Petals",
		NULL, NULL, NULL, NULL },
	{ &SPR_Curly, 	PAL3, 3, "Curly",
		&ai_pushdn_onCreate, &ai_curly_onUpdate, &ai_curly_onState, NULL },
	{ &SPR_CurlyB, 	PAL3, 3, "Curly (Boss)",
		&ai_pushdn_onCreate, NULL, &ai_default_onState, NULL },
	{ &SPR_Table, 	PAL1, 2, "Tables & Chair",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, 3, "Colon 1",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Colon 2",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Colon (Enemy)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Curly Projectile",
		NULL, NULL, NULL, NULL },
	{ &SPR_Sunstone, PAL3, 3, "Sunstone",
		&ai_sunstone_onCreate, NULL, NULL, NULL },
	{ NULL, 		PAL0, 3, "Hidden Heart/Missile",
		NULL, &ai_heart_onUpdate, NULL, NULL },
	{ &SPR_Puppy, 	PAL1, 3, "Puppy (Runs Away)",
		&ai_puppy_onCreate, NULL, NULL, NULL },
	{ NULL, 		PAL0, 3, "???",
		NULL, NULL, NULL, NULL },
	/* 0x080 (128) */
	{ NULL, 		PAL0, 3, "???",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, 3, "???",
		NULL, NULL, NULL, NULL },
	{ &SPR_Puppy, 	PAL1, 3, "Puppy (Tail Wag)",
		&ai_puppy_onCreate, NULL, NULL, NULL },
	{ &SPR_Puppy, 	PAL1, 3, "Puppy (Sleeping)",
		&ai_puppy_onCreate, NULL, NULL, NULL },
	{ &SPR_Puppy, 	PAL1, 3, "Puppy (Bark)",
		&ai_puppy_onCreate, NULL, NULL, NULL },
	{ &SPR_Jenka, 	PAL3, 3, "Jenka",
		NULL, NULL, NULL, NULL },
	{ &SPR_Armadl, 	PAL3, 3, "Armadillo",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Skeleton",
		NULL, NULL, &ai_default_onState, NULL },
	{ &SPR_Puppy, 	PAL1, 3, "Puppy (Carried)",
		&ai_puppy_onCreate, NULL, NULL, NULL },
	{ NULL, 		PAL0, 2, "Large Doorway (Frame)",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, 2, "Large Doorway (Doors)",
		NULL, NULL, NULL, NULL },
	{ &SPR_Doctor, 	PAL3, 3, "Doctor (Crowned)",
		NULL, NULL, NULL, NULL },
	{ &SPR_ToroBoss, PAL3, 3, "Frenzied Toroko",
		&ai_torokoBoss_onCreate, &ai_torokoBoss_onUpdate, &ai_torokoBoss_onState, NULL },
	{ NULL, 		PAL0, 3, "???",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, 3, "Flowercub",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Jenka (Collapsed)",
		NULL, NULL, &ai_default_onState, NULL },
	/* 0x090 (144) */
	{ NULL, 		PAL0, 3, "Toroko (Teleport In)",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, 3, "???",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, 3, "Lightning",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, 3, "Purple Critter",
		&ai_pushdn_onCreate, &ai_critter_onUpdate, &ai_critter_onState, &ai_critter_onHurt },
	{ NULL, 		PAL0, 3, "Critter Projectile",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, 3, "Moving Block (Horiz)",
		NULL, NULL, NULL, NULL },
	{ &SPR_Quote, 	PAL0, 3, "Quote",
		NULL, &ai_player_onUpdate, &ai_player_onState, NULL },
	{ &SPR_Robot, 	PAL3, 3, "Blue Robot",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, 3, "Shutter (Stuck)",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, 3, "Gaudi",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Gaudi (Defeated)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Gaudi (Flying)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Gaudi Projectile",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, 3, "Moving Block (Vert)",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, 3, "Monster X Projectile",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, 3, "Monster X (Defeated)",
		NULL, NULL, NULL, NULL },
	/* 0x0A0 (160) */
	{ NULL, 		PAL0, 3, "Pooh Black",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Pooh Black Projectile",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Pooh Black (Defeated)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Dr. Gero",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Nurse Hasumi",
		NULL, NULL, &ai_default_onState, NULL },
	{ &SPR_Curly, 	PAL3, 3, "Curly (Collapsed)",
		NULL, &ai_curly_onUpdate, &ai_curly_onState, NULL },
	{ NULL, 		PAL0, 3, "Chaba",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Prof. Booster (Fall)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Boulder",
		NULL, NULL, &ai_default_onState, NULL },
	{ &SPR_Balrog, 	PAL1, 3, "Balrog (Third Fight)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Balrog Missile",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Fire Whirr",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Fire Whirr Projectile",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Gaudi Armor",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Gaudi Armor Projectile",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Gaudi Egg",
		NULL, NULL, &ai_default_onState, NULL },
	/* 0x0B0 (176) */
	{ NULL, 		PAL0, 3, "Buyobuyo Base",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Buyobuyo",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Core Spinning Projectile",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Core Wisp Projectile",
		NULL, NULL, &ai_default_onState, NULL },
	{ &SPR_Curly, 	PAL3, 3, "Curly (AI)",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, 3, "???",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "???",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "???",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Shutter (Large)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Shutter (Small)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Lift Block",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Fuzz Core",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "???",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Homing Flame Projectile",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Surface Robot",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Water Level",
		NULL, NULL, &ai_default_onState, NULL },
	/* 0x0C0 (192) */
	{ NULL, 		PAL0, 3, "Scooter",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Scooter (Pieces)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL3, 3, "Blue Robot (Pieces)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Grate Mouth",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Motion Wall",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Porcupine Fish",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Ironhead Projectile",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Underwater Current",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Dragon Zombie",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Dragon Zombie (Dead)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Dragon Zombie Projectile",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Blue Hopping Critter",
		&ai_pushdn_onCreate, &ai_critter_onUpdate, &ai_critter_onState, &ai_critter_onHurt },
	{ NULL, 		PAL0, 3, "Falling Spike (Small)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Falling Spike (Large)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Counter Bomb",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Countdown Balloon",
		NULL, NULL, &ai_default_onState, NULL },
	// 0x0D0 (208) */
	{ NULL, 		PAL0, 3, "Basu (2)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Basu Projectile (2)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Green Beetle (Follow 2)",
		NULL, NULL, &ai_default_onState, NULL },
	{ &SPR_Spikes, 	PAL1, 3, "Spikes",
		&ai_spike_onCreate, NULL, NULL, NULL },
	{ NULL, 		PAL0, 3, "Sky Dragon",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Night Spirit",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Night Spirit Projectile",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "White Sandcroc",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Debug Cat",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Itoh",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "???",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Smoke/Current Generator",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Shovel Brigade",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Shovel Brigade (Walking)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Prison Bars",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Momorin",
		NULL, NULL, &ai_default_onState, NULL },
	/* 0x0E0 (224) */
	{ NULL, 		PAL0, 3, "Chie",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Megane",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Kanpachi",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Bucket",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Droll (Guard)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Red Flower Sprouts",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Blooming Red Flowers",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Rocket",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Orangebell",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "???",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Picked Red Flowers",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Midorin",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Gunfish",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Gunfish Projectile",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Lethal Press",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Cage Bars",
		NULL, NULL, &ai_default_onState, NULL },
	/* 0x0F0 (240) */
	{ NULL, 		PAL0, 3, "Jailed Mimiga",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Red Critter",
		&ai_pushdn_onCreate, &ai_critter_onUpdate, &ai_critter_onState, &ai_critter_onHurt },
	{ NULL, 		PAL0, 3, "Red Bat",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Red Bat Generator",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Acid Drop",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Acid Drop Generator",
		NULL, NULL, &ai_default_onState, NULL },
	{ &SPR_Press, 	PAL1, 3, "Press (Proximity)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Misery (Boss)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Misery (Vanish)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Misery Energy Shot",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Misery Lightning Ball",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Misery Lightning",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "???",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Energy Capsule",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Helicopter",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "???",
		NULL, NULL, &ai_default_onState, NULL },
	/* 0x100 (256) */
	{ NULL, 		PAL0, 3, "Doctor (Before Fight)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Red Crystal",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Sleeping Mimiga",
		NULL, NULL, &ai_default_onState, NULL },
	{ &SPR_Curly, 	PAL3, 3, "Curly (Carried)",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, 3, "Shovel Brigade (Caged)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Chie (Caged)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Chaco (Caged)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Doctor (Boss)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Doctor Red Wave",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Doctor Red Ball (Fast)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Doctor Red Ball (Slow)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Muscle Doctor (Boss)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Igor",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Red Energy Bat",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Red Energy",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Underwater Block",
		NULL, NULL, &ai_default_onState, NULL },
	/* 0x110 (272) */
	{ NULL, 		PAL0, 3, "Water Block Generator",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Droll Projectile",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Droll",
		NULL, NULL, &ai_default_onState, NULL },
	{ &SPR_Puppy, 	PAL1, 3, "Puppy (With Item)",
		&ai_puppy_onCreate, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Red Demon",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Red Demon Projectile",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Little Family",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Falling Block (Large)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Sue (Teleport In)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Doctor (Red Energy)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Mini Undead Core",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Misery (Transformed)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Sue (Transformed)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Orange Spinning Shot",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Orange Dot",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Orange Smoke",
		NULL, NULL, &ai_default_onState, NULL },
	/* 0x120 (288) */
	{ NULL, 		PAL0, 3, "Glowing Rock Shot",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Orange Critter",
		&ai_pushdn_onCreate, &ai_critter_onUpdate, &ai_critter_onState, &ai_critter_onHurt },
	{ NULL, 		PAL0, 3, "Orange Bat",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Mini Core (Before Fight)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Quake",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Huge Energy Shot",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Falling Block Generator",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Cloud",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Cloud Generator",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "???",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Doctor (Uncrowned)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Balrog/Misery (Bubble)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Demon Crown",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Fish Missile (Orange)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "???",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "???",
		NULL, NULL, &ai_default_onState, NULL },
	/* 0x130 (304) */
	{ NULL, 		PAL0, 3, "Gaudi (Sitting)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Puppy (Small)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Balrog (Nurse)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Santa (Caged)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Stumpy",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Bute",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Bute (Sword)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Bute (Archer)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Bute Projectile",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Ma Pignon",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Falling (?)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Hopping Enemy (?)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Bute (Defeated)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Mesa",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Mesa (Defeated)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "???",
		NULL, NULL, &ai_default_onState, NULL },
	/* 0x140 (320) */
	{ &SPR_Curly, 	PAL3, 3, "Curly (Hell)",
		NULL, NULL, NULL, NULL },
	{ NULL, 		PAL0, 3, "???",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Deleet",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Bute (Generated)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Bute Generator",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Heavy Press Projectile",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Itoh/Sue (Ending)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "???",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Transmogrifier",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Building Fan",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Rolling",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Ballos Bone Shot",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Ballos Shockwave",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Ballos Lightning",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Sweat",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Ika-chan",
		NULL, NULL, &ai_default_onState, NULL },
	/* 0x150 (336) */
	{ NULL, 		PAL0, 3, "Ika-chan Generator",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Numahachi",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Green Devil",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Green Devil Generator",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Ballos (Boss)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "???",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "???",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "???",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "???",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Ballos Skull Shot",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "???",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Hoppy",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Ballos Spikes",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Statue",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Red Bute (Archer)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Statue (Breakable)",
		NULL, NULL, &ai_default_onState, NULL },
	/* 0x160 (352) */
	{ NULL, 		PAL0, 3, "King (Sword)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Red Bute (Sword)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Kill Zone",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "???",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Balrog (Rescue)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Puppy (Ghost)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Misery (Wind)",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Water Drop Generator",
		NULL, NULL, &ai_default_onState, NULL },
	{ NULL, 		PAL0, 3, "Thank You",
		NULL, NULL, &ai_default_onState, NULL },
	/* ^ 0x168 (360) ^ */
	/* MAJOR BOSSES - Don't exist in npc.tbl, but need AI methods */
	/* 0x169 (361) */
	{ &SPR_Omega, 	PAL3, 3, "Omega",
		&ai_omega_onCreate, &ai_omega_onUpdate, &ai_omega_onState, NULL },
	{ &SPR_Balfrog1, PAL3, 3, "Balfrog",
		&ai_balfrog_onCreate, &ai_balfrog_onUpdate, &ai_balfrog_onState, NULL },
};
