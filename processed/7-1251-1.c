# 1 "/home/giulianob/gcc_git_gnu/gcc/libiberty/dwarfnames.c"
# 1 "/home/giulianob/gcc_git_gnu/build_temp/libiberty//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "/home/giulianob/gcc_git_gnu/gcc/libiberty/dwarfnames.c"
# 30 "/home/giulianob/gcc_git_gnu/gcc/libiberty/dwarfnames.c"
# 1 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/dwarf2.h" 1
# 81 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/dwarf2.h"
# 1 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/dwarf2.def" 1
# 71 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/dwarf2.def"
enum dwarf_tag { DW_TAG_padding = 0x00
, DW_TAG_array_type = 0x01
, DW_TAG_class_type = 0x02
, DW_TAG_entry_point = 0x03
, DW_TAG_enumeration_type = 0x04
, DW_TAG_formal_parameter = 0x05
, DW_TAG_imported_declaration = 0x08
, DW_TAG_label = 0x0a
, DW_TAG_lexical_block = 0x0b
, DW_TAG_member = 0x0d
, DW_TAG_pointer_type = 0x0f
, DW_TAG_reference_type = 0x10
, DW_TAG_compile_unit = 0x11
, DW_TAG_string_type = 0x12
, DW_TAG_structure_type = 0x13
, DW_TAG_subroutine_type = 0x15
, DW_TAG_typedef = 0x16
, DW_TAG_union_type = 0x17
, DW_TAG_unspecified_parameters = 0x18
, DW_TAG_variant = 0x19
, DW_TAG_common_block = 0x1a
, DW_TAG_common_inclusion = 0x1b
, DW_TAG_inheritance = 0x1c
, DW_TAG_inlined_subroutine = 0x1d
, DW_TAG_module = 0x1e
, DW_TAG_ptr_to_member_type = 0x1f
, DW_TAG_set_type = 0x20
, DW_TAG_subrange_type = 0x21
, DW_TAG_with_stmt = 0x22
, DW_TAG_access_declaration = 0x23
, DW_TAG_base_type = 0x24
, DW_TAG_catch_block = 0x25
, DW_TAG_const_type = 0x26
, DW_TAG_constant = 0x27
, DW_TAG_enumerator = 0x28
, DW_TAG_file_type = 0x29
, DW_TAG_friend = 0x2a
, DW_TAG_namelist = 0x2b
, DW_TAG_namelist_item = 0x2c
, DW_TAG_packed_type = 0x2d
, DW_TAG_subprogram = 0x2e
, DW_TAG_template_type_param = 0x2f
, DW_TAG_template_value_param = 0x30
, DW_TAG_thrown_type = 0x31
, DW_TAG_try_block = 0x32
, DW_TAG_variant_part = 0x33
, DW_TAG_variable = 0x34
, DW_TAG_volatile_type = 0x35

, DW_TAG_dwarf_procedure = 0x36
, DW_TAG_restrict_type = 0x37
, DW_TAG_interface_type = 0x38
, DW_TAG_namespace = 0x39
, DW_TAG_imported_module = 0x3a
, DW_TAG_unspecified_type = 0x3b
, DW_TAG_partial_unit = 0x3c
, DW_TAG_imported_unit = 0x3d
, DW_TAG_condition = 0x3f
, DW_TAG_shared_type = 0x40

, DW_TAG_type_unit = 0x41
, DW_TAG_rvalue_reference_type = 0x42
, DW_TAG_template_alias = 0x43

, DW_TAG_coarray_type = 0x44
, DW_TAG_generic_subrange = 0x45
, DW_TAG_dynamic_type = 0x46
, DW_TAG_atomic_type = 0x47
, DW_TAG_call_site = 0x48
, DW_TAG_call_site_parameter = 0x49
, DW_TAG_skeleton_unit = 0x4a
, DW_TAG_immutable_type = 0x4b

, DW_TAG_lo_user = 0x4080
, DW_TAG_hi_user = 0xffff


, DW_TAG_MIPS_loop = 0x4081


, DW_TAG_HP_array_descriptor = 0x4090
, DW_TAG_HP_Bliss_field = 0x4091
, DW_TAG_HP_Bliss_field_set = 0x4092


, DW_TAG_format_label = 0x4101
, DW_TAG_function_template = 0x4102
, DW_TAG_class_template = 0x4103
, DW_TAG_GNU_BINCL = 0x4104
, DW_TAG_GNU_EINCL = 0x4105


, DW_TAG_GNU_template_template_param = 0x4106





, DW_TAG_GNU_template_parameter_pack = 0x4107
, DW_TAG_GNU_formal_parameter_pack = 0x4108




, DW_TAG_GNU_call_site = 0x4109
, DW_TAG_GNU_call_site_parameter = 0x410a

, DW_TAG_upc_shared_type = 0x8765
, DW_TAG_upc_strict_type = 0x8766
, DW_TAG_upc_relaxed_type = 0x8767

, DW_TAG_PGI_kanji_type = 0xA000
, DW_TAG_PGI_interface_block = 0xA020
};

enum dwarf_form { DW_FORM_addr = 0x01
, DW_FORM_block2 = 0x03
, DW_FORM_block4 = 0x04
, DW_FORM_data2 = 0x05
, DW_FORM_data4 = 0x06
, DW_FORM_data8 = 0x07
, DW_FORM_string = 0x08
, DW_FORM_block = 0x09
, DW_FORM_block1 = 0x0a
, DW_FORM_data1 = 0x0b
, DW_FORM_flag = 0x0c
, DW_FORM_sdata = 0x0d
, DW_FORM_strp = 0x0e
, DW_FORM_udata = 0x0f
, DW_FORM_ref_addr = 0x10
, DW_FORM_ref1 = 0x11
, DW_FORM_ref2 = 0x12
, DW_FORM_ref4 = 0x13
, DW_FORM_ref8 = 0x14
, DW_FORM_ref_udata = 0x15
, DW_FORM_indirect = 0x16

, DW_FORM_sec_offset = 0x17
, DW_FORM_exprloc = 0x18
, DW_FORM_flag_present = 0x19
, DW_FORM_ref_sig8 = 0x20

, DW_FORM_strx = 0x1a
, DW_FORM_addrx = 0x1b
, DW_FORM_ref_sup4 = 0x1c
, DW_FORM_strp_sup = 0x1d
, DW_FORM_data16 = 0x1e
, DW_FORM_line_strp = 0x1f
, DW_FORM_implicit_const = 0x21
, DW_FORM_loclistx = 0x22
, DW_FORM_rnglistx = 0x23
, DW_FORM_ref_sup8 = 0x24
, DW_FORM_strx1 = 0x25
, DW_FORM_strx2 = 0x26
, DW_FORM_strx3 = 0x27
, DW_FORM_strx4 = 0x28
, DW_FORM_addrx1 = 0x29
, DW_FORM_addrx2 = 0x2a
, DW_FORM_addrx3 = 0x2b
, DW_FORM_addrx4 = 0x2c

, DW_FORM_GNU_addr_index = 0x1f01
, DW_FORM_GNU_str_index = 0x1f02


, DW_FORM_GNU_ref_alt = 0x1f20
, DW_FORM_GNU_strp_alt = 0x1f21
};

enum dwarf_attribute { DW_AT_sibling = 0x01
, DW_AT_location = 0x02
, DW_AT_name = 0x03
, DW_AT_ordering = 0x09
, DW_AT_subscr_data = 0x0a
, DW_AT_byte_size = 0x0b
, DW_AT_bit_offset = 0x0c
, DW_AT_bit_size = 0x0d
, DW_AT_element_list = 0x0f
, DW_AT_stmt_list = 0x10
, DW_AT_low_pc = 0x11
, DW_AT_high_pc = 0x12
, DW_AT_language = 0x13
, DW_AT_member = 0x14
, DW_AT_discr = 0x15
, DW_AT_discr_value = 0x16
, DW_AT_visibility = 0x17
, DW_AT_import = 0x18
, DW_AT_string_length = 0x19
, DW_AT_common_reference = 0x1a
, DW_AT_comp_dir = 0x1b
, DW_AT_const_value = 0x1c
, DW_AT_containing_type = 0x1d
, DW_AT_default_value = 0x1e
, DW_AT_inline = 0x20
, DW_AT_is_optional = 0x21
, DW_AT_lower_bound = 0x22
, DW_AT_producer = 0x25
, DW_AT_prototyped = 0x27
, DW_AT_return_addr = 0x2a
, DW_AT_start_scope = 0x2c
, DW_AT_bit_stride = 0x2e
, DW_AT_upper_bound = 0x2f
, DW_AT_abstract_origin = 0x31
, DW_AT_accessibility = 0x32
, DW_AT_address_class = 0x33
, DW_AT_artificial = 0x34
, DW_AT_base_types = 0x35
, DW_AT_calling_convention = 0x36
, DW_AT_count = 0x37
, DW_AT_data_member_location = 0x38
, DW_AT_decl_column = 0x39
, DW_AT_decl_file = 0x3a
, DW_AT_decl_line = 0x3b
, DW_AT_declaration = 0x3c
, DW_AT_discr_list = 0x3d
, DW_AT_encoding = 0x3e
, DW_AT_external = 0x3f
, DW_AT_frame_base = 0x40
, DW_AT_friend = 0x41
, DW_AT_identifier_case = 0x42
, DW_AT_macro_info = 0x43
, DW_AT_namelist_items = 0x44
, DW_AT_priority = 0x45
, DW_AT_segment = 0x46
, DW_AT_specification = 0x47
, DW_AT_static_link = 0x48
, DW_AT_type = 0x49
, DW_AT_use_location = 0x4a
, DW_AT_variable_parameter = 0x4b
, DW_AT_virtuality = 0x4c
, DW_AT_vtable_elem_location = 0x4d

, DW_AT_allocated = 0x4e
, DW_AT_associated = 0x4f
, DW_AT_data_location = 0x50
, DW_AT_byte_stride = 0x51
, DW_AT_entry_pc = 0x52
, DW_AT_use_UTF8 = 0x53
, DW_AT_extension = 0x54
, DW_AT_ranges = 0x55
, DW_AT_trampoline = 0x56
, DW_AT_call_column = 0x57
, DW_AT_call_file = 0x58
, DW_AT_call_line = 0x59
, DW_AT_description = 0x5a
, DW_AT_binary_scale = 0x5b
, DW_AT_decimal_scale = 0x5c
, DW_AT_small = 0x5d
, DW_AT_decimal_sign = 0x5e
, DW_AT_digit_count = 0x5f
, DW_AT_picture_string = 0x60
, DW_AT_mutable = 0x61
, DW_AT_threads_scaled = 0x62
, DW_AT_explicit = 0x63
, DW_AT_object_pointer = 0x64
, DW_AT_endianity = 0x65
, DW_AT_elemental = 0x66
, DW_AT_pure = 0x67
, DW_AT_recursive = 0x68

, DW_AT_signature = 0x69
, DW_AT_main_subprogram = 0x6a
, DW_AT_data_bit_offset = 0x6b
, DW_AT_const_expr = 0x6c
, DW_AT_enum_class = 0x6d
, DW_AT_linkage_name = 0x6e

, DW_AT_string_length_bit_size = 0x6f
, DW_AT_string_length_byte_size = 0x70
, DW_AT_rank = 0x71
, DW_AT_str_offsets_base = 0x72
, DW_AT_addr_base = 0x73
, DW_AT_rnglists_base = 0x74
, DW_AT_dwo_name = 0x76
, DW_AT_reference = 0x77
, DW_AT_rvalue_reference = 0x78
, DW_AT_macros = 0x79
, DW_AT_call_all_calls = 0x7a
, DW_AT_call_all_source_calls = 0x7b
, DW_AT_call_all_tail_calls = 0x7c
, DW_AT_call_return_pc = 0x7d
, DW_AT_call_value = 0x7e
, DW_AT_call_origin = 0x7f
, DW_AT_call_parameter = 0x80
, DW_AT_call_pc = 0x81
, DW_AT_call_tail_call = 0x82
, DW_AT_call_target = 0x83
, DW_AT_call_target_clobbered = 0x84
, DW_AT_call_data_location = 0x85
, DW_AT_call_data_value = 0x86
, DW_AT_noreturn = 0x87
, DW_AT_alignment = 0x88
, DW_AT_export_symbols = 0x89
, DW_AT_deleted = 0x8a
, DW_AT_defaulted = 0x8b
, DW_AT_loclists_base = 0x8c

, DW_AT_lo_user = 0x2000
, DW_AT_hi_user = 0x3fff


, DW_AT_MIPS_fde = 0x2001
, DW_AT_MIPS_loop_begin = 0x2002
, DW_AT_MIPS_tail_loop_begin = 0x2003
, DW_AT_MIPS_epilog_begin = 0x2004
, DW_AT_MIPS_loop_unroll_factor = 0x2005
, DW_AT_MIPS_software_pipeline_depth = 0x2006
, DW_AT_MIPS_linkage_name = 0x2007
, DW_AT_MIPS_stride = 0x2008
, DW_AT_MIPS_abstract_name = 0x2009
, DW_AT_MIPS_clone_origin = 0x200a
, DW_AT_MIPS_has_inlines = 0x200b

, DW_AT_HP_block_index = 0x2000
, DW_AT_HP_unmodifiable = 0x2001
, DW_AT_HP_prologue = 0x2005
, DW_AT_HP_epilogue = 0x2008
, DW_AT_HP_actuals_stmt_list = 0x2010
, DW_AT_HP_proc_per_section = 0x2011
, DW_AT_HP_raw_data_ptr = 0x2012
, DW_AT_HP_pass_by_reference = 0x2013
, DW_AT_HP_opt_level = 0x2014
, DW_AT_HP_prof_version_id = 0x2015
, DW_AT_HP_opt_flags = 0x2016
, DW_AT_HP_cold_region_low_pc = 0x2017
, DW_AT_HP_cold_region_high_pc = 0x2018
, DW_AT_HP_all_variables_modifiable = 0x2019
, DW_AT_HP_linkage_name = 0x201a
, DW_AT_HP_prof_flags = 0x201b
, DW_AT_HP_unit_name = 0x201f
, DW_AT_HP_unit_size = 0x2020
, DW_AT_HP_widened_byte_size = 0x2021
, DW_AT_HP_definition_points = 0x2022
, DW_AT_HP_default_location = 0x2023
, DW_AT_HP_is_result_param = 0x2029


, DW_AT_sf_names = 0x2101
, DW_AT_src_info = 0x2102
, DW_AT_mac_info = 0x2103
, DW_AT_src_coords = 0x2104
, DW_AT_body_begin = 0x2105
, DW_AT_body_end = 0x2106
, DW_AT_GNU_vector = 0x2107


, DW_AT_GNU_guarded_by = 0x2108
, DW_AT_GNU_pt_guarded_by = 0x2109
, DW_AT_GNU_guarded = 0x210a
, DW_AT_GNU_pt_guarded = 0x210b
, DW_AT_GNU_locks_excluded = 0x210c
, DW_AT_GNU_exclusive_locks_required = 0x210d
, DW_AT_GNU_shared_locks_required = 0x210e


, DW_AT_GNU_odr_signature = 0x210f


, DW_AT_GNU_template_name = 0x2110


, DW_AT_GNU_call_site_value = 0x2111
, DW_AT_GNU_call_site_data_value = 0x2112
, DW_AT_GNU_call_site_target = 0x2113
, DW_AT_GNU_call_site_target_clobbered = 0x2114
, DW_AT_GNU_tail_call = 0x2115
, DW_AT_GNU_all_tail_call_sites = 0x2116
, DW_AT_GNU_all_call_sites = 0x2117
, DW_AT_GNU_all_source_call_sites = 0x2118

, DW_AT_GNU_macros = 0x2119

, DW_AT_GNU_deleted = 0x211a

, DW_AT_GNU_dwo_name = 0x2130
, DW_AT_GNU_dwo_id = 0x2131
, DW_AT_GNU_ranges_base = 0x2132
, DW_AT_GNU_addr_base = 0x2133
, DW_AT_GNU_pubnames = 0x2134
, DW_AT_GNU_pubtypes = 0x2135


, DW_AT_GNU_discriminator = 0x2136
, DW_AT_GNU_locviews = 0x2137
, DW_AT_GNU_entry_view = 0x2138

, DW_AT_VMS_rtnbeg_pd_address = 0x2201



, DW_AT_use_GNAT_descriptive_type = 0x2301
, DW_AT_GNAT_descriptive_type = 0x2302


, DW_AT_GNU_numerator = 0x2303
, DW_AT_GNU_denominator = 0x2304


, DW_AT_GNU_bias = 0x2305

, DW_AT_upc_threads_scaled = 0x3210

, DW_AT_PGI_lbase = 0x3a00
, DW_AT_PGI_soffset = 0x3a01
, DW_AT_PGI_lstride = 0x3a02

, DW_AT_APPLE_optimized = 0x3fe1
, DW_AT_APPLE_flags = 0x3fe2
, DW_AT_APPLE_isa = 0x3fe3
, DW_AT_APPLE_block = 0x3fe4
, DW_AT_APPLE_major_runtime_vers = 0x3fe5
, DW_AT_APPLE_runtime_class = 0x3fe6
, DW_AT_APPLE_omit_frame_ptr = 0x3fe7
, DW_AT_APPLE_property_name = 0x3fe8
, DW_AT_APPLE_property_getter = 0x3fe9
, DW_AT_APPLE_property_setter = 0x3fea
, DW_AT_APPLE_property_attribute = 0x3feb
, DW_AT_APPLE_objc_complete_type = 0x3fec
, DW_AT_APPLE_property = 0x3fed
};

enum dwarf_location_atom { DW_OP_addr = 0x03
, DW_OP_deref = 0x06
, DW_OP_const1u = 0x08
, DW_OP_const1s = 0x09
, DW_OP_const2u = 0x0a
, DW_OP_const2s = 0x0b
, DW_OP_const4u = 0x0c
, DW_OP_const4s = 0x0d
, DW_OP_const8u = 0x0e
, DW_OP_const8s = 0x0f
, DW_OP_constu = 0x10
, DW_OP_consts = 0x11
, DW_OP_dup = 0x12
, DW_OP_drop = 0x13
, DW_OP_over = 0x14
, DW_OP_pick = 0x15
, DW_OP_swap = 0x16
, DW_OP_rot = 0x17
, DW_OP_xderef = 0x18
, DW_OP_abs = 0x19
, DW_OP_and = 0x1a
, DW_OP_div = 0x1b
, DW_OP_minus = 0x1c
, DW_OP_mod = 0x1d
, DW_OP_mul = 0x1e
, DW_OP_neg = 0x1f
, DW_OP_not = 0x20
, DW_OP_or = 0x21
, DW_OP_plus = 0x22
, DW_OP_plus_uconst = 0x23
, DW_OP_shl = 0x24
, DW_OP_shr = 0x25
, DW_OP_shra = 0x26
, DW_OP_xor = 0x27
, DW_OP_bra = 0x28
, DW_OP_eq = 0x29
, DW_OP_ge = 0x2a
, DW_OP_gt = 0x2b
, DW_OP_le = 0x2c
, DW_OP_lt = 0x2d
, DW_OP_ne = 0x2e
, DW_OP_skip = 0x2f
, DW_OP_lit0 = 0x30
, DW_OP_lit1 = 0x31
, DW_OP_lit2 = 0x32
, DW_OP_lit3 = 0x33
, DW_OP_lit4 = 0x34
, DW_OP_lit5 = 0x35
, DW_OP_lit6 = 0x36
, DW_OP_lit7 = 0x37
, DW_OP_lit8 = 0x38
, DW_OP_lit9 = 0x39
, DW_OP_lit10 = 0x3a
, DW_OP_lit11 = 0x3b
, DW_OP_lit12 = 0x3c
, DW_OP_lit13 = 0x3d
, DW_OP_lit14 = 0x3e
, DW_OP_lit15 = 0x3f
, DW_OP_lit16 = 0x40
, DW_OP_lit17 = 0x41
, DW_OP_lit18 = 0x42
, DW_OP_lit19 = 0x43
, DW_OP_lit20 = 0x44
, DW_OP_lit21 = 0x45
, DW_OP_lit22 = 0x46
, DW_OP_lit23 = 0x47
, DW_OP_lit24 = 0x48
, DW_OP_lit25 = 0x49
, DW_OP_lit26 = 0x4a
, DW_OP_lit27 = 0x4b
, DW_OP_lit28 = 0x4c
, DW_OP_lit29 = 0x4d
, DW_OP_lit30 = 0x4e
, DW_OP_lit31 = 0x4f
, DW_OP_reg0 = 0x50
, DW_OP_reg1 = 0x51
, DW_OP_reg2 = 0x52
, DW_OP_reg3 = 0x53
, DW_OP_reg4 = 0x54
, DW_OP_reg5 = 0x55
, DW_OP_reg6 = 0x56
, DW_OP_reg7 = 0x57
, DW_OP_reg8 = 0x58
, DW_OP_reg9 = 0x59
, DW_OP_reg10 = 0x5a
, DW_OP_reg11 = 0x5b
, DW_OP_reg12 = 0x5c
, DW_OP_reg13 = 0x5d
, DW_OP_reg14 = 0x5e
, DW_OP_reg15 = 0x5f
, DW_OP_reg16 = 0x60
, DW_OP_reg17 = 0x61
, DW_OP_reg18 = 0x62
, DW_OP_reg19 = 0x63
, DW_OP_reg20 = 0x64
, DW_OP_reg21 = 0x65
, DW_OP_reg22 = 0x66
, DW_OP_reg23 = 0x67
, DW_OP_reg24 = 0x68
, DW_OP_reg25 = 0x69
, DW_OP_reg26 = 0x6a
, DW_OP_reg27 = 0x6b
, DW_OP_reg28 = 0x6c
, DW_OP_reg29 = 0x6d
, DW_OP_reg30 = 0x6e
, DW_OP_reg31 = 0x6f
, DW_OP_breg0 = 0x70
, DW_OP_breg1 = 0x71
, DW_OP_breg2 = 0x72
, DW_OP_breg3 = 0x73
, DW_OP_breg4 = 0x74
, DW_OP_breg5 = 0x75
, DW_OP_breg6 = 0x76
, DW_OP_breg7 = 0x77
, DW_OP_breg8 = 0x78
, DW_OP_breg9 = 0x79
, DW_OP_breg10 = 0x7a
, DW_OP_breg11 = 0x7b
, DW_OP_breg12 = 0x7c
, DW_OP_breg13 = 0x7d
, DW_OP_breg14 = 0x7e
, DW_OP_breg15 = 0x7f
, DW_OP_breg16 = 0x80
, DW_OP_breg17 = 0x81
, DW_OP_breg18 = 0x82
, DW_OP_breg19 = 0x83
, DW_OP_breg20 = 0x84
, DW_OP_breg21 = 0x85
, DW_OP_breg22 = 0x86
, DW_OP_breg23 = 0x87
, DW_OP_breg24 = 0x88
, DW_OP_breg25 = 0x89
, DW_OP_breg26 = 0x8a
, DW_OP_breg27 = 0x8b
, DW_OP_breg28 = 0x8c
, DW_OP_breg29 = 0x8d
, DW_OP_breg30 = 0x8e
, DW_OP_breg31 = 0x8f
, DW_OP_regx = 0x90
, DW_OP_fbreg = 0x91
, DW_OP_bregx = 0x92
, DW_OP_piece = 0x93
, DW_OP_deref_size = 0x94
, DW_OP_xderef_size = 0x95
, DW_OP_nop = 0x96

, DW_OP_push_object_address = 0x97
, DW_OP_call2 = 0x98
, DW_OP_call4 = 0x99
, DW_OP_call_ref = 0x9a
, DW_OP_form_tls_address = 0x9b
, DW_OP_call_frame_cfa = 0x9c
, DW_OP_bit_piece = 0x9d


, DW_OP_implicit_value = 0x9e
, DW_OP_stack_value = 0x9f


, DW_OP_implicit_pointer = 0xa0
, DW_OP_addrx = 0xa1
, DW_OP_constx = 0xa2
, DW_OP_entry_value = 0xa3
, DW_OP_const_type = 0xa4
, DW_OP_regval_type = 0xa5
, DW_OP_deref_type = 0xa6
, DW_OP_xderef_type = 0xa7
, DW_OP_convert = 0xa8
, DW_OP_reinterpret = 0xa9

, DW_OP_lo_user = 0xe0
, DW_OP_hi_user = 0xff


, DW_OP_GNU_push_tls_address = 0xe0

, DW_OP_GNU_uninit = 0xf0
, DW_OP_GNU_encoded_addr = 0xf1


, DW_OP_GNU_implicit_pointer = 0xf2


, DW_OP_GNU_entry_value = 0xf3


, DW_OP_GNU_const_type = 0xf4
, DW_OP_GNU_regval_type = 0xf5
, DW_OP_GNU_deref_type = 0xf6
, DW_OP_GNU_convert = 0xf7
, DW_OP_GNU_reinterpret = 0xf9

, DW_OP_GNU_parameter_ref = 0xfa

, DW_OP_GNU_addr_index = 0xfb
, DW_OP_GNU_const_index = 0xfc


, DW_OP_GNU_variable_value = 0xfd

, DW_OP_HP_unknown = 0xe0
, DW_OP_HP_is_value = 0xe1
, DW_OP_HP_fltconst4 = 0xe2
, DW_OP_HP_fltconst8 = 0xe3
, DW_OP_HP_mod_range = 0xe4
, DW_OP_HP_unmod_range = 0xe5
, DW_OP_HP_tls = 0xe6

, DW_OP_PGI_omp_thread_num = 0xf8





, DW_OP_AARCH64_operation = 0xea
};

enum dwarf_type { DW_ATE_void = 0x0
, DW_ATE_address = 0x1
, DW_ATE_boolean = 0x2
, DW_ATE_complex_float = 0x3
, DW_ATE_float = 0x4
, DW_ATE_signed = 0x5
, DW_ATE_signed_char = 0x6
, DW_ATE_unsigned = 0x7
, DW_ATE_unsigned_char = 0x8

, DW_ATE_imaginary_float = 0x9
, DW_ATE_packed_decimal = 0xa
, DW_ATE_numeric_string = 0xb
, DW_ATE_edited = 0xc
, DW_ATE_signed_fixed = 0xd
, DW_ATE_unsigned_fixed = 0xe
, DW_ATE_decimal_float = 0xf

, DW_ATE_UTF = 0x10

, DW_ATE_UCS = 0x11
, DW_ATE_ASCII = 0x12

, DW_ATE_lo_user = 0x80
, DW_ATE_hi_user = 0xff


, DW_ATE_HP_float80 = 0x80
, DW_ATE_HP_complex_float80 = 0x81
, DW_ATE_HP_float128 = 0x82
, DW_ATE_HP_complex_float128 = 0x83
, DW_ATE_HP_floathpintel = 0x84
, DW_ATE_HP_imaginary_float80 = 0x85
, DW_ATE_HP_imaginary_float128 = 0x86
, DW_ATE_HP_VAX_float = 0x88
, DW_ATE_HP_VAX_float_d = 0x89
, DW_ATE_HP_packed_decimal = 0x8a
, DW_ATE_HP_zoned_decimal = 0x8b
, DW_ATE_HP_edited = 0x8c
, DW_ATE_HP_signed_fixed = 0x8d
, DW_ATE_HP_unsigned_fixed = 0x8e
, DW_ATE_HP_VAX_complex_float = 0x8f
, DW_ATE_HP_VAX_complex_float_d = 0x90

};

enum dwarf_call_frame_info { DW_CFA_advance_loc = 0x40
, DW_CFA_offset = 0x80
, DW_CFA_restore = 0xc0
, DW_CFA_nop = 0x00
, DW_CFA_set_loc = 0x01
, DW_CFA_advance_loc1 = 0x02
, DW_CFA_advance_loc2 = 0x03
, DW_CFA_advance_loc4 = 0x04
, DW_CFA_offset_extended = 0x05
, DW_CFA_restore_extended = 0x06
, DW_CFA_undefined = 0x07
, DW_CFA_same_value = 0x08
, DW_CFA_register = 0x09
, DW_CFA_remember_state = 0x0a
, DW_CFA_restore_state = 0x0b
, DW_CFA_def_cfa = 0x0c
, DW_CFA_def_cfa_register = 0x0d
, DW_CFA_def_cfa_offset = 0x0e

, DW_CFA_def_cfa_expression = 0x0f
, DW_CFA_expression = 0x10
, DW_CFA_offset_extended_sf = 0x11
, DW_CFA_def_cfa_sf = 0x12
, DW_CFA_def_cfa_offset_sf = 0x13
, DW_CFA_val_offset = 0x14
, DW_CFA_val_offset_sf = 0x15
, DW_CFA_val_expression = 0x16

, DW_CFA_lo_user = 0x1c
, DW_CFA_hi_user = 0x3f


, DW_CFA_MIPS_advance_loc8 = 0x1d


, DW_CFA_GNU_window_save = 0x2d
, DW_CFA_AARCH64_negate_ra_state = 0x2d
, DW_CFA_GNU_args_size = 0x2e
, DW_CFA_GNU_negative_offset_extended = 0x2f

};


enum dwarf_name_index_attribute { DW_IDX_compile_unit = 1
, DW_IDX_type_unit = 2
, DW_IDX_die_offset = 3
, DW_IDX_parent = 4
, DW_IDX_type_hash = 5
, DW_IDX_lo_user = 0x2000
, DW_IDX_hi_user = 0x3fff
, DW_IDX_GNU_internal = 0x2000
, DW_IDX_GNU_external = 0x2001
};
# 82 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/dwarf2.h" 2
# 120 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/dwarf2.h"
enum dwarf_decimal_sign_encoding
  {

    DW_DS_unsigned = 0x01,
    DW_DS_leading_overpunch = 0x02,
    DW_DS_trailing_overpunch = 0x03,
    DW_DS_leading_separate = 0x04,
    DW_DS_trailing_separate = 0x05
  };


enum dwarf_endianity_encoding
  {

    DW_END_default = 0x00,
    DW_END_big = 0x01,
    DW_END_little = 0x02,

    DW_END_lo_user = 0x40,
    DW_END_hi_user = 0xff
  };


enum dwarf_array_dim_ordering
  {
    DW_ORD_row_major = 0,
    DW_ORD_col_major = 1
  };


enum dwarf_access_attribute
  {
    DW_ACCESS_public = 1,
    DW_ACCESS_protected = 2,
    DW_ACCESS_private = 3
  };


enum dwarf_visibility_attribute
  {
    DW_VIS_local = 1,
    DW_VIS_exported = 2,
    DW_VIS_qualified = 3
  };


enum dwarf_virtuality_attribute
  {
    DW_VIRTUALITY_none = 0,
    DW_VIRTUALITY_virtual = 1,
    DW_VIRTUALITY_pure_virtual = 2
  };


enum dwarf_id_case
  {
    DW_ID_case_sensitive = 0,
    DW_ID_up_case = 1,
    DW_ID_down_case = 2,
    DW_ID_case_insensitive = 3
  };


enum dwarf_calling_convention
  {
    DW_CC_normal = 0x1,
    DW_CC_program = 0x2,
    DW_CC_nocall = 0x3,


    DW_CC_pass_by_reference = 0x4,
    DW_CC_pass_by_value = 0x5,

    DW_CC_lo_user = 0x40,
    DW_CC_hi_user = 0xff,

    DW_CC_GNU_renesas_sh = 0x40,
    DW_CC_GNU_borland_fastcall_i386 = 0x41,







    DW_CC_GDB_IBM_OpenCL = 0xff
  };


enum dwarf_inline_attribute
  {
    DW_INL_not_inlined = 0,
    DW_INL_inlined = 1,
    DW_INL_declared_not_inlined = 2,
    DW_INL_declared_inlined = 3
  };


enum dwarf_discrim_list
  {
    DW_DSC_label = 0,
    DW_DSC_range = 1
  };


enum dwarf_line_number_ops
  {
    DW_LNS_extended_op = 0,
    DW_LNS_copy = 1,
    DW_LNS_advance_pc = 2,
    DW_LNS_advance_line = 3,
    DW_LNS_set_file = 4,
    DW_LNS_set_column = 5,
    DW_LNS_negate_stmt = 6,
    DW_LNS_set_basic_block = 7,
    DW_LNS_const_add_pc = 8,
    DW_LNS_fixed_advance_pc = 9,

    DW_LNS_set_prologue_end = 10,
    DW_LNS_set_epilogue_begin = 11,
    DW_LNS_set_isa = 12
  };


enum dwarf_line_number_x_ops
  {
    DW_LNE_end_sequence = 1,
    DW_LNE_set_address = 2,
    DW_LNE_define_file = 3,
    DW_LNE_set_discriminator = 4,

    DW_LNE_HP_negate_is_UV_update = 0x11,
    DW_LNE_HP_push_context = 0x12,
    DW_LNE_HP_pop_context = 0x13,
    DW_LNE_HP_set_file_line_column = 0x14,
    DW_LNE_HP_set_routine_name = 0x15,
    DW_LNE_HP_set_sequence = 0x16,
    DW_LNE_HP_negate_post_semantics = 0x17,
    DW_LNE_HP_negate_function_exit = 0x18,
    DW_LNE_HP_negate_front_end_logical = 0x19,
    DW_LNE_HP_define_proc = 0x20,
    DW_LNE_HP_source_file_correlation = 0x80,

    DW_LNE_lo_user = 0x80,
    DW_LNE_hi_user = 0xff
  };


enum dwarf_line_number_hp_sfc_ops
  {
    DW_LNE_HP_SFC_formfeed = 1,
    DW_LNE_HP_SFC_set_listing_line = 2,
    DW_LNE_HP_SFC_associate = 3
  };



enum dwarf_line_number_content_type
  {
    DW_LNCT_path = 0x1,
    DW_LNCT_directory_index = 0x2,
    DW_LNCT_timestamp = 0x3,
    DW_LNCT_size = 0x4,
    DW_LNCT_MD5 = 0x5,
    DW_LNCT_lo_user = 0x2000,
    DW_LNCT_hi_user = 0x3fff
  };


enum dwarf_location_list_entry_type
  {
    DW_LLE_end_of_list = 0x00,
    DW_LLE_base_addressx = 0x01,
    DW_LLE_startx_endx = 0x02,
    DW_LLE_startx_length = 0x03,
    DW_LLE_offset_pair = 0x04,
    DW_LLE_default_location = 0x05,
    DW_LLE_base_address = 0x06,
    DW_LLE_start_end = 0x07,
    DW_LLE_start_length = 0x08,






    DW_LLE_GNU_view_pair = 0x09,




    DW_LLE_GNU_end_of_list_entry = 0x00,
    DW_LLE_GNU_base_address_selection_entry = 0x01,
    DW_LLE_GNU_start_end_entry = 0x02,
    DW_LLE_GNU_start_length_entry = 0x03
  };
# 329 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/dwarf2.h"
enum dwarf_source_language
  {
    DW_LANG_C89 = 0x0001,
    DW_LANG_C = 0x0002,
    DW_LANG_Ada83 = 0x0003,
    DW_LANG_C_plus_plus = 0x0004,
    DW_LANG_Cobol74 = 0x0005,
    DW_LANG_Cobol85 = 0x0006,
    DW_LANG_Fortran77 = 0x0007,
    DW_LANG_Fortran90 = 0x0008,
    DW_LANG_Pascal83 = 0x0009,
    DW_LANG_Modula2 = 0x000a,

    DW_LANG_Java = 0x000b,
    DW_LANG_C99 = 0x000c,
    DW_LANG_Ada95 = 0x000d,
    DW_LANG_Fortran95 = 0x000e,
    DW_LANG_PLI = 0x000f,
    DW_LANG_ObjC = 0x0010,
    DW_LANG_ObjC_plus_plus = 0x0011,
    DW_LANG_UPC = 0x0012,
    DW_LANG_D = 0x0013,

    DW_LANG_Python = 0x0014,

    DW_LANG_OpenCL = 0x0015,
    DW_LANG_Go = 0x0016,
    DW_LANG_Modula3 = 0x0017,
    DW_LANG_Haskell = 0x0018,
    DW_LANG_C_plus_plus_03 = 0x0019,
    DW_LANG_C_plus_plus_11 = 0x001a,
    DW_LANG_OCaml = 0x001b,
    DW_LANG_Rust = 0x001c,
    DW_LANG_C11 = 0x001d,
    DW_LANG_Swift = 0x001e,
    DW_LANG_Julia = 0x001f,
    DW_LANG_Dylan = 0x0020,
    DW_LANG_C_plus_plus_14 = 0x0021,
    DW_LANG_Fortran03 = 0x0022,
    DW_LANG_Fortran08 = 0x0023,
    DW_LANG_RenderScript = 0x0024,

    DW_LANG_lo_user = 0x8000,
    DW_LANG_hi_user = 0xffff,


    DW_LANG_Mips_Assembler = 0x8001,

    DW_LANG_Upc = 0x8765,

    DW_LANG_HP_Bliss = 0x8003,
    DW_LANG_HP_Basic91 = 0x8004,
    DW_LANG_HP_Pascal91 = 0x8005,
    DW_LANG_HP_IMacro = 0x8006,
    DW_LANG_HP_Assembler = 0x8007,


    DW_LANG_Rust_old = 0x9000
  };


enum dwarf_macinfo_record_type
  {
    DW_MACINFO_define = 1,
    DW_MACINFO_undef = 2,
    DW_MACINFO_start_file = 3,
    DW_MACINFO_end_file = 4,
    DW_MACINFO_vendor_ext = 255
  };


enum dwarf_defaulted_attribute
  {
    DW_DEFAULTED_no = 0x00,
    DW_DEFAULTED_in_class = 0x01,
    DW_DEFAULTED_out_of_class = 0x02
  };


enum dwarf_macro_record_type
  {
    DW_MACRO_define = 0x01,
    DW_MACRO_undef = 0x02,
    DW_MACRO_start_file = 0x03,
    DW_MACRO_end_file = 0x04,
    DW_MACRO_define_strp = 0x05,
    DW_MACRO_undef_strp = 0x06,
    DW_MACRO_import = 0x07,
    DW_MACRO_define_sup = 0x08,
    DW_MACRO_undef_sup = 0x09,
    DW_MACRO_import_sup = 0x0a,
    DW_MACRO_define_strx = 0x0b,
    DW_MACRO_undef_strx = 0x0c,
    DW_MACRO_lo_user = 0xe0,
    DW_MACRO_hi_user = 0xff,


    DW_MACRO_GNU_define = 0x01,
    DW_MACRO_GNU_undef = 0x02,
    DW_MACRO_GNU_start_file = 0x03,
    DW_MACRO_GNU_end_file = 0x04,
    DW_MACRO_GNU_define_indirect = 0x05,
    DW_MACRO_GNU_undef_indirect = 0x06,
    DW_MACRO_GNU_transparent_include = 0x07,


    DW_MACRO_GNU_define_indirect_alt = 0x08,
    DW_MACRO_GNU_undef_indirect_alt = 0x09,
    DW_MACRO_GNU_transparent_include_alt = 0x0a,
    DW_MACRO_GNU_lo_user = 0xe0,
    DW_MACRO_GNU_hi_user = 0xff
  };


enum dwarf_range_list_entry
  {
    DW_RLE_end_of_list = 0x00,
    DW_RLE_base_addressx = 0x01,
    DW_RLE_startx_endx = 0x02,
    DW_RLE_startx_length = 0x03,
    DW_RLE_offset_pair = 0x04,
    DW_RLE_base_address = 0x05,
    DW_RLE_start_end = 0x06,
    DW_RLE_start_length = 0x07
  };


enum dwarf_unit_type
  {
    DW_UT_compile = 0x01,
    DW_UT_type = 0x02,
    DW_UT_partial = 0x03,
    DW_UT_skeleton = 0x04,
    DW_UT_split_compile = 0x05,
    DW_UT_split_type = 0x06,
    DW_UT_lo_user = 0x80,
    DW_UT_hi_user = 0xff
  };
# 493 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/dwarf2.h"
enum dwarf_sect
  {
    DW_SECT_INFO = 1,
    DW_SECT_TYPES = 2,
    DW_SECT_ABBREV = 3,
    DW_SECT_LINE = 4,
    DW_SECT_LOC = 5,
    DW_SECT_STR_OFFSETS = 6,
    DW_SECT_MACINFO = 7,
    DW_SECT_MACRO = 8,
    DW_SECT_MAX = 8
  };







extern const char *get_DW_TAG_name (unsigned int tag);



extern const char *get_DW_AT_name (unsigned int attr);



extern const char *get_DW_FORM_name (unsigned int form);



extern const char *get_DW_OP_name (unsigned int op);



extern const char *get_DW_ATE_name (unsigned int enc);



extern const char *get_DW_CFA_name (unsigned int opc);



extern const char *get_DW_IDX_name (unsigned int idx);
# 31 "/home/giulianob/gcc_git_gnu/gcc/libiberty/dwarfnames.c" 2
# 82 "/home/giulianob/gcc_git_gnu/gcc/libiberty/dwarfnames.c"
# 1 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/dwarf2.def" 1
# 71 "/home/giulianob/gcc_git_gnu/gcc/libiberty/../include/dwarf2.def"
const char *get_DW_TAG_name (unsigned int tag) { switch (tag) { case DW_TAG_padding: return "DW_TAG_padding" ;
case DW_TAG_array_type: return "DW_TAG_array_type" ;
case DW_TAG_class_type: return "DW_TAG_class_type" ;
case DW_TAG_entry_point: return "DW_TAG_entry_point" ;
case DW_TAG_enumeration_type: return "DW_TAG_enumeration_type" ;
case DW_TAG_formal_parameter: return "DW_TAG_formal_parameter" ;
case DW_TAG_imported_declaration: return "DW_TAG_imported_declaration" ;
case DW_TAG_label: return "DW_TAG_label" ;
case DW_TAG_lexical_block: return "DW_TAG_lexical_block" ;
case DW_TAG_member: return "DW_TAG_member" ;
case DW_TAG_pointer_type: return "DW_TAG_pointer_type" ;
case DW_TAG_reference_type: return "DW_TAG_reference_type" ;
case DW_TAG_compile_unit: return "DW_TAG_compile_unit" ;
case DW_TAG_string_type: return "DW_TAG_string_type" ;
case DW_TAG_structure_type: return "DW_TAG_structure_type" ;
case DW_TAG_subroutine_type: return "DW_TAG_subroutine_type" ;
case DW_TAG_typedef: return "DW_TAG_typedef" ;
case DW_TAG_union_type: return "DW_TAG_union_type" ;
case DW_TAG_unspecified_parameters: return "DW_TAG_unspecified_parameters" ;
case DW_TAG_variant: return "DW_TAG_variant" ;
case DW_TAG_common_block: return "DW_TAG_common_block" ;
case DW_TAG_common_inclusion: return "DW_TAG_common_inclusion" ;
case DW_TAG_inheritance: return "DW_TAG_inheritance" ;
case DW_TAG_inlined_subroutine: return "DW_TAG_inlined_subroutine" ;
case DW_TAG_module: return "DW_TAG_module" ;
case DW_TAG_ptr_to_member_type: return "DW_TAG_ptr_to_member_type" ;
case DW_TAG_set_type: return "DW_TAG_set_type" ;
case DW_TAG_subrange_type: return "DW_TAG_subrange_type" ;
case DW_TAG_with_stmt: return "DW_TAG_with_stmt" ;
case DW_TAG_access_declaration: return "DW_TAG_access_declaration" ;
case DW_TAG_base_type: return "DW_TAG_base_type" ;
case DW_TAG_catch_block: return "DW_TAG_catch_block" ;
case DW_TAG_const_type: return "DW_TAG_const_type" ;
case DW_TAG_constant: return "DW_TAG_constant" ;
case DW_TAG_enumerator: return "DW_TAG_enumerator" ;
case DW_TAG_file_type: return "DW_TAG_file_type" ;
case DW_TAG_friend: return "DW_TAG_friend" ;
case DW_TAG_namelist: return "DW_TAG_namelist" ;
case DW_TAG_namelist_item: return "DW_TAG_namelist_item" ;
case DW_TAG_packed_type: return "DW_TAG_packed_type" ;
case DW_TAG_subprogram: return "DW_TAG_subprogram" ;
case DW_TAG_template_type_param: return "DW_TAG_template_type_param" ;
case DW_TAG_template_value_param: return "DW_TAG_template_value_param" ;
case DW_TAG_thrown_type: return "DW_TAG_thrown_type" ;
case DW_TAG_try_block: return "DW_TAG_try_block" ;
case DW_TAG_variant_part: return "DW_TAG_variant_part" ;
case DW_TAG_variable: return "DW_TAG_variable" ;
case DW_TAG_volatile_type: return "DW_TAG_volatile_type" ;

case DW_TAG_dwarf_procedure: return "DW_TAG_dwarf_procedure" ;
case DW_TAG_restrict_type: return "DW_TAG_restrict_type" ;
case DW_TAG_interface_type: return "DW_TAG_interface_type" ;
case DW_TAG_namespace: return "DW_TAG_namespace" ;
case DW_TAG_imported_module: return "DW_TAG_imported_module" ;
case DW_TAG_unspecified_type: return "DW_TAG_unspecified_type" ;
case DW_TAG_partial_unit: return "DW_TAG_partial_unit" ;
case DW_TAG_imported_unit: return "DW_TAG_imported_unit" ;
case DW_TAG_condition: return "DW_TAG_condition" ;
case DW_TAG_shared_type: return "DW_TAG_shared_type" ;

case DW_TAG_type_unit: return "DW_TAG_type_unit" ;
case DW_TAG_rvalue_reference_type: return "DW_TAG_rvalue_reference_type" ;
case DW_TAG_template_alias: return "DW_TAG_template_alias" ;

case DW_TAG_coarray_type: return "DW_TAG_coarray_type" ;
case DW_TAG_generic_subrange: return "DW_TAG_generic_subrange" ;
case DW_TAG_dynamic_type: return "DW_TAG_dynamic_type" ;
case DW_TAG_atomic_type: return "DW_TAG_atomic_type" ;
case DW_TAG_call_site: return "DW_TAG_call_site" ;
case DW_TAG_call_site_parameter: return "DW_TAG_call_site_parameter" ;
case DW_TAG_skeleton_unit: return "DW_TAG_skeleton_unit" ;
case DW_TAG_immutable_type: return "DW_TAG_immutable_type" ;





case DW_TAG_MIPS_loop: return "DW_TAG_MIPS_loop" ;


case DW_TAG_HP_array_descriptor: return "DW_TAG_HP_array_descriptor" ;
case DW_TAG_HP_Bliss_field: return "DW_TAG_HP_Bliss_field" ;
case DW_TAG_HP_Bliss_field_set: return "DW_TAG_HP_Bliss_field_set" ;


case DW_TAG_format_label: return "DW_TAG_format_label" ;
case DW_TAG_function_template: return "DW_TAG_function_template" ;
case DW_TAG_class_template: return "DW_TAG_class_template" ;
case DW_TAG_GNU_BINCL: return "DW_TAG_GNU_BINCL" ;
case DW_TAG_GNU_EINCL: return "DW_TAG_GNU_EINCL" ;


case DW_TAG_GNU_template_template_param: return "DW_TAG_GNU_template_template_param" ;





case DW_TAG_GNU_template_parameter_pack: return "DW_TAG_GNU_template_parameter_pack" ;
case DW_TAG_GNU_formal_parameter_pack: return "DW_TAG_GNU_formal_parameter_pack" ;




case DW_TAG_GNU_call_site: return "DW_TAG_GNU_call_site" ;
case DW_TAG_GNU_call_site_parameter: return "DW_TAG_GNU_call_site_parameter" ;

case DW_TAG_upc_shared_type: return "DW_TAG_upc_shared_type" ;
case DW_TAG_upc_strict_type: return "DW_TAG_upc_strict_type" ;
case DW_TAG_upc_relaxed_type: return "DW_TAG_upc_relaxed_type" ;

case DW_TAG_PGI_kanji_type: return "DW_TAG_PGI_kanji_type" ;
case DW_TAG_PGI_interface_block: return "DW_TAG_PGI_interface_block" ;
} return 0; }

const char *get_DW_FORM_name (unsigned int form) { switch (form) { case DW_FORM_addr: return "DW_FORM_addr" ;
case DW_FORM_block2: return "DW_FORM_block2" ;
case DW_FORM_block4: return "DW_FORM_block4" ;
case DW_FORM_data2: return "DW_FORM_data2" ;
case DW_FORM_data4: return "DW_FORM_data4" ;
case DW_FORM_data8: return "DW_FORM_data8" ;
case DW_FORM_string: return "DW_FORM_string" ;
case DW_FORM_block: return "DW_FORM_block" ;
case DW_FORM_block1: return "DW_FORM_block1" ;
case DW_FORM_data1: return "DW_FORM_data1" ;
case DW_FORM_flag: return "DW_FORM_flag" ;
case DW_FORM_sdata: return "DW_FORM_sdata" ;
case DW_FORM_strp: return "DW_FORM_strp" ;
case DW_FORM_udata: return "DW_FORM_udata" ;
case DW_FORM_ref_addr: return "DW_FORM_ref_addr" ;
case DW_FORM_ref1: return "DW_FORM_ref1" ;
case DW_FORM_ref2: return "DW_FORM_ref2" ;
case DW_FORM_ref4: return "DW_FORM_ref4" ;
case DW_FORM_ref8: return "DW_FORM_ref8" ;
case DW_FORM_ref_udata: return "DW_FORM_ref_udata" ;
case DW_FORM_indirect: return "DW_FORM_indirect" ;

case DW_FORM_sec_offset: return "DW_FORM_sec_offset" ;
case DW_FORM_exprloc: return "DW_FORM_exprloc" ;
case DW_FORM_flag_present: return "DW_FORM_flag_present" ;
case DW_FORM_ref_sig8: return "DW_FORM_ref_sig8" ;

case DW_FORM_strx: return "DW_FORM_strx" ;
case DW_FORM_addrx: return "DW_FORM_addrx" ;
case DW_FORM_ref_sup4: return "DW_FORM_ref_sup4" ;
case DW_FORM_strp_sup: return "DW_FORM_strp_sup" ;
case DW_FORM_data16: return "DW_FORM_data16" ;
case DW_FORM_line_strp: return "DW_FORM_line_strp" ;
case DW_FORM_implicit_const: return "DW_FORM_implicit_const" ;
case DW_FORM_loclistx: return "DW_FORM_loclistx" ;
case DW_FORM_rnglistx: return "DW_FORM_rnglistx" ;
case DW_FORM_ref_sup8: return "DW_FORM_ref_sup8" ;
case DW_FORM_strx1: return "DW_FORM_strx1" ;
case DW_FORM_strx2: return "DW_FORM_strx2" ;
case DW_FORM_strx3: return "DW_FORM_strx3" ;
case DW_FORM_strx4: return "DW_FORM_strx4" ;
case DW_FORM_addrx1: return "DW_FORM_addrx1" ;
case DW_FORM_addrx2: return "DW_FORM_addrx2" ;
case DW_FORM_addrx3: return "DW_FORM_addrx3" ;
case DW_FORM_addrx4: return "DW_FORM_addrx4" ;

case DW_FORM_GNU_addr_index: return "DW_FORM_GNU_addr_index" ;
case DW_FORM_GNU_str_index: return "DW_FORM_GNU_str_index" ;


case DW_FORM_GNU_ref_alt: return "DW_FORM_GNU_ref_alt" ;
case DW_FORM_GNU_strp_alt: return "DW_FORM_GNU_strp_alt" ;
} return 0; }

const char *get_DW_AT_name (unsigned int attr) { switch (attr) { case DW_AT_sibling: return "DW_AT_sibling" ;
case DW_AT_location: return "DW_AT_location" ;
case DW_AT_name: return "DW_AT_name" ;
case DW_AT_ordering: return "DW_AT_ordering" ;
case DW_AT_subscr_data: return "DW_AT_subscr_data" ;
case DW_AT_byte_size: return "DW_AT_byte_size" ;
case DW_AT_bit_offset: return "DW_AT_bit_offset" ;
case DW_AT_bit_size: return "DW_AT_bit_size" ;
case DW_AT_element_list: return "DW_AT_element_list" ;
case DW_AT_stmt_list: return "DW_AT_stmt_list" ;
case DW_AT_low_pc: return "DW_AT_low_pc" ;
case DW_AT_high_pc: return "DW_AT_high_pc" ;
case DW_AT_language: return "DW_AT_language" ;
case DW_AT_member: return "DW_AT_member" ;
case DW_AT_discr: return "DW_AT_discr" ;
case DW_AT_discr_value: return "DW_AT_discr_value" ;
case DW_AT_visibility: return "DW_AT_visibility" ;
case DW_AT_import: return "DW_AT_import" ;
case DW_AT_string_length: return "DW_AT_string_length" ;
case DW_AT_common_reference: return "DW_AT_common_reference" ;
case DW_AT_comp_dir: return "DW_AT_comp_dir" ;
case DW_AT_const_value: return "DW_AT_const_value" ;
case DW_AT_containing_type: return "DW_AT_containing_type" ;
case DW_AT_default_value: return "DW_AT_default_value" ;
case DW_AT_inline: return "DW_AT_inline" ;
case DW_AT_is_optional: return "DW_AT_is_optional" ;
case DW_AT_lower_bound: return "DW_AT_lower_bound" ;
case DW_AT_producer: return "DW_AT_producer" ;
case DW_AT_prototyped: return "DW_AT_prototyped" ;
case DW_AT_return_addr: return "DW_AT_return_addr" ;
case DW_AT_start_scope: return "DW_AT_start_scope" ;
case DW_AT_bit_stride: return "DW_AT_bit_stride" ;
case DW_AT_upper_bound: return "DW_AT_upper_bound" ;
case DW_AT_abstract_origin: return "DW_AT_abstract_origin" ;
case DW_AT_accessibility: return "DW_AT_accessibility" ;
case DW_AT_address_class: return "DW_AT_address_class" ;
case DW_AT_artificial: return "DW_AT_artificial" ;
case DW_AT_base_types: return "DW_AT_base_types" ;
case DW_AT_calling_convention: return "DW_AT_calling_convention" ;
case DW_AT_count: return "DW_AT_count" ;
case DW_AT_data_member_location: return "DW_AT_data_member_location" ;
case DW_AT_decl_column: return "DW_AT_decl_column" ;
case DW_AT_decl_file: return "DW_AT_decl_file" ;
case DW_AT_decl_line: return "DW_AT_decl_line" ;
case DW_AT_declaration: return "DW_AT_declaration" ;
case DW_AT_discr_list: return "DW_AT_discr_list" ;
case DW_AT_encoding: return "DW_AT_encoding" ;
case DW_AT_external: return "DW_AT_external" ;
case DW_AT_frame_base: return "DW_AT_frame_base" ;
case DW_AT_friend: return "DW_AT_friend" ;
case DW_AT_identifier_case: return "DW_AT_identifier_case" ;
case DW_AT_macro_info: return "DW_AT_macro_info" ;
case DW_AT_namelist_items: return "DW_AT_namelist_items" ;
case DW_AT_priority: return "DW_AT_priority" ;
case DW_AT_segment: return "DW_AT_segment" ;
case DW_AT_specification: return "DW_AT_specification" ;
case DW_AT_static_link: return "DW_AT_static_link" ;
case DW_AT_type: return "DW_AT_type" ;
case DW_AT_use_location: return "DW_AT_use_location" ;
case DW_AT_variable_parameter: return "DW_AT_variable_parameter" ;
case DW_AT_virtuality: return "DW_AT_virtuality" ;
case DW_AT_vtable_elem_location: return "DW_AT_vtable_elem_location" ;

case DW_AT_allocated: return "DW_AT_allocated" ;
case DW_AT_associated: return "DW_AT_associated" ;
case DW_AT_data_location: return "DW_AT_data_location" ;
case DW_AT_byte_stride: return "DW_AT_byte_stride" ;
case DW_AT_entry_pc: return "DW_AT_entry_pc" ;
case DW_AT_use_UTF8: return "DW_AT_use_UTF8" ;
case DW_AT_extension: return "DW_AT_extension" ;
case DW_AT_ranges: return "DW_AT_ranges" ;
case DW_AT_trampoline: return "DW_AT_trampoline" ;
case DW_AT_call_column: return "DW_AT_call_column" ;
case DW_AT_call_file: return "DW_AT_call_file" ;
case DW_AT_call_line: return "DW_AT_call_line" ;
case DW_AT_description: return "DW_AT_description" ;
case DW_AT_binary_scale: return "DW_AT_binary_scale" ;
case DW_AT_decimal_scale: return "DW_AT_decimal_scale" ;
case DW_AT_small: return "DW_AT_small" ;
case DW_AT_decimal_sign: return "DW_AT_decimal_sign" ;
case DW_AT_digit_count: return "DW_AT_digit_count" ;
case DW_AT_picture_string: return "DW_AT_picture_string" ;
case DW_AT_mutable: return "DW_AT_mutable" ;
case DW_AT_threads_scaled: return "DW_AT_threads_scaled" ;
case DW_AT_explicit: return "DW_AT_explicit" ;
case DW_AT_object_pointer: return "DW_AT_object_pointer" ;
case DW_AT_endianity: return "DW_AT_endianity" ;
case DW_AT_elemental: return "DW_AT_elemental" ;
case DW_AT_pure: return "DW_AT_pure" ;
case DW_AT_recursive: return "DW_AT_recursive" ;

case DW_AT_signature: return "DW_AT_signature" ;
case DW_AT_main_subprogram: return "DW_AT_main_subprogram" ;
case DW_AT_data_bit_offset: return "DW_AT_data_bit_offset" ;
case DW_AT_const_expr: return "DW_AT_const_expr" ;
case DW_AT_enum_class: return "DW_AT_enum_class" ;
case DW_AT_linkage_name: return "DW_AT_linkage_name" ;

case DW_AT_string_length_bit_size: return "DW_AT_string_length_bit_size" ;
case DW_AT_string_length_byte_size: return "DW_AT_string_length_byte_size" ;
case DW_AT_rank: return "DW_AT_rank" ;
case DW_AT_str_offsets_base: return "DW_AT_str_offsets_base" ;
case DW_AT_addr_base: return "DW_AT_addr_base" ;
case DW_AT_rnglists_base: return "DW_AT_rnglists_base" ;
case DW_AT_dwo_name: return "DW_AT_dwo_name" ;
case DW_AT_reference: return "DW_AT_reference" ;
case DW_AT_rvalue_reference: return "DW_AT_rvalue_reference" ;
case DW_AT_macros: return "DW_AT_macros" ;
case DW_AT_call_all_calls: return "DW_AT_call_all_calls" ;
case DW_AT_call_all_source_calls: return "DW_AT_call_all_source_calls" ;
case DW_AT_call_all_tail_calls: return "DW_AT_call_all_tail_calls" ;
case DW_AT_call_return_pc: return "DW_AT_call_return_pc" ;
case DW_AT_call_value: return "DW_AT_call_value" ;
case DW_AT_call_origin: return "DW_AT_call_origin" ;
case DW_AT_call_parameter: return "DW_AT_call_parameter" ;
case DW_AT_call_pc: return "DW_AT_call_pc" ;
case DW_AT_call_tail_call: return "DW_AT_call_tail_call" ;
case DW_AT_call_target: return "DW_AT_call_target" ;
case DW_AT_call_target_clobbered: return "DW_AT_call_target_clobbered" ;
case DW_AT_call_data_location: return "DW_AT_call_data_location" ;
case DW_AT_call_data_value: return "DW_AT_call_data_value" ;
case DW_AT_noreturn: return "DW_AT_noreturn" ;
case DW_AT_alignment: return "DW_AT_alignment" ;
case DW_AT_export_symbols: return "DW_AT_export_symbols" ;
case DW_AT_deleted: return "DW_AT_deleted" ;
case DW_AT_defaulted: return "DW_AT_defaulted" ;
case DW_AT_loclists_base: return "DW_AT_loclists_base" ;





case DW_AT_MIPS_fde: return "DW_AT_MIPS_fde" ;
case DW_AT_MIPS_loop_begin: return "DW_AT_MIPS_loop_begin" ;
case DW_AT_MIPS_tail_loop_begin: return "DW_AT_MIPS_tail_loop_begin" ;
case DW_AT_MIPS_epilog_begin: return "DW_AT_MIPS_epilog_begin" ;
case DW_AT_MIPS_loop_unroll_factor: return "DW_AT_MIPS_loop_unroll_factor" ;
case DW_AT_MIPS_software_pipeline_depth: return "DW_AT_MIPS_software_pipeline_depth" ;
case DW_AT_MIPS_linkage_name: return "DW_AT_MIPS_linkage_name" ;
case DW_AT_MIPS_stride: return "DW_AT_MIPS_stride" ;
case DW_AT_MIPS_abstract_name: return "DW_AT_MIPS_abstract_name" ;
case DW_AT_MIPS_clone_origin: return "DW_AT_MIPS_clone_origin" ;
case DW_AT_MIPS_has_inlines: return "DW_AT_MIPS_has_inlines" ;

case DW_AT_HP_block_index: return "DW_AT_HP_block_index" ;



case DW_AT_HP_actuals_stmt_list: return "DW_AT_HP_actuals_stmt_list" ;
case DW_AT_HP_proc_per_section: return "DW_AT_HP_proc_per_section" ;
case DW_AT_HP_raw_data_ptr: return "DW_AT_HP_raw_data_ptr" ;
case DW_AT_HP_pass_by_reference: return "DW_AT_HP_pass_by_reference" ;
case DW_AT_HP_opt_level: return "DW_AT_HP_opt_level" ;
case DW_AT_HP_prof_version_id: return "DW_AT_HP_prof_version_id" ;
case DW_AT_HP_opt_flags: return "DW_AT_HP_opt_flags" ;
case DW_AT_HP_cold_region_low_pc: return "DW_AT_HP_cold_region_low_pc" ;
case DW_AT_HP_cold_region_high_pc: return "DW_AT_HP_cold_region_high_pc" ;
case DW_AT_HP_all_variables_modifiable: return "DW_AT_HP_all_variables_modifiable" ;
case DW_AT_HP_linkage_name: return "DW_AT_HP_linkage_name" ;
case DW_AT_HP_prof_flags: return "DW_AT_HP_prof_flags" ;
case DW_AT_HP_unit_name: return "DW_AT_HP_unit_name" ;
case DW_AT_HP_unit_size: return "DW_AT_HP_unit_size" ;
case DW_AT_HP_widened_byte_size: return "DW_AT_HP_widened_byte_size" ;
case DW_AT_HP_definition_points: return "DW_AT_HP_definition_points" ;
case DW_AT_HP_default_location: return "DW_AT_HP_default_location" ;
case DW_AT_HP_is_result_param: return "DW_AT_HP_is_result_param" ;


case DW_AT_sf_names: return "DW_AT_sf_names" ;
case DW_AT_src_info: return "DW_AT_src_info" ;
case DW_AT_mac_info: return "DW_AT_mac_info" ;
case DW_AT_src_coords: return "DW_AT_src_coords" ;
case DW_AT_body_begin: return "DW_AT_body_begin" ;
case DW_AT_body_end: return "DW_AT_body_end" ;
case DW_AT_GNU_vector: return "DW_AT_GNU_vector" ;


case DW_AT_GNU_guarded_by: return "DW_AT_GNU_guarded_by" ;
case DW_AT_GNU_pt_guarded_by: return "DW_AT_GNU_pt_guarded_by" ;
case DW_AT_GNU_guarded: return "DW_AT_GNU_guarded" ;
case DW_AT_GNU_pt_guarded: return "DW_AT_GNU_pt_guarded" ;
case DW_AT_GNU_locks_excluded: return "DW_AT_GNU_locks_excluded" ;
case DW_AT_GNU_exclusive_locks_required: return "DW_AT_GNU_exclusive_locks_required" ;
case DW_AT_GNU_shared_locks_required: return "DW_AT_GNU_shared_locks_required" ;


case DW_AT_GNU_odr_signature: return "DW_AT_GNU_odr_signature" ;


case DW_AT_GNU_template_name: return "DW_AT_GNU_template_name" ;


case DW_AT_GNU_call_site_value: return "DW_AT_GNU_call_site_value" ;
case DW_AT_GNU_call_site_data_value: return "DW_AT_GNU_call_site_data_value" ;
case DW_AT_GNU_call_site_target: return "DW_AT_GNU_call_site_target" ;
case DW_AT_GNU_call_site_target_clobbered: return "DW_AT_GNU_call_site_target_clobbered" ;
case DW_AT_GNU_tail_call: return "DW_AT_GNU_tail_call" ;
case DW_AT_GNU_all_tail_call_sites: return "DW_AT_GNU_all_tail_call_sites" ;
case DW_AT_GNU_all_call_sites: return "DW_AT_GNU_all_call_sites" ;
case DW_AT_GNU_all_source_call_sites: return "DW_AT_GNU_all_source_call_sites" ;

case DW_AT_GNU_macros: return "DW_AT_GNU_macros" ;

case DW_AT_GNU_deleted: return "DW_AT_GNU_deleted" ;

case DW_AT_GNU_dwo_name: return "DW_AT_GNU_dwo_name" ;
case DW_AT_GNU_dwo_id: return "DW_AT_GNU_dwo_id" ;
case DW_AT_GNU_ranges_base: return "DW_AT_GNU_ranges_base" ;
case DW_AT_GNU_addr_base: return "DW_AT_GNU_addr_base" ;
case DW_AT_GNU_pubnames: return "DW_AT_GNU_pubnames" ;
case DW_AT_GNU_pubtypes: return "DW_AT_GNU_pubtypes" ;


case DW_AT_GNU_discriminator: return "DW_AT_GNU_discriminator" ;
case DW_AT_GNU_locviews: return "DW_AT_GNU_locviews" ;
case DW_AT_GNU_entry_view: return "DW_AT_GNU_entry_view" ;

case DW_AT_VMS_rtnbeg_pd_address: return "DW_AT_VMS_rtnbeg_pd_address" ;



case DW_AT_use_GNAT_descriptive_type: return "DW_AT_use_GNAT_descriptive_type" ;
case DW_AT_GNAT_descriptive_type: return "DW_AT_GNAT_descriptive_type" ;


case DW_AT_GNU_numerator: return "DW_AT_GNU_numerator" ;
case DW_AT_GNU_denominator: return "DW_AT_GNU_denominator" ;


case DW_AT_GNU_bias: return "DW_AT_GNU_bias" ;

case DW_AT_upc_threads_scaled: return "DW_AT_upc_threads_scaled" ;

case DW_AT_PGI_lbase: return "DW_AT_PGI_lbase" ;
case DW_AT_PGI_soffset: return "DW_AT_PGI_soffset" ;
case DW_AT_PGI_lstride: return "DW_AT_PGI_lstride" ;

case DW_AT_APPLE_optimized: return "DW_AT_APPLE_optimized" ;
case DW_AT_APPLE_flags: return "DW_AT_APPLE_flags" ;
case DW_AT_APPLE_isa: return "DW_AT_APPLE_isa" ;
case DW_AT_APPLE_block: return "DW_AT_APPLE_block" ;
case DW_AT_APPLE_major_runtime_vers: return "DW_AT_APPLE_major_runtime_vers" ;
case DW_AT_APPLE_runtime_class: return "DW_AT_APPLE_runtime_class" ;
case DW_AT_APPLE_omit_frame_ptr: return "DW_AT_APPLE_omit_frame_ptr" ;
case DW_AT_APPLE_property_name: return "DW_AT_APPLE_property_name" ;
case DW_AT_APPLE_property_getter: return "DW_AT_APPLE_property_getter" ;
case DW_AT_APPLE_property_setter: return "DW_AT_APPLE_property_setter" ;
case DW_AT_APPLE_property_attribute: return "DW_AT_APPLE_property_attribute" ;
case DW_AT_APPLE_objc_complete_type: return "DW_AT_APPLE_objc_complete_type" ;
case DW_AT_APPLE_property: return "DW_AT_APPLE_property" ;
} return 0; }

const char *get_DW_OP_name (unsigned int op) { switch (op) { case DW_OP_addr: return "DW_OP_addr" ;
case DW_OP_deref: return "DW_OP_deref" ;
case DW_OP_const1u: return "DW_OP_const1u" ;
case DW_OP_const1s: return "DW_OP_const1s" ;
case DW_OP_const2u: return "DW_OP_const2u" ;
case DW_OP_const2s: return "DW_OP_const2s" ;
case DW_OP_const4u: return "DW_OP_const4u" ;
case DW_OP_const4s: return "DW_OP_const4s" ;
case DW_OP_const8u: return "DW_OP_const8u" ;
case DW_OP_const8s: return "DW_OP_const8s" ;
case DW_OP_constu: return "DW_OP_constu" ;
case DW_OP_consts: return "DW_OP_consts" ;
case DW_OP_dup: return "DW_OP_dup" ;
case DW_OP_drop: return "DW_OP_drop" ;
case DW_OP_over: return "DW_OP_over" ;
case DW_OP_pick: return "DW_OP_pick" ;
case DW_OP_swap: return "DW_OP_swap" ;
case DW_OP_rot: return "DW_OP_rot" ;
case DW_OP_xderef: return "DW_OP_xderef" ;
case DW_OP_abs: return "DW_OP_abs" ;
case DW_OP_and: return "DW_OP_and" ;
case DW_OP_div: return "DW_OP_div" ;
case DW_OP_minus: return "DW_OP_minus" ;
case DW_OP_mod: return "DW_OP_mod" ;
case DW_OP_mul: return "DW_OP_mul" ;
case DW_OP_neg: return "DW_OP_neg" ;
case DW_OP_not: return "DW_OP_not" ;
case DW_OP_or: return "DW_OP_or" ;
case DW_OP_plus: return "DW_OP_plus" ;
case DW_OP_plus_uconst: return "DW_OP_plus_uconst" ;
case DW_OP_shl: return "DW_OP_shl" ;
case DW_OP_shr: return "DW_OP_shr" ;
case DW_OP_shra: return "DW_OP_shra" ;
case DW_OP_xor: return "DW_OP_xor" ;
case DW_OP_bra: return "DW_OP_bra" ;
case DW_OP_eq: return "DW_OP_eq" ;
case DW_OP_ge: return "DW_OP_ge" ;
case DW_OP_gt: return "DW_OP_gt" ;
case DW_OP_le: return "DW_OP_le" ;
case DW_OP_lt: return "DW_OP_lt" ;
case DW_OP_ne: return "DW_OP_ne" ;
case DW_OP_skip: return "DW_OP_skip" ;
case DW_OP_lit0: return "DW_OP_lit0" ;
case DW_OP_lit1: return "DW_OP_lit1" ;
case DW_OP_lit2: return "DW_OP_lit2" ;
case DW_OP_lit3: return "DW_OP_lit3" ;
case DW_OP_lit4: return "DW_OP_lit4" ;
case DW_OP_lit5: return "DW_OP_lit5" ;
case DW_OP_lit6: return "DW_OP_lit6" ;
case DW_OP_lit7: return "DW_OP_lit7" ;
case DW_OP_lit8: return "DW_OP_lit8" ;
case DW_OP_lit9: return "DW_OP_lit9" ;
case DW_OP_lit10: return "DW_OP_lit10" ;
case DW_OP_lit11: return "DW_OP_lit11" ;
case DW_OP_lit12: return "DW_OP_lit12" ;
case DW_OP_lit13: return "DW_OP_lit13" ;
case DW_OP_lit14: return "DW_OP_lit14" ;
case DW_OP_lit15: return "DW_OP_lit15" ;
case DW_OP_lit16: return "DW_OP_lit16" ;
case DW_OP_lit17: return "DW_OP_lit17" ;
case DW_OP_lit18: return "DW_OP_lit18" ;
case DW_OP_lit19: return "DW_OP_lit19" ;
case DW_OP_lit20: return "DW_OP_lit20" ;
case DW_OP_lit21: return "DW_OP_lit21" ;
case DW_OP_lit22: return "DW_OP_lit22" ;
case DW_OP_lit23: return "DW_OP_lit23" ;
case DW_OP_lit24: return "DW_OP_lit24" ;
case DW_OP_lit25: return "DW_OP_lit25" ;
case DW_OP_lit26: return "DW_OP_lit26" ;
case DW_OP_lit27: return "DW_OP_lit27" ;
case DW_OP_lit28: return "DW_OP_lit28" ;
case DW_OP_lit29: return "DW_OP_lit29" ;
case DW_OP_lit30: return "DW_OP_lit30" ;
case DW_OP_lit31: return "DW_OP_lit31" ;
case DW_OP_reg0: return "DW_OP_reg0" ;
case DW_OP_reg1: return "DW_OP_reg1" ;
case DW_OP_reg2: return "DW_OP_reg2" ;
case DW_OP_reg3: return "DW_OP_reg3" ;
case DW_OP_reg4: return "DW_OP_reg4" ;
case DW_OP_reg5: return "DW_OP_reg5" ;
case DW_OP_reg6: return "DW_OP_reg6" ;
case DW_OP_reg7: return "DW_OP_reg7" ;
case DW_OP_reg8: return "DW_OP_reg8" ;
case DW_OP_reg9: return "DW_OP_reg9" ;
case DW_OP_reg10: return "DW_OP_reg10" ;
case DW_OP_reg11: return "DW_OP_reg11" ;
case DW_OP_reg12: return "DW_OP_reg12" ;
case DW_OP_reg13: return "DW_OP_reg13" ;
case DW_OP_reg14: return "DW_OP_reg14" ;
case DW_OP_reg15: return "DW_OP_reg15" ;
case DW_OP_reg16: return "DW_OP_reg16" ;
case DW_OP_reg17: return "DW_OP_reg17" ;
case DW_OP_reg18: return "DW_OP_reg18" ;
case DW_OP_reg19: return "DW_OP_reg19" ;
case DW_OP_reg20: return "DW_OP_reg20" ;
case DW_OP_reg21: return "DW_OP_reg21" ;
case DW_OP_reg22: return "DW_OP_reg22" ;
case DW_OP_reg23: return "DW_OP_reg23" ;
case DW_OP_reg24: return "DW_OP_reg24" ;
case DW_OP_reg25: return "DW_OP_reg25" ;
case DW_OP_reg26: return "DW_OP_reg26" ;
case DW_OP_reg27: return "DW_OP_reg27" ;
case DW_OP_reg28: return "DW_OP_reg28" ;
case DW_OP_reg29: return "DW_OP_reg29" ;
case DW_OP_reg30: return "DW_OP_reg30" ;
case DW_OP_reg31: return "DW_OP_reg31" ;
case DW_OP_breg0: return "DW_OP_breg0" ;
case DW_OP_breg1: return "DW_OP_breg1" ;
case DW_OP_breg2: return "DW_OP_breg2" ;
case DW_OP_breg3: return "DW_OP_breg3" ;
case DW_OP_breg4: return "DW_OP_breg4" ;
case DW_OP_breg5: return "DW_OP_breg5" ;
case DW_OP_breg6: return "DW_OP_breg6" ;
case DW_OP_breg7: return "DW_OP_breg7" ;
case DW_OP_breg8: return "DW_OP_breg8" ;
case DW_OP_breg9: return "DW_OP_breg9" ;
case DW_OP_breg10: return "DW_OP_breg10" ;
case DW_OP_breg11: return "DW_OP_breg11" ;
case DW_OP_breg12: return "DW_OP_breg12" ;
case DW_OP_breg13: return "DW_OP_breg13" ;
case DW_OP_breg14: return "DW_OP_breg14" ;
case DW_OP_breg15: return "DW_OP_breg15" ;
case DW_OP_breg16: return "DW_OP_breg16" ;
case DW_OP_breg17: return "DW_OP_breg17" ;
case DW_OP_breg18: return "DW_OP_breg18" ;
case DW_OP_breg19: return "DW_OP_breg19" ;
case DW_OP_breg20: return "DW_OP_breg20" ;
case DW_OP_breg21: return "DW_OP_breg21" ;
case DW_OP_breg22: return "DW_OP_breg22" ;
case DW_OP_breg23: return "DW_OP_breg23" ;
case DW_OP_breg24: return "DW_OP_breg24" ;
case DW_OP_breg25: return "DW_OP_breg25" ;
case DW_OP_breg26: return "DW_OP_breg26" ;
case DW_OP_breg27: return "DW_OP_breg27" ;
case DW_OP_breg28: return "DW_OP_breg28" ;
case DW_OP_breg29: return "DW_OP_breg29" ;
case DW_OP_breg30: return "DW_OP_breg30" ;
case DW_OP_breg31: return "DW_OP_breg31" ;
case DW_OP_regx: return "DW_OP_regx" ;
case DW_OP_fbreg: return "DW_OP_fbreg" ;
case DW_OP_bregx: return "DW_OP_bregx" ;
case DW_OP_piece: return "DW_OP_piece" ;
case DW_OP_deref_size: return "DW_OP_deref_size" ;
case DW_OP_xderef_size: return "DW_OP_xderef_size" ;
case DW_OP_nop: return "DW_OP_nop" ;

case DW_OP_push_object_address: return "DW_OP_push_object_address" ;
case DW_OP_call2: return "DW_OP_call2" ;
case DW_OP_call4: return "DW_OP_call4" ;
case DW_OP_call_ref: return "DW_OP_call_ref" ;
case DW_OP_form_tls_address: return "DW_OP_form_tls_address" ;
case DW_OP_call_frame_cfa: return "DW_OP_call_frame_cfa" ;
case DW_OP_bit_piece: return "DW_OP_bit_piece" ;


case DW_OP_implicit_value: return "DW_OP_implicit_value" ;
case DW_OP_stack_value: return "DW_OP_stack_value" ;


case DW_OP_implicit_pointer: return "DW_OP_implicit_pointer" ;
case DW_OP_addrx: return "DW_OP_addrx" ;
case DW_OP_constx: return "DW_OP_constx" ;
case DW_OP_entry_value: return "DW_OP_entry_value" ;
case DW_OP_const_type: return "DW_OP_const_type" ;
case DW_OP_regval_type: return "DW_OP_regval_type" ;
case DW_OP_deref_type: return "DW_OP_deref_type" ;
case DW_OP_xderef_type: return "DW_OP_xderef_type" ;
case DW_OP_convert: return "DW_OP_convert" ;
case DW_OP_reinterpret: return "DW_OP_reinterpret" ;





case DW_OP_GNU_push_tls_address: return "DW_OP_GNU_push_tls_address" ;

case DW_OP_GNU_uninit: return "DW_OP_GNU_uninit" ;
case DW_OP_GNU_encoded_addr: return "DW_OP_GNU_encoded_addr" ;


case DW_OP_GNU_implicit_pointer: return "DW_OP_GNU_implicit_pointer" ;


case DW_OP_GNU_entry_value: return "DW_OP_GNU_entry_value" ;


case DW_OP_GNU_const_type: return "DW_OP_GNU_const_type" ;
case DW_OP_GNU_regval_type: return "DW_OP_GNU_regval_type" ;
case DW_OP_GNU_deref_type: return "DW_OP_GNU_deref_type" ;
case DW_OP_GNU_convert: return "DW_OP_GNU_convert" ;
case DW_OP_GNU_reinterpret: return "DW_OP_GNU_reinterpret" ;

case DW_OP_GNU_parameter_ref: return "DW_OP_GNU_parameter_ref" ;

case DW_OP_GNU_addr_index: return "DW_OP_GNU_addr_index" ;
case DW_OP_GNU_const_index: return "DW_OP_GNU_const_index" ;


case DW_OP_GNU_variable_value: return "DW_OP_GNU_variable_value" ;


case DW_OP_HP_is_value: return "DW_OP_HP_is_value" ;
case DW_OP_HP_fltconst4: return "DW_OP_HP_fltconst4" ;
case DW_OP_HP_fltconst8: return "DW_OP_HP_fltconst8" ;
case DW_OP_HP_mod_range: return "DW_OP_HP_mod_range" ;
case DW_OP_HP_unmod_range: return "DW_OP_HP_unmod_range" ;
case DW_OP_HP_tls: return "DW_OP_HP_tls" ;

case DW_OP_PGI_omp_thread_num: return "DW_OP_PGI_omp_thread_num" ;





case DW_OP_AARCH64_operation: return "DW_OP_AARCH64_operation" ;
} return 0; }

const char *get_DW_ATE_name (unsigned int enc) { switch (enc) { case DW_ATE_void: return "DW_ATE_void" ;
case DW_ATE_address: return "DW_ATE_address" ;
case DW_ATE_boolean: return "DW_ATE_boolean" ;
case DW_ATE_complex_float: return "DW_ATE_complex_float" ;
case DW_ATE_float: return "DW_ATE_float" ;
case DW_ATE_signed: return "DW_ATE_signed" ;
case DW_ATE_signed_char: return "DW_ATE_signed_char" ;
case DW_ATE_unsigned: return "DW_ATE_unsigned" ;
case DW_ATE_unsigned_char: return "DW_ATE_unsigned_char" ;

case DW_ATE_imaginary_float: return "DW_ATE_imaginary_float" ;
case DW_ATE_packed_decimal: return "DW_ATE_packed_decimal" ;
case DW_ATE_numeric_string: return "DW_ATE_numeric_string" ;
case DW_ATE_edited: return "DW_ATE_edited" ;
case DW_ATE_signed_fixed: return "DW_ATE_signed_fixed" ;
case DW_ATE_unsigned_fixed: return "DW_ATE_unsigned_fixed" ;
case DW_ATE_decimal_float: return "DW_ATE_decimal_float" ;

case DW_ATE_UTF: return "DW_ATE_UTF" ;

case DW_ATE_UCS: return "DW_ATE_UCS" ;
case DW_ATE_ASCII: return "DW_ATE_ASCII" ;





case DW_ATE_HP_float80: return "DW_ATE_HP_float80" ;
case DW_ATE_HP_complex_float80: return "DW_ATE_HP_complex_float80" ;
case DW_ATE_HP_float128: return "DW_ATE_HP_float128" ;
case DW_ATE_HP_complex_float128: return "DW_ATE_HP_complex_float128" ;
case DW_ATE_HP_floathpintel: return "DW_ATE_HP_floathpintel" ;
case DW_ATE_HP_imaginary_float80: return "DW_ATE_HP_imaginary_float80" ;
case DW_ATE_HP_imaginary_float128: return "DW_ATE_HP_imaginary_float128" ;
case DW_ATE_HP_VAX_float: return "DW_ATE_HP_VAX_float" ;
case DW_ATE_HP_VAX_float_d: return "DW_ATE_HP_VAX_float_d" ;
case DW_ATE_HP_packed_decimal: return "DW_ATE_HP_packed_decimal" ;
case DW_ATE_HP_zoned_decimal: return "DW_ATE_HP_zoned_decimal" ;
case DW_ATE_HP_edited: return "DW_ATE_HP_edited" ;
case DW_ATE_HP_signed_fixed: return "DW_ATE_HP_signed_fixed" ;
case DW_ATE_HP_unsigned_fixed: return "DW_ATE_HP_unsigned_fixed" ;
case DW_ATE_HP_VAX_complex_float: return "DW_ATE_HP_VAX_complex_float" ;
case DW_ATE_HP_VAX_complex_float_d: return "DW_ATE_HP_VAX_complex_float_d" ;

} return 0; }

const char *get_DW_CFA_name (unsigned int opc) { switch (opc) { case DW_CFA_advance_loc: return "DW_CFA_advance_loc" ;
case DW_CFA_offset: return "DW_CFA_offset" ;
case DW_CFA_restore: return "DW_CFA_restore" ;
case DW_CFA_nop: return "DW_CFA_nop" ;
case DW_CFA_set_loc: return "DW_CFA_set_loc" ;
case DW_CFA_advance_loc1: return "DW_CFA_advance_loc1" ;
case DW_CFA_advance_loc2: return "DW_CFA_advance_loc2" ;
case DW_CFA_advance_loc4: return "DW_CFA_advance_loc4" ;
case DW_CFA_offset_extended: return "DW_CFA_offset_extended" ;
case DW_CFA_restore_extended: return "DW_CFA_restore_extended" ;
case DW_CFA_undefined: return "DW_CFA_undefined" ;
case DW_CFA_same_value: return "DW_CFA_same_value" ;
case DW_CFA_register: return "DW_CFA_register" ;
case DW_CFA_remember_state: return "DW_CFA_remember_state" ;
case DW_CFA_restore_state: return "DW_CFA_restore_state" ;
case DW_CFA_def_cfa: return "DW_CFA_def_cfa" ;
case DW_CFA_def_cfa_register: return "DW_CFA_def_cfa_register" ;
case DW_CFA_def_cfa_offset: return "DW_CFA_def_cfa_offset" ;

case DW_CFA_def_cfa_expression: return "DW_CFA_def_cfa_expression" ;
case DW_CFA_expression: return "DW_CFA_expression" ;
case DW_CFA_offset_extended_sf: return "DW_CFA_offset_extended_sf" ;
case DW_CFA_def_cfa_sf: return "DW_CFA_def_cfa_sf" ;
case DW_CFA_def_cfa_offset_sf: return "DW_CFA_def_cfa_offset_sf" ;
case DW_CFA_val_offset: return "DW_CFA_val_offset" ;
case DW_CFA_val_offset_sf: return "DW_CFA_val_offset_sf" ;
case DW_CFA_val_expression: return "DW_CFA_val_expression" ;

case DW_CFA_lo_user: return "DW_CFA_lo_user" ;
case DW_CFA_hi_user: return "DW_CFA_hi_user" ;


case DW_CFA_MIPS_advance_loc8: return "DW_CFA_MIPS_advance_loc8" ;


case DW_CFA_GNU_window_save: return "DW_CFA_GNU_window_save" ;

case DW_CFA_GNU_args_size: return "DW_CFA_GNU_args_size" ;
case DW_CFA_GNU_negative_offset_extended: return "DW_CFA_GNU_negative_offset_extended" ;

} return 0; }


const char *get_DW_IDX_name (unsigned int idx) { switch (idx) { case DW_IDX_compile_unit: return "DW_IDX_compile_unit" ;
case DW_IDX_type_unit: return "DW_IDX_type_unit" ;
case DW_IDX_die_offset: return "DW_IDX_die_offset" ;
case DW_IDX_parent: return "DW_IDX_parent" ;
case DW_IDX_type_hash: return "DW_IDX_type_hash" ;

case DW_IDX_hi_user: return "DW_IDX_hi_user" ;
case DW_IDX_GNU_internal: return "DW_IDX_GNU_internal" ;
case DW_IDX_GNU_external: return "DW_IDX_GNU_external" ;
} return 0; }
# 83 "/home/giulianob/gcc_git_gnu/gcc/libiberty/dwarfnames.c" 2
