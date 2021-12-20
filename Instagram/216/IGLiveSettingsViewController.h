//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGAudienceBlocklistViewControllerDelegate-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "IGStorySettingsDisclosureSectionControllerDelegate-Protocol.h"
#import "IGStorySettingsRadioSectionControllerDelegate-Protocol.h"
#import "IGStorySettingsSwitchSectionControllerDelegate-Protocol.h"

@class IGAsyncTask, IGAudienceStoryBlocklistManager, IGBasicListViewController, IGSwitch, IGUserSession, NSString;

@interface IGLiveSettingsViewController : IGViewController <IGAudienceBlocklistViewControllerDelegate, IGListAdapterDataSource, IGStorySettingsDisclosureSectionControllerDelegate, IGStorySettingsSwitchSectionControllerDelegate, IGStorySettingsRadioSectionControllerDelegate>
{
    IGBasicListViewController *_mainListViewController;
    IGAsyncTask *_blocklistManagerLoadingTask;
    long long _badgesSetting;
    _Bool _passesBadgesMES;
    _Bool _passedBadgesOnboarding;
    _Bool _isLiveArchiveSwitchOn;
    _Bool _isAlwaysShareLiveSwitchOn;
    IGUserSession *_userSession;
    long long _entryPoint;
    IGAudienceStoryBlocklistManager *_blocklistManager;
    IGSwitch *_liveArchiveSwitch;
    IGSwitch *_alwaysShareLiveSwitch;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGSwitch *alwaysShareLiveSwitch; // @synthesize alwaysShareLiveSwitch=_alwaysShareLiveSwitch;
@property(retain, nonatomic) IGSwitch *liveArchiveSwitch; // @synthesize liveArchiveSwitch=_liveArchiveSwitch;
@property(nonatomic) _Bool isAlwaysShareLiveSwitchOn; // @synthesize isAlwaysShareLiveSwitchOn=_isAlwaysShareLiveSwitchOn;
@property(nonatomic) _Bool isLiveArchiveSwitchOn; // @synthesize isLiveArchiveSwitchOn=_isLiveArchiveSwitchOn;
@property(retain, nonatomic) IGAudienceStoryBlocklistManager *blocklistManager; // @synthesize blocklistManager=_blocklistManager;
@property(readonly, nonatomic) long long entryPoint; // @synthesize entryPoint=_entryPoint;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void)_logFunnelAction:(id)arg1;
- (void)_presentErrorToast;
- (void)_handleBadgesSettingChange:(long long)arg1;
- (void)_handleIndividualHidesRowSelected;
- (void)_handleSwitchUpdated:(id)arg1 isSucceeded:(_Bool)arg2;
- (void)_handleAlwaysShareLiveSwitchToggled:(_Bool)arg1;
- (void)_handleLiveArchiveSwitchToggled:(_Bool)arg1;
- (void)audienceBlocklistViewControllerDidCancel:(id)arg1;
- (void)audienceBlocklistViewControllerDidSaveUserList:(id)arg1;
- (_Bool)audienceBlockListViewControllerCameFromLive:(id)arg1;
- (_Bool)audienceBlocklistViewControllerShouldShowNavigationButtons:(id)arg1;
- (_Bool)audienceBlocklistViewControllerShouldShowTitle:(id)arg1;
- (void)detailedDisclosureSectionControllerDidSelect:(id)arg1;
- (void)storySettingsSwitchSectionControllerDidSelect:(id)arg1 switchIsOn:(_Bool)arg2;
- (void)radioSectionControllerDidSelect:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 entryPoint:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

