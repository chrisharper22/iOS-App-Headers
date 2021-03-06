//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import "IGSwitchViewProviderDelegate-Protocol.h"

@class IGUserSession, IGViewController, NSNumber, NSString;
@protocol IGProfileMusicSettingsToggleFieldSectionControllerDelegate;

@interface IGProfileMusicSettingsToggleFieldSectionController : IGListSectionController <IGSwitchViewProviderDelegate>
{
    IGUserSession *_userSession;
    NSNumber *_fieldModel;
    IGViewController<IGProfileMusicSettingsToggleFieldSectionControllerDelegate> *_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak IGViewController<IGProfileMusicSettingsToggleFieldSectionControllerDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)_musicTabVisibiltyToggled:(_Bool)arg1;
- (void)switchProvider:(id)arg1 switchToggled:(_Bool)arg2;
- (void)didDeselectItemAtIndex:(long long)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

