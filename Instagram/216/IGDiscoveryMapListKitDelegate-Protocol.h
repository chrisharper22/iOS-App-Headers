//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGDiscoveryMapStoryViewerPresentationHandler-Protocol.h"
#import "NSObject-Protocol.h"

@class IGCameraEffectPreview, IGDiscoveryMapListKit, IGGuide, IGListAdapter, IGMapPin, IGMapPinPreviewMedia, IGRefinementModel, NSString;

@protocol IGDiscoveryMapListKitDelegate <NSObject, IGDiscoveryMapStoryViewerPresentationHandler>
- (void)discoveryMapListKit:(IGDiscoveryMapListKit *)arg1 didDisplayLocationID:(NSString *)arg2;
- (void)discoveryMapListKitdidTapSeeAll:(IGDiscoveryMapListKit *)arg1;
- (void)discoveryMapListKitDidTapExploreNearby:(IGDiscoveryMapListKit *)arg1;
- (void)discoveryMapListKit:(IGDiscoveryMapListKit *)arg1 didSelectEffectPreview:(IGCameraEffectPreview *)arg2 effectRadius:(NSString *)arg3;
- (void)discoveryMapListKit:(IGDiscoveryMapListKit *)arg1 didSelectRefinement:(IGRefinementModel *)arg2;
- (void)discoveryMapListKit:(IGDiscoveryMapListKit *)arg1 didSelectMapPin:(IGMapPin *)arg2 mapPinPreviewMedia:(IGMapPinPreviewMedia *)arg3;
- (void)discoveryMapListKit:(IGDiscoveryMapListKit *)arg1 didSelectGuide:(IGGuide *)arg2 listAdapter:(IGListAdapter *)arg3;
@end
