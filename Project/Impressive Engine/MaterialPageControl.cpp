/*/////////////////////////////////////////////////////////////////////////////////
///
///  Impressive Engine
///
/// Copyright (c) 2012-2013 Impressive Reality team
//
/// The license is
///
/// Permission is denied, to any person or company
///
/// The above copyright notice and this permission notice shall be included in
/// all copies or substantial portions of the Software.
///
/// Project leader : O.Shahbazi <sh_omid_m@yahoo.com>
/////////////////////////////////////////////////////////////////////////////////*/
#ifdef EDIT_MODE

#include "MaterialPageControl.h"
#include "StdAfxScintilla.h"

BEGIN_NAMESPACE
static const char keyWords[] = 
	"material technique pass texture_unit vertex_program vertex_program_ref fragment_program fragment_program_ref deafult_params shadow_caster_vertex_program_ref shadow_receiver_vertex_program_ref shadow_receiver_fragment_program_ref default_params "
	"[attributes] lod_distances receive_shadows transparency_casts_shadows set_texture_alias scheme lod_index lod_distances ambient diffuse specular emissive scene_blend depth_check depth_write depth_func depth_bias alpha_rejection cull_hardware cull_software lighting shading polygon_mode fog_override colour_write max_lights start_light iteration point_size point_sprites point_size_attenuation point_size_min point_size_max texture_alias texture anim_texture cubic_texture tex_coord_set tex_address_mode tex_border_colour filtering max_anisotropy mipmap_bias colour_op colour_op_ex colour_op_multipass_fallback alpha_op_ex env_map scroll scroll_anim rotate rotate_anim scal wave_xform transform binding_type content_type source syntax entry_point profiles param_named_auto param_named param_indexed param_indexed_auto includes_skeletal_animation includes_morph_animation includes_pose_animation uses_vertex_texture_fetch preprocessor_defines column_major_matrices attach glsl hlsl cg unified target delegate "
	"[values] on off one zero dest_colour src_colour one_minus_dest_colour one_minus_src_colour dest_alpha src_alpha one_minus_dest_alpha one_minus_src_alpha always_fail always_pass less less_equal equal not_equal greater_equal greater back front none flat gouraud phong solid wireframe points true false linear exp exp2 once once_per_light per_light per_n_lights 1d 2d 3d cubic PF_L8 PF_L16 PF_A8 PF_A4L4 PF_BYTE_LA PF_R5G6B5 PF_B5G6R5 PF_R3G3B2 PF_A4R4G4B4 PF_A1R5G5B5 PF_R8G8B8 PF_B8G8R8 PF_A8R8G8B8 PF_A8B8G8R8 PF_B8G8R8A8 PF_R8G8B8A8 PF_X8R8G8B8 PF_X8B8G8R8 PF_A2R10G10B10 PF_A2B10G10R10 PF_FLOAT16_R PF_FLOAT16_RGB PF_FLOAT16_RGBA PF_FLOAT32_R PF_FLOAT32_RGB PF_FLOAT32_RGBA PF_SHORT_RGBA combinedUVW seperatedUV vertex fragment named shadow wrap clamp mirror border bilinear trilinear anisotropic linear replace add modulate alpha_blend source1 source2 modulate_x2 modulate_x4 add add_signed add_smooth subtract blend_diffuse_alpha blend_texture_alpha blend_current_alpha blend_manual dotproduct blend_diffuse_colour src_texture src_current src_diffuse src_specular src_manual spherical planar cubic_reflection cubic_normal scroll_x scroll_y scale_x scale_y scale sine triangle square sawtooth inverse_sawtooth vs_1_1 vs_2_0 vs_2_x vs_3_0 arbvp1 vp20 vp30 vp40 ps_1_1 ps_1_2 ps_1_3 ps_1_4 ps_2_0 ps_2_x ps_3_x arbfp1 fp20 fp30 fp40 world_matrix inverse_world_matrix transpose_world_matrix inverse_transpose_wolrd_matrix world_matrix_array_3x4 view_matrix inverse_view_matrix transpose_view_matrix inverse_transpose_view_matrix projection_matrix inverse_projection_matrix transpose_projection_matrix inverse_transpose_projection_matrix worldview_matrix inverse_worldview_matrix inverse_transpose_worldview_matrix viewproj_matrix inverse_viewproj_matrix inverse_transpose_viewproj_matrix worldviewproj_matrix inverse_worldviewproj_matrix transpose_worldviewproj_matrix inverse_transpose_worldviewproj_matrix render_target_flipping light_diffuse_colour light_specular_colour light_attenuation spotlight_params light_position light_direction light_position_object_space light_direction_object_space light_distance_object_space light_position_view_space light_direction_view_space light_power light_diffuse_colour_array light_specular_colour_array light_attenuation_array spotlight_params_array light_position_array light_direction_array light_position_object_space_array light_direction_object_space_array light_distance_object_space_array light_position_view_space_array light_direction_view_space_array light_power_array ambient_light_colour surface_ambient_colour surface_diffuse_colour surface_specular_colour surface_emissive_colour surface_shininess derived_ambient_light_colour derived_scene_colour derived_light_diffuse_colour derived_light_specular_colour derived_light_diffuse_colour_array derived_light_specular_colour_array fog_colour fog_params camera_position camera_position_object_space time time_0_x costime_0_x sintime_0_x tantime_0_x time_0_x_packed time_0_1 costime_0_1 sintime_0_1 tantime_0_1 time_0_1_packed time_0_2pi costime_0_2pi sintime_0_2pi tantime_0_2pi time_0_2pi_packed frame_time fps viewport_width viewport_height inverse_viewport_width inverse_viewport_height viewport_size texel_offsets view_direction view_side_vector view_up_vector fov near_clip_distance far_clip_distance texture_viewproj_matrix scene_depth_range shadow_scene_depth_range texture_size inverse_texture_size packed_texture_size pass_number pass_iteration_number animation_parametric custom target tangent binormal blendIndices blendWeights float float2 float3 int ";


MaterialPageControl::MaterialPageControl(wxWindow *Parent, const wxString &FilePath) :
	ScintillaPageControl(Parent, SCLEX_AUTOMATIC, FilePath)
{
}


//MaterialPageControl::~MaterialPageControl(void)
//{
//}


END_NAMESPACE
#endif