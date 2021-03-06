//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGStoryCameraFormatModelProviding-Protocol.h>

@class IGStoryCameraFormatModel, NSString;
@protocol IGUserLauncherSetProviding;

@interface IGStoryCameraFormatModelProvider : NSObject <IGStoryCameraFormatModelProviding>
{
    id <IGUserLauncherSetProviding> _launcherSet;
    IGStoryCameraFormatModel *_liveFormatModel;
    IGStoryCameraFormatModel *_boomerangFormatModel;
    IGStoryCameraFormatModel *_handsFreeFormatModel;
    IGStoryCameraFormatModel *_superzoomFormatModel;
    IGStoryCameraFormatModel *_photoBoothFormatModel;
    IGStoryCameraFormatModel *_musicFormatModel;
    IGStoryCameraFormatModel *_createFormatModel;
    IGStoryCameraFormatModel *_clipFormatModel;
    IGStoryCameraFormatModel *_layoutFormatModel;
    IGStoryCameraFormatModel *_multiCamFormatModel;
    IGStoryCameraFormatModel *_igtvFormatModel;
    IGStoryCameraFormatModel *_feedFormatModel;
    IGStoryCameraFormatModel *_igtvClippingFormatModel;
    IGStoryCameraFormatModel *_multiCaptureFormatModel;
    IGStoryCameraFormatModel *_gridLevelFormatModel;
    IGStoryCameraFormatModel *_colorFilterFormatModel;
    IGStoryCameraFormatModel *_visualSearchFormatModel;
    IGStoryCameraFormatModel *_arStickersFormatModel;
}

- (void).cxx_destruct;
- (id)modelForCameraSwitcherMode:(long long)arg1 cameraStyle:(long long)arg2;
- (id)modelForCameraSwitcherMode:(long long)arg1;
- (id)initWithLauncherSet:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

