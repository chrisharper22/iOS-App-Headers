//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGARLocationEffect, IGCameraEffectPreview, IGDiscoveryMapEffectGalleryListKit, NSString;

@protocol IGDiscoveryMapEffectGalleryListKitDelegate <NSObject>
- (void)effectGalleryListKit:(IGDiscoveryMapEffectGalleryListKit *)arg1 shouldLogEvent:(long long)arg2 withEffectID:(NSString *)arg3 withOriginType:(long long)arg4;
- (void)effectGalleryListKit:(IGDiscoveryMapEffectGalleryListKit *)arg1 didTapStickerCTA:(IGARLocationEffect *)arg2;
- (void)effectGalleryListKit:(IGDiscoveryMapEffectGalleryListKit *)arg1 didTapPreview:(IGCameraEffectPreview *)arg2 withEffectRadius:(NSString *)arg3;
@end

