#include "offsets.h"

unsigned int offsets::photon_player = 0x158;
unsigned int offsets::team = 0x79;
unsigned int offsets::name = 0x20;

unsigned int offsets::adresses::player_manager = 135621384;
unsigned int offsets::adresses::boltinventoryservice = 135579304;
unsigned int offsets::adresses::bomb_manager = 135579304;
unsigned int offsets::adresses::game_controller = 135601688;
unsigned int offsets::adresses::photon_network = 135620632;

unsigned int offsets::adresses::LocalSpectatorPawn = 0x68;
unsigned int offsets::adresses::LocalPlayerPawn = 0x70;

unsigned int offsets::fields::PlayerManager_ptr1 = 0x58;
unsigned int offsets::fields::PlayerManager_ptr2 = 0xB8;
unsigned int offsets::fields::PlayerManager_ptr3 = 0x0;

unsigned int offsets::fields::InventoryManager = 0x58;
unsigned int offsets::fields::InventoryManager_static_fields = 0xB8;

unsigned int offsets::fields::player_list = 0x28;
unsigned int offsets::fields::player_list_size = 0x20;

unsigned int offsets::fields::player_main_camera_holder = 0x28;
unsigned int offsets::fields::player_main_camera = 0xE0;
unsigned int offsets::fields::player_main_camera_view = 0x20;
unsigned int offsets::fields::player_main_camera_view_matrix = 0x10;
unsigned int offsets::fields::player_character_view = 0x48;
unsigned int offsets::fields::pbipedmap = 0x48;
unsigned int offsets::fields::pbipedmap_headTransform = 0x20;

unsigned int offsets::fields::player_ptr1 = 0x18;
unsigned int offsets::fields::player_ptr2 = 0x30;
unsigned int offsets::fields::player_ptr3 = 0x18;

unsigned int offsets::fields::photonnetwork_ptr1 = 0x18;
unsigned int offsets::fields::photon_room = 0x170;
unsigned int offsets::fields::room_master_client_id = 0x48;
unsigned int offsets::fields::photon_actor_id = 0x18;
unsigned int offsets::fields::photon_view = 0x148;

unsigned int offsets::fields::weapon_controller = 0xA0;
unsigned int offsets::fields::weapon_parameters = 0xA8;
unsigned int offsets::fields::gun_parameters = 0x160;
unsigned int offsets::fields::damage_struct = 0x140;
unsigned int offsets::fields::damage_struct_headDamage = 0x10;
unsigned int offsets::fields::damage_struct_chestAndArmsDamage = 0x14;
unsigned int offsets::fields::damage_struct_stomachDamage = 0x18;
unsigned int offsets::fields::damage_struct_legsDamage = 0x1C;

unsigned int offsets::fields::accuracy_data = 0x220;
unsigned int offsets::fields::ammo = 0x120;
unsigned int offsets::fields::fire_rate_override = 0x100;
unsigned int offsets::fields::weapon_shoot_block = 0x210;
unsigned int offsets::fields::weapon_shoot_cooldown = 0x230;
unsigned int offsets::fields::weapon_shoot_flag = 0x23C;
unsigned int offsets::fields::weapon_invisibility = 0x90;

unsigned int offsets::fields::rcs_anglePtr = 0x238;
unsigned int offsets::fields::weaponParams_armorPenetration = 0x1A0;
unsigned int offsets::fields::weaponParams_penetrationPower = 0x1A4;
unsigned int offsets::fields::weaponParams_armorPenetrationSafe = 0x258;
unsigned int offsets::fields::weaponParams_penetrationPowerSafe = 0x264;

unsigned int offsets::fields::weapon_id = 0x18;
unsigned int offsets::fields::fast_knife = 0x118;

unsigned int offsets::fields::grenade_state_simple = 0x108;
unsigned int offsets::fields::grenade_state_value = 0x10;
unsigned int offsets::fields::grenade_flag1 = 0x164;
unsigned int offsets::fields::grenade_flag2 = 0x168;
unsigned int offsets::fields::grenade_parameters = 0x108;
unsigned int offsets::fields::grenade_detonation_type = 0x14C;
unsigned int offsets::fields::grenade_detonation_duration = 0x150;
unsigned int offsets::fields::grenade_detonation_safe = 0x1D4;
unsigned int offsets::fields::grenade_radius = 0x154;
unsigned int offsets::fields::grenade_radius_safe = 0x1E0;
unsigned int offsets::fields::grenade_damage = 0x158;
unsigned int offsets::fields::grenade_damage_safe = 0x1EC;
unsigned int offsets::fields::grenade_impulse = 0x164;
unsigned int offsets::fields::grenade_impulse_safe = 0x210;

unsigned int offsets::fields::bombDetonationDuration = 0x114;
unsigned int offsets::fields::bombElapsedTime = 0x48;
unsigned int offsets::fields::plantedBombController = 0xA8;
unsigned int offsets::fields::plantedBombTransform = 0x38;
unsigned int offsets::fields::bombParameters = 0x20;

unsigned int offsets::fields::gameModeSettings = 0xC0;
unsigned int offsets::fields::playerControls = 0x2A0;
unsigned int offsets::fields::playerControls_fstHashset = 0x68;

unsigned int offsets::fields::aim_controller = 0x80;
unsigned int offsets::fields::weaponry_controller = 0x88;
unsigned int offsets::fields::mechanim_controller = 0x90;
unsigned int offsets::fields::movement_controller = 0x98;
unsigned int offsets::fields::arms_animation_controller = 0xA0;
unsigned int offsets::fields::player_hit_controller = 0xA8;
unsigned int offsets::fields::player_occlusion_controller = 0xB0;
unsigned int offsets::fields::network_controller = 0xB8;
unsigned int offsets::fields::arms_lod_group = 0xC0;
unsigned int offsets::fields::player_sound_controller = 0xD8;
unsigned int offsets::fields::character_controller = 0x110;
unsigned int offsets::fields::skinned_mesh_lod_group = 0x118;
unsigned int offsets::fields::character_lod_group = 0x120;
unsigned int offsets::fields::aiming_data = 0x90;

unsigned int offsets::fields::translation_data = 0xB0;

unsigned int offsets::fields::aim_pitch = 0x10;
unsigned int offsets::fields::aim_yaw = 0x14;
unsigned int offsets::fields::aim_pitch2 = 0x38;
unsigned int offsets::fields::aim_yaw2 = 0x3C;

unsigned int offsets::fields::translation_parameters = 0xA8;
unsigned int offsets::fields::translation_parameters_walkParams = 0x38;
unsigned int offsets::fields::translation_parameters_idleParams = 0x40;
unsigned int offsets::fields::translation_parameters_crouchParams = 0x48;
unsigned int offsets::fields::translation_parameters_jumpParams = 0x50;
unsigned int offsets::fields::translation_parameters_characterColliderParams = 0x58;

unsigned int offsets::fields::jump_parameters = 0x50;
unsigned int offsets::fields::mc_character_controller = 0x88;
unsigned int offsets::fields::character_transform = 0xC0;

unsigned int offsets::fields::team_ct = 0x38;
unsigned int offsets::fields::team_tr = 0x40;
