#ifndef _DOLPHIN_GX_GXTRANSFORM_H_
#define _DOLPHIN_GX_GXTRANSFORM_H_

#include <dolphin/gx/GXEnum.h>

#ifdef __cplusplus
extern "C" {
#endif

#define GX_PROJECTION_SZ  7

void GXSetProjection(f32 mtx[4][4], GXProjectionType type);
void GXSetViewport(f32 left, f32 top, f32 wd, f32 ht, f32 nearz, f32 farz);
void GXLoadPosMtxImm(f32 mtx[3][4], u32 id);
void GXLoadNrmMtxImm(f32 mtx[3][4], u32 id);
void GXLoadTexMtxImm(f32 mtx[][4], u32 id, GXTexMtxType type);
void GXSetCurrentMtx(u32 id);
void GXSetViewportJitter(f32 left, f32 top, f32 wd, f32 ht, f32 nearz, f32 farz, u32 field);
void GXSetScissorBoxOffset(s32 x_off, s32 y_off);
void GXSetClipMode(GXClipMode mode);

#ifdef __cplusplus
}
#endif

#endif
